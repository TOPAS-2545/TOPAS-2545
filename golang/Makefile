# MIT License
#
# Copyright (c) 2023 Yunex Limited
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

# rule to convert the asn1 to Go code
generate: ISO10711-OneModule.asn
	cd asn1go/cmd/asn1go && go run main.go ../../../ISO10711-OneModule.asn ../../../ipmtscd/IPMTSCD.go

# rule to convert the asn1 to Go code
build: ISO10711-OneModule.asn
	go build

# rule to run the decode and then encode
run:
	./testapp -m recode	

# check for the asn1 file
ISO10711-OneModule.asn:
	@echo "Cannot find ISO10711-OneModule.asn, this is a modified version that can be used by asn1go"

	