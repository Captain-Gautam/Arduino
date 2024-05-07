int rled = 13;
int dit=50;
int duk=500;

void setup() {
  // put your setup code here, to run once:

pinMode(rled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//Fast Blink
digitalWrite(rled, HIGH);
delay(dit);
digitalWrite(rled, LOW);
delay(dit);

digitalWrite(rled, HIGH);
delay(dit);
digitalWrite(rled, LOW);
delay(dit);

digitalWrite(rled, HIGH);
delay(dit);
digitalWrite(rled, LOW);
delay(dit);

//Slow Blink
digitalWrite(rled, HIGH);
delay(duk);
digitalWrite(rled, LOW);
delay(duk);

digitalWrite(rled, HIGH);
delay(duk);
digitalWrite(rled, LOW);
delay(duk);

digitalWrite(rled, HIGH);
delay(duk);
digitalWrite(rled, LOW);
delay(duk);

//Fast Blink

digitalWrite(rled, HIGH);
delay(dit);
digitalWrite(rled, LOW);
delay(dit);

digitalWrite(rled, HIGH);
delay(dit);
digitalWrite(rled, LOW);
delay(dit);

digitalWrite(rled, HIGH);
delay(dit);
digitalWrite(rled, LOW);
delay(dit);

delay(1000);
}
