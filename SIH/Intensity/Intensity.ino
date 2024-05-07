int sensor1 = 33;      /*Analogue Input for photoresistor*/
int led = 32;         /*LED output Pin*/
int sensor2 = 35;


void setup() {
    Serial.begin(115200);     /*Baud rate for serial communication*/
    pinMode(led, OUTPUT);   /*LED Pin set as output */
}
void loop() {
    int LDR_Val1 = analogRead(sensor1);
    Serial.print("LDR Output Value1: ");
    Serial.print(LDR_Val1);
    
    int LDR_Val2 = analogRead(sensor2);   
    Serial.print("            LDR Output Value2: ");
    Serial.print(LDR_Val2);
    Serial.println("");  

    //digitalWrite(led, HIGH);

    if(LDR_Val1 <= 0){
      digitalWrite(led, HIGH);
      if(LDR_Val2 >= 2000){
        Serial.print("SAFE");
      }
      else 
        Serial.print("Not Safe");
    }
    else 
      digitalWrite(led, LOW);



  
}
