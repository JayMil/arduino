
// rgb led demo
int redPin = 3;
int greenPin = 5;
int bluePin = 6;

void setup() {
    pinMode(redPin,OUTPUT);
    pinMode(greenPin,OUTPUT);
    pinMode(bluePin,OUTPUT);
}

void loop() {
    setColor(255, 100, 0); // orange
    delay(1000);
    setColor(255, 69, 0); // orange
    delay(1000);
    setColor(255, 165, 0); // orange
    delay(1000);
    setColor(255, 140, 0); // orange
    delay(1000);
}

void basic() {
    setColor(255, 0, 0); // red
    delay(1000);
    setColor(0, 255, 0); // green
    delay(1000);
    setColor(0, 0, 255); // blue
    delay(1000);
    setColor(255, 255, 255); // white
    delay(1000);
    setColor(180, 0, 255); // purple
    delay(1000);

}

void setColor(int redValue, int greenValue, int blueValue) {
    analogWrite(redPin, redValue);
    analogWrite(greenPin, greenValue);
    analogWrite(bluePin, blueValue);
}
