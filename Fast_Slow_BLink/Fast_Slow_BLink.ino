int pin = 13;
int wait = 500;
int pause = 2000;

void setup() {
  // put your setup code here, to run once:

pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//Blinks fastly having of gap 0.5sec
digitalWrite(pin, HIGH);
delay(wait);
digitalWrite(pin, LOW);
delay(wait);

digitalWrite(pin, HIGH);
delay(wait);
digitalWrite(pin, LOW);
delay(wait);

digitalWrite(pin, HIGH);
delay(wait);
digitalWrite(pin, LOW);
delay(wait);

digitalWrite(pin, HIGH);
delay(wait);
digitalWrite(pin, LOW);
delay(wait);

digitalWrite(pin, HIGH);
delay(wait);
digitalWrite(pin, LOW);
delay(wait);

// Blinks Slowly for gapping of 2sec delay
digitalWrite(pin, HIGH);
delay(pause);
digitalWrite(pin, LOW);
delay(pause);

digitalWrite(pin, HIGH);
delay(pause);
digitalWrite(pin, LOW);
delay(pause);

digitalWrite(pin, HIGH);
delay(pause);
digitalWrite(pin, LOW);
delay(pause);

digitalWrite(pin, HIGH);
delay(pause);
digitalWrite(pin, LOW);
delay(pause);

digitalWrite(pin, HIGH);
delay(pause);
digitalWrite(pin, LOW);
delay(pause);


}
