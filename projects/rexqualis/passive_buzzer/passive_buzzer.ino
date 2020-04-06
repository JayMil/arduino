
int Do = 262,
    Re = 294,
    Mi = 330, 
    Fa = 349,
    Sol = 392,
    La = 440,
    Si = 494,
    Do2 = 524;

int buzz = 12; // any digital pin will also work

int wait = 0;

void setup() {
    pinMode(buzz, OUTPUT);
}

void loop() {
    wait = 500;
    tone(buzz, Do, wait);
    delay(1000);
    tone(buzz, Re, wait);
    delay(1000);
    tone(buzz, Mi, wait);
    delay(1000);
    tone(buzz, Fa, wait);
    delay(1000);
    tone(buzz, Sol, wait);
    delay(1000);
    tone(buzz, La, wait);
    delay(1000);
    tone(buzz, Si, wait);
    delay(1000);
    tone(buzz, Do2, wait);
    delay(1000);
    noTone(buzz);

}

