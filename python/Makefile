


../python-detector.ber: det_encoder.py ${ASNFILES}
	@python3 -m venv venv
	@. venv/bin/activate && pip3 install -r requirements.txt
	@. venv/bin/activate && python3 det_encoder.py ${ASNFILES}
	
