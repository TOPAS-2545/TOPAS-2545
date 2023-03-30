

build: 
	cd chemikadze-asn1go/cmd/asn1go && go run main.go ../../../ISO10711-OneModule.asn ../../../ipmtscd/IPMTSCD.go

	go build

run:
	./testapp -m encode
	./testapp -m decode
