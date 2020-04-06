PROGRAM=segment_display
PROJECT=../$(PROGRAM)
CLEAR_PROJ=~/Documents/code/arduino/projects/clear

.PHONY: upload
upload: build
	echo "...uploading $(PROGRAM)"
	arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:mega:cpu=atmega2560 $(PROJECT)

.PHONY: build
build: clean
	echo "...building $(PROJECT)"
	arduino-cli compile --fqbn arduino:avr:mega:cpu=atmega2560 $(PROJECT)

.PHONY: clean
clean:
	echo "...cleaning $(PROJECT)"
	rm -f $(PROGRAM).arduino.avr.mega.elf
	rm -f $(PROGRAM).arduino.avr.mega.hex 
	rm -f $(PROGRAM).arduino.avr.mega.with_bootloader.hex	

.PHONY: clear
clear:
	echo "...clearing arduino"
	arduino-cli compile --fqbn arduino:avr:mega:cpu=atmega2560 $(CLEAR_PROJ)
	arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:mega:cpu=atmega2560 $(CLEAR_PROJ)

# list device
.PHONY: list
list:
	echo "...devices"
	ls -l /dev/ttyACM*
	echo "...boards"
	arduino-cli board list | grep -B1 'ACM'
