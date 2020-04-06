
// tilt ball sensor

const int ledPin = 8;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    int i;
    while(1) {
        i = analogRead(5); // Read the simulation 5 voltage value
        if (i > 1022) { // if it's greater than 512 (2.5v)
            digitalWrite(ledPin, HIGH); // turn led on
        } else {
            digitalWrite(ledPin, LOW); // turn led off
        }
    }
}

