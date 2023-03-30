


../python-detector.ber: det_encoder.py ../detection.json
	@python3 -m venv venv
	@. venv/bin/activate && pip3 install -r requirements.txt
	@. venv/bin/activate && python3 det_encoder.py $(addprefix ../, ${ASNFILES}) 
	

# rule to test the different files generated
test:
	@python3 -m venv venv
	@. venv/bin/activate && pip3 install -r requirements.txt
	@. venv/bin/activate && python3 test.py $(addprefix ../, ${ASNFILES}) 
	
	
