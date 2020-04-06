
// Simple demo blinker
//#define PIN_LED 8
int PIN_LED = 8;

void setup() {
    pinMode(PIN_LED,OUTPUT);
}

void loop() {
    blink(100);
}

void blink(int rate) {
    digitalWrite(PIN_LED,HIGH);
    delay(rate);
    digitalWrite(PIN_LED,LOW);
    delay(rate);
}
