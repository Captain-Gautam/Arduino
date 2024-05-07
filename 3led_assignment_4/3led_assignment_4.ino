int rled = 8;
int gled = 10;
int rled1 = 13;
int rdelay = 30;
int gdelay = 300;
int r1delay = 450;


void setup()
{
pinMode(rled, OUTPUT);
pinMode(gled, OUTPUT);
pinMode(rled1, OUTPUT);
}

void loop()
{
// Red Led 5 time faster
digitalWrite(rled, HIGH);
delay(rdelay);
digitalWrite(rled, LOW);
delay(rdelay);

//Green Led 10 times slower
digitalWrite(gled, HIGH);
delay(gdelay);
digitalWrite(gled, LOW);
delay(gdelay);

// Red Led 1 15 time slower
digitalWrite(rled1, HIGH);
delay(r1delay);
digitalWrite(rled1, LOW);
delay(r1delay);

delay(1000);

  
}
