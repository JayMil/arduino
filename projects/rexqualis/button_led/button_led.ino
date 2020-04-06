
// control an led with a button
int ledPin = 5;
int buttonAPin = 9;
int buttonBPin = 8;
byte leds = 0;

void setup() {
    pinMode(ledPin,OUTPUT);
    pinMode(buttonAPin,INPUT_PULLUP);
    pinMode(buttonBPin,INPUT_PULLUP);
}

void loop() {
    if(digitalRead(buttonAPin) == LOW) {
        digitalWrite(ledPin, HIGH);
    }

    if(digitalRead(buttonBPin) == LOW) {
        digitalWrite(ledPin, LOW);
    }
}

