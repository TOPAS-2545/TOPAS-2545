
import asn1tools
import base64
import hashlib
import uuid
import time
import json
import sys

print("Loading Compiler...")

asnlist = sys.argv[1:]

print(asnlist)

def ordered(obj):
    if isinstance(obj, dict):
        return sorted((k, ordered(v)) for k, v in obj.items())
    if isinstance(obj, list):
        return sorted(ordered(x) for x in obj)
    else:
        return obj

# load in the reference file
jerEncoded = asn1tools.compile_files(asnlist, 'jer')

# load in the reference file
file = open("../detection.json", "r") 

txtdata = file.read()

# decode to internal format
decodedMessage_reference = jerEncoded.decode("IPMSTSCD-Data", bytearray(txtdata, encoding='utf8'))

#--------------------------------
# and define the tests
tests = [
            {
                "srcfile":"../c-detector.xer", 
                "binary": False,
                "decoder":"xer"
            },
            {
                "srcfile":"../c-detector.ber", 
                "binary": True,
                "decoder":"ber"
            },
            {
                "srcfile":"../golang-detector.ber", 
                "binary": True,
                "decoder":"ber"
            }
        ]

print("Reference: "+str(decodedMessage_reference))

# for each test....
for curTest in tests:
    
    print("##################################################")
    print("Performing test on "+curTest["srcfile"]+" using "+curTest["decoder"])
    
    decoder  = asn1tools.compile_files(asnlist, curTest["decoder"])
    
    
    openmode="r"
    if curTest["binary"]:
        openmode=openmode+"b"
    
    file = open(curTest["srcfile"], openmode) 
    
    txtdata = file.read()
    
    if curTest["binary"]==False:
        txtdata=bytearray(txtdata, encoding='utf8') 
    
    # decode to internal format
    decodedMessage_c = decoder.decode("IPMSTSCD-Data", txtdata)
    
    print(str(decodedMessage_c))
    
    # and test them
    if ordered(decodedMessage_c) != ordered(decodedMessage_reference):
        raise Exception("Test does not pass") 


