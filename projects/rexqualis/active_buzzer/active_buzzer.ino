
// Simple demo blinker
//#define PIN_LED 8
int buzzer = 12;

void setup() {
    pinMode(buzzer,OUTPUT);
}

void loop() {
    unsigned char i;
    while(1) {
        //output an frequency
        for(i=0;i<80;i++) {
            digitalWrite(buzzer, HIGH);
            delay(10);
            digitalWrite(buzzer, LOW);
            delay(20);
            digitalWrite(buzzer, HIGH);
            delay(30);
            digitalWrite(buzzer, LOW);
            delay(40);
        }
    }

}

void basic() {
    unsigned char i;
    while(1) {
        //output an frequency
        for(i=0;i<80;i++) {
            digitalWrite(buzzer, HIGH);
            delay(1000);
            digitalWrite(buzzer, LOW);
            delay(1);
        }

        //output another frequency
        for(i=0;i<100;i++) {
            digitalWrite(buzzer, HIGH);
            delay(2);
            digitalWrite(buzzer, LOW);
            delay(2);
        }
    }

}

