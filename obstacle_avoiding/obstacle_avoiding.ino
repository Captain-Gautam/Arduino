#define trigPin 12
#define echoPin 13
//#define led 4
// motor one
int enA = 8;
int in1 = 9;
int in2 = 10;
// motor two
int enB = 6;
int in3 = 5;
int in4 = 4;


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //pinMode(led, OUTPUT);
   // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
 
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 40) {  // 


    
    //digitalWrite(led,HIGH); // 
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 analogWrite(enA, 200); 

   digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
    analogWrite(enB, 200);
}
  else {
   // digitalWrite(led,LOW);
    // turn on motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enA, 200);
  // turn on motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enB, 200);
   
  }
}
