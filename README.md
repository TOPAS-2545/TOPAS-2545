# Introduction

This repo contains the example implememtations for the "Intelligent Transport Systems — Interface Protocol and Message Set Definition between Traffic Signal Controllers and Detectors" (ISO10711). 

## TODO

* [ ] Move golang deps under the TOPAS repo
* [ ] Add description of how the golang system works
* [ ] Add test

# Description

The example contains a C, golang and python implementation of the ISO10711. It does not contain the actual ISO10711 ASN as this is not currently distrobutable. 

# Requirements

The example has been designed to run under linux. 

It uses the following tools

* Python3
* asn1c (https://github.com/vlm/asn1c)


## Python example

The Python example uses the asn1tools to perform the conversions.

## C example

The C example uses asn1c (https://github.com/vlm/asn1c).  

## golang

The system asn1 package within GOLANG has the following issues

1. Does not easily support CHOICE
2. Does not support REAL types. 

  