
// pin 12 (RCLK) of the shift register to pin 4 on the Arduino
// This will be referred to as the "latch pin"
int latchPin = 4;

// pin 11 (SRCLK) of the shift register to pin 5 on the Arduino
// This will be referred to as the "clock pin"
int clockPin = 5;

// pin 14 (SER) of the shift register to pin 2 on the Arduino
// This will be referred to as the "data pin"
int dataPin = 2;

// a variable called 'leds' is defined. 
// This will be used to hold the pattern of which LEDs are
//      currently turned on or off. Data of type 'byte' represents
//      numbers using eight bits. Each can be either on or off, so
//      this is perfect for keeping track of which of our eight
//      LEDs are on or off.
byte leds = 0;

int currentLED = 0;


void setup() {
    pinMode(latchPin, OUTPUT);
    pinMode(dataPin, OUTPUT);
    pinMode(clockPin, OUTPUT);
    leds = 0;
}

/*
    In the loop method, we clear the bits in the leds variable
    at the start of every iteration so that all the bits are 
    set to 0 as we only want to light up one LED at a time.
    After this we increment or reset the currentLED variable 
    so that we are lighting up the correct LED next.

*/
void loop() {
    leds = 0;

    if (currentLED == 7) {
        currentLED = 0;
    } else {
        currentLED++;
    }
    bitSet(leds, currentLED);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, leds);
    digitalWrite(latchPin, HIGH);
    delay(250);
}

