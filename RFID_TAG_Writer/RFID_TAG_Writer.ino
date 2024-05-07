#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10  // Define the SS (Slave Select) pin for MFRC522
#define RST_PIN 9   // Define the RST (Reset) pin for MFRC522

MFRC522 mfrc522(SS_PIN, RST_PIN);  // Create MFRC522 instance

void setup() {
  Serial.begin(9600);
  SPI.begin();        // Initiate SPI communication
  mfrc522.PCD_Init(); // Initiate MFRC522

  Serial.println("Ready to write URL to NFC tag!");
}

void loop() {
  // Look for new cards
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
    Serial.println("Found an NFC tag!");

    // Get the UID of the card
    String uid = getUID();
    Serial.print("Card UID: ");
    Serial.println(uid);

    // Write the URL to the NFC tag
    writeURLToTag(uid, "http://www.example.com");

    delay(2000); // Delay to prevent rapid scanning
  }
}

String getUID() {
  String uid = "";
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    uid += String(mfrc522.uid.uidByte[i] < 0x10 ? "0" : "");
    uid += String(mfrc522.uid.uidByte[i], HEX);
  }
  return uid;
}

void writeURLToTag(const String &uid, const String &url) {
  // Prepare the data to be written
  byte data[16];
  int len = url.length();
  int blockSize = len > 16 ? 16 : len;  // Ensure we don't exceed the block size
  url.getBytes(data, blockSize + 1);

  // Authenticate the sector where you want to write (adjust the sector number accordingly)
  if (mfrc522.PCD_Authenticate(MFRC522::PICC_CMD_MF_AUTH_KEY_A, 1, mfrc522.uid.uidByte, mfrc522.uid.size, nullptr, 0) == MFRC522::STATUS_OK) {
    // Write the data to the sector (adjust the block number accordingly)
    mfrc522.MIFARE_Write(1, data, 16);

    // Stop the authentication process
    mfrc522.PICC_HaltA();
    mfrc522.PCD_StopCrypto1();

    Serial.println("URL successfully written to the NFC tag!");
  } else {
    Serial.println("Authentication failed. Unable to write URL to the NFC tag.");
  }
}
