PROGRAM=myBlinky
PROJECT=../$(PROGRAM)

# if device access is denied
# make device
DEVICE=/dev/ttyACM0

.PHONY: upload
upload: build
	echo "uploading $(PROGRAM)"
	arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:mega:cpu=atmega2560 $(PROJECT)

.PHONY: build
build: clean
	arduino-cli compile --fqbn arduino:avr:mega:cpu=atmega2560 $(PROJECT)

.PHONY: clean
clean:
	rm -f $(PROGRAM).arduino.avr.mega.elf
	rm -f $(PROGRAM).arduino.avr.mega.hex 
	rm -f $(PROGRAM).arduino.avr.mega.with_bootloader.hex	

# fix permissions on device
.PHONY: perm
perm:
	sudo chmod a+rw $(DEVICE)

# list device
.PHONY: list
list:
	arduino-cli board list | grep -B1 'ACM'
