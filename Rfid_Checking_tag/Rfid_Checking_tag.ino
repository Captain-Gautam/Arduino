
#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9
int green=3, red=2; 
int relay1=4, relay2=5;
int tagCounter = 0; //keeps the tracker of number.

byte readCard[4];
String MasterTag1 = "B5EED1CF";
String MasterTag2 = "D3861410";
// White Card UID: D3861410
// Blue Card UID: B5EED1CF
String tagID = "";

// Create instances
MFRC522 mfrc522(SS_PIN, RST_PIN);


/**********************************************************************************************
 * setup() function
**********************************************************************************************/
void setup() 
{
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  Serial.begin(9600);
  SPI.begin();
  
  
  mfrc522.PCD_Init();
  delay(4);
  //Show details of PCD - MFRC522 Card Reader
  mfrc522.PCD_DumpVersionToSerial();
  
  
  Serial.println("--------------------------");
  Serial.println(" Access Control ");
  Serial.println("Scan Your Card>>");
  
}


/**********************************************************************************************
 * loop() function
**********************************************************************************************/
void loop() 
{
  //----------------------------------------------------------------------
  //Wait until new tag is available
  while (getID()) {
    
    if (tagID == MasterTag1 || tagID == MasterTag2){
      Serial.println(" Access Granted!");
      Serial.println("--------------------------");
       //You can write any code here like, opening doors, 
       //switching ON a relay, lighting up an LED etc...
       if (tagCounter % 2 == 0){
          digitalWrite(relay2, HIGH);
          digitalWrite(green, HIGH); 
          delay(1000);
          digitalWrite(relay2, LOW);
          digitalWrite(green, LOW);
       }
       else{
          digitalWrite(relay1, HIGH);
          digitalWrite(red, HIGH);
          delay(1000);
          digitalWrite(relay1, LOW);
          digitalWrite(red, LOW); 
       }
       tagCounter++;
    }
 
    else{
      Serial.println(" Access Denied!");
       digitalWrite(relay1, HIGH);
       digitalWrite(red, HIGH);
       delay(1000);
       digitalWrite(relay1, LOW);
       digitalWrite(red, LOW); 
      Serial.println("--------------------------");
    }
   
    delay(2000);
    Serial.println(" Access Control ");
    Serial.println("Scan Your Card>>");
  }
  //Serial.println(tagID);
  //----------------------------------------------------------------------
}




/**********************************************************************************************
 * getID() function
 * Read new tag if available
**********************************************************************************************/
boolean getID() 
{
 
  // Getting ready for Reading PICCs
  //If a new PICC placed to RFID reader continue
  if ( ! mfrc522.PICC_IsNewCardPresent()) {
    return false;
  }
  
  //Since a PICC placed get Serial and continue
  if ( ! mfrc522.PICC_ReadCardSerial()) {
  return false;
  }
 
  tagID = "";
  // The MIFARE PICCs that we use have 4 byte UID
  for ( uint8_t i = 0; i < 4; i++) {
  //readCard[i] = mfrc522.uid.uidByte[i];
  // Adds the 4 bytes in a single String variable
  tagID.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
 
  tagID.toUpperCase();
  mfrc522.PICC_HaltA(); // Stop reading
  return true;
  
}
