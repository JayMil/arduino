
// Template project for a blinking light
int ledPin = 13;

void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    blink(1000);
}

void blink(int rate) {
    Serial.println("Blinking");
    digitalWrite(ledPin, HIGH);
    delay(rate);
    digitalWrite(ledPin, LOW);
    delay(rate);
}
