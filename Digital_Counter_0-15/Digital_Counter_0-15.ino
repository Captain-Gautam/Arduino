int green = 11;
int red = 10;
int green1 = 9;
int red1 = 8;
int late = 500;


void setup() {
  // put your setup code here, to run once:

  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // All will blink in binary form.
  
  // 0: 0000
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(red1, LOW);
  delay(late);

  // 1: 0001
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(red1, LOW);
  delay(late);

  // 2: 0010
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(green1, LOW);
  digitalWrite(red1, LOW);
  delay(late);


  // 3: 0011
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  digitalWrite(green1, LOW);
  digitalWrite(red1, LOW);
  delay(late);


  // 4: 0100
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green1, HIGH);
  digitalWrite(red1, LOW);
  delay(late);

  // 5: 0101
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(green1, HIGH);
  digitalWrite(red1, LOW);
  delay(late);

  // 6: 0110
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(green1, HIGH);
  digitalWrite(red1, LOW);
  delay(late);
  
  // 7: 0111
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  digitalWrite(green1, HIGH);
  digitalWrite(red1, LOW);
  delay(late);

    // 8: 1000
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(red1, HIGH);
  delay(late);

  // 9: 1001
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(red1, HIGH);
  delay(late);

  // 10: 1010
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(green1, LOW);
  digitalWrite(red1, HIGH);
  delay(late);

  // 11: 1011
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  digitalWrite(green1, LOW);
  digitalWrite(red1, HIGH);
  delay(late);

  // 12: 1100
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green1, HIGH);
  digitalWrite(red1, HIGH);
  delay(late);

  // 13: 1101
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(green1, HIGH);
  digitalWrite(red1, HIGH);
  delay(late);

  // 14: 1110
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(green1, HIGH);
  digitalWrite(red1, HIGH);
  delay(late);

  // 15: 1111
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  digitalWrite(green1, HIGH);
  digitalWrite(red1, HIGH);
  delay(late);


}
