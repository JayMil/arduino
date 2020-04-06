
// Simple demo blinker
const int ledPin = 8;       // digital output
const int buzzerPin = 10;   // digital output
const int sensorPin = 0;    // analog input

// photoresister min/max
const int minPhotoValue = 200;
const int maxPhotoValue = 800;

// set the min and max delay betwen blinks
const int minDuration = 100;
const int maxDuration = 1000;


void setup() {
    pinMode(ledPin, OUTPUT);    // enable output on the led pin
    pinMode(buzzerPin, OUTPUT);    // enable output on the led pin
    Serial.begin(9600);         // initialize Serial
}

void loop() {
    int rate = analogRead(sensorPin);

    // scale the blink rate between the min and max values
    rate = map(rate, minPhotoValue, maxPhotoValue, minDuration, maxDuration);
    // constrain the value
    rate = constrain(rate, minDuration, maxDuration);

    Serial.println(rate);
    blinkbuzz(rate);
}


void blinkbuzz(int rate) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    delay(rate);
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
    delay(rate);
}
