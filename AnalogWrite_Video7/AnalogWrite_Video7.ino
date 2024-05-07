int pin = 9;
int bright = 255;
int between = 100;
int dull = 0;
int wait = 500;


void setup() {
  // put your setup code here, to run once:
pinMode(pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pin, bright);
  delay(wait);
  analogWrite(pin, between);
  delay(wait);
  analogWrite(pin, dull);
  delay(wait);
  
}
