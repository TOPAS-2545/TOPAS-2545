# Introduction

This repo contains the example implementations for the "Intelligent Transport Systems — Interface Protocol and Message Set Definition between Traffic Signal Controllers and Detectors" (ISO10711). 

## TODO

* [x] Move golang deps under the TOPAS repo
* [x] Add description of how the golang system works
* [x] Add test framework
* [x] Add Licence
* [x] Add Docker version for easier testing
* [ ] Copyright assignment to TOPAS

# Description

The example contains a C, golang and python implementation of the ISO10711. It does not contain the actual ISO10711 ASN as this is not currently distributable. 

# Requirements

The example has been designed to run under linux. 

It uses the following tools:

* Python3
* asn1c (https://github.com/vlm/asn1c)
* A copy of the ISO1711.asn and ISO14927-1.asn ASN1 Files. 

# Running

It is possible to test the build and run stages without the ASN1 files, to do this type:

    make build_all run_all
    
This will convert the source files into binary files that are then run. 

If the ASN1 is available, the additional generation and testing stages can be used:

    make generate_all build_all run_all test_all
    
This will re-generate the source code from the ASN1 and then builds it, runs and test the results.

# Running Docker

A dockerfile is provide to allow the build to be performed within docker. To use type:

    make docker


# Description

## Python example

The Python example uses the asn1tools to perform the conversions. This is mainly used for the testing framework.

## C example

The C example uses asn1c (https://github.com/vlm/asn1c).  

## golang example

The golang system uses a third-party systems to convert the ASN1 into golang structures. It also uses a forked version of the encoders/asn1 system package because it does not support REAL types.  

# Testing

The testing system performs the following steps

1. Python asn1tools is used to convert the JER (JSON) version of the message into a BER version of the message. 
1. The C version of the converter: 
   1. Converts the BER version of the message generated by Python into an XER (XML)
   1. Converts the the XER version of the message it created into a BER version of the message
1. The golang version of the converter: 
   1. Converts the BER version of the message generated by Python into an BER version of the message
1. The Python test checks that each of the created files matches the original JER version of the message

 
   
   
