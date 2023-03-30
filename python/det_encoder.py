
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

xml_decoder = asn1tools.compile_files(asnlist, codec='xer')
jerEncoded = asn1tools.compile_files(asnlist, 'jer')
uperEncoded = asn1tools.compile_files(asnlist, 'uper')
derEncoder = asn1tools.compile_files(asnlist, 'der')
berEncoder  = asn1tools.compile_files(asnlist, 'ber')

# get the RAW XML data
file = open("../detection.json", "r") 

txtdata = file.read()

# decode to internal format
decodedMessage = jerEncoded.decode("IPMSTSCD-Data", bytearray(txtdata, encoding='utf8'))

print(decodedMessage)

res = berEncoder.encode("IPMSTSCD-Data", decodedMessage)

print(res)

with open("../python-detector.ber", "wb") as newfile:
    newfile.write(bytearray(res))



res = xml_decoder.encode("IPMSTSCD-Data", decodedMessage)

print(res)

with open("../python-detector.xer", "wb") as newfile:
    newfile.write(bytearray(res))
    
    
    