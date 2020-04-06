
// Template project for a blinking light
int ledPin = 13;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    blink(1000);
}

void blink(int rate) {
    digitalWrite(ledPin, HIGH);
    delay(rate);
    digitalWrite(ledPin, LOW);
    delay(rate);
}
