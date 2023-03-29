

ASNFILES=ISO10711.asn ISO14927-1.asn

export ASNFILES

# Run the Python version
run_python:
	@cp --preserve=timestamps ${ASNFILES} python
	@${MAKE} -C python
	
	

# Generate the C version of the code
test: c/converter-sample

	
	
c/converter-sample:
	@mkdir -p c
	@rm -f c/*.c c/*.h
	@cp ${ASNFILES} c
	@cd c && asn1c ${ASNFILES}
	
	@${MAKE} -C c all


	
.PHONY: run_python