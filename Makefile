

ASNFILES=ISO10711.asn ISO14927-1.asn

export ASNFILES

all: 


# Rule to convert the ASN into the language specific files
generate_all:
	# Generate the Python version - Not required
	# Generate the C version
	${MAKE} generate_c
	# Generate the Golang version 
	${MAKE} generate_go

# Rule to convert the ASN1 into the language files
build_all:
	# Build the Python version - Not required
	# Build the C version
	${MAKE} build_c
	# Build the Golang version 
	${MAKE} build_go

# rule to run the differnet Languages
run_all:
	${MAKE} run_python
	${MAKE} run_c
	${MAKE} run_go

test_all:
	${MAKE} test_python



# Rule to generate the C code from ASN1
generate_c:
	@cp --preserve=timestamps ${ASNFILES} c
	@${MAKE} -C c generate

# Rule to generate the GO code from ASN1
generate_go:
	@${MAKE} -C golang generate

# Rule to generate and build the C version
build_c:
	@${MAKE} -C c build	

# Rule to build the GOlang version	
build_go:
	@${MAKE} -C golang build	

# Run the Python version
run_python:
	@cp --preserve=timestamps ${ASNFILES} python
	@${MAKE} -C python

# Run the C version
run_c:
	# check that we can create ber encoded data
	@c/converter-sample -iber -oxer python-detector.ber > c-detector.xer

run_go:
	@${MAKE} -C golang run
	

# rule to use the python version to test the c and golang versions
test_python:
	@cp --preserve=timestamps ${ASNFILES} python
	@${MAKE} -C python test

	
.PHONY: all run_python run_c run_go


