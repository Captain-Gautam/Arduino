const int ledpin = 13;
const int buttonpin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = 0;
  buttonState = digitalRead(buttonpin);

  if (buttonState == HIGH){
    //Serial.println("1");
    digitalWrite(ledpin, HIGH);
  }

  else{
    digitalWrite(ledpin, LOW);
    //Serial.println("0"); 
  }
    
}