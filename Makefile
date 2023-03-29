

ASNFILES=ISO10711.asn ISO14927-1.asn

export ASNFILES

all: 

# rule to run the differnet Languages
run_all:
	${MAKE} run_python
	${MAKE} run_c
	${MAKE} run_go

# Rule to convert the ASN1 into the language files
build_all:
	# Build the Python version - Not required
	# Build the C version
	${MAKE} build_c
	# Build the Golang version - Not required
	${MAKE} build_go

# Rule to generate and build the C version
build_c:
	@cp --preserve=timestamps ${ASNFILES} c
	@${MAKE} -C c regen
	@${MAKE} -C c all	

# Rule to build the GOlang version	
build_go:
	@${MAKE} -C golang build	

# Run the Python version
run_python:
	@cp --preserve=timestamps ${ASNFILES} python
	@${MAKE} -C python

# Run the C version
run_c:
	@c/converter-sample -iber -oxer python-detector.ber > c-detector.xer

run_go:
	@${MAKE} -C golang run
	
.PHONY: all run_python run_c run_go


