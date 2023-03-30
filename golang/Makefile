
# rule to convert the asn1 to Go code
build: ISO10711-OneModule.asn
	cd asn1go/cmd/asn1go && go run main.go ../../../ISO10711-OneModule.asn ../../../ipmtscd/IPMTSCD.go
	go build

# rule to run the encode and decode
run:
	./testapp -m encode
	./testapp -m decode

# check for the asn1 file
ISO10711-OneModule.asn:
	@echo "Cannot find ISO10711-OneModule.asn, this is a modified version that can be used by asn1go"

	