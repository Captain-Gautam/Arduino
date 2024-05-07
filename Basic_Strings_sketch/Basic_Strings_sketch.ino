/*
 Basic String Sketch
 */

String text1 = "This is a string";
String text2 = " has more text";
String text3; // to be assigned within the sketch

void setup()
{
   Serial.begin(9600);

   Serial.print(text1);
   Serial.print(" is ");
   Serial.print(text1.length());
   Serial.print(" characters long.");

   Serial.print(" text2 is ");
   Serial.print(text2.length());
   Serial.print(" characters long.");

   text1.concat(text2);
   Serial.print("text1 now contains: ");
   Serial.print(text1);
     
}

void loop()
{
  
}
