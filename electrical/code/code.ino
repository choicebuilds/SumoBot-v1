const int DS1 = 7;
const int DS2 = 6;
const int DS3 = 5;
const int DS4 = 4;
const int DS5 = 3;
const int LS1 = 8;
const int LS2 = 2;
const int PWMA = 9;
const int PWMB = 10;

const int led1 = A1;
const int led2 = A2;
const int led3 = A3;
const int led4 = A4;
const int led5 = A5;
const int led6 = A0;
const int led7 = A7;

int DValue1;
int DValue2;
int DValue3;
int DValue4;
int DValue5;
int LValue1;
int LValue2;

void setup() {
pinMode(DS1, INPUT);
pinMode(DS2, INPUT);
pinMode(DS3, INPUT);
pinMode(DS4, INPUT);
pinMode(DS5, INPUT);
pinMode(LS1, INPUT);
pinMode(LS2, INPUT);

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);

pinMode(PWMA, OUTPUT);
pinMode(PWMB, OUTPUT);

Serial.begin(9600);
}

void loop() {
DValue1 = digitalRead(DS1);
DValue2 = digitalRead(DS2);
DValue3 = digitalRead(DS3);
DValue4 = digitalRead(DS4);
DValue5 = digitalRead(DS5);
LValue1 = digitalRead(LS1);
LValue2 = digitalRead(LS2);

DValue1 ? digitalWrite(led1, HIGH) : digitalWrite(led1, LOW);
DValue2 ? digitalWrite(led2, HIGH) : digitalWrite(led2, LOW);
DValue3 ? digitalWrite(led3, HIGH) : digitalWrite(led3, LOW);
DValue4 ? digitalWrite(led4, HIGH) : digitalWrite(led4, LOW);
DValue5 ? digitalWrite(led5, HIGH) : digitalWrite(led5, LOW);

LValue1 ? digitalWrite(led6, LOW) : digitalWrite(led6, HIGH);
LValue2 ? digitalWrite(led7, LOW) : digitalWrite(led7, HIGH);

analogWrite(PWMA, 50);
analogWrite(PWMB, 50);
delay(100);
}
