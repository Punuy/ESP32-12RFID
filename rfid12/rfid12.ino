#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN_RFID1 5
#define SS_PIN_RFID2 12
#define SS_PIN_RFID3 13
#define SS_PIN_RFID4 14
#define SS_PIN_RFID5 15
#define SS_PIN_RFID6 16
#define SS_PIN_RFID7 17
#define SS_PIN_RFID8 21
#define SS_PIN_RFID9 22
#define SS_PIN_RFID10 25
#define SS_PIN_RFID11 26
#define SS_PIN_RFID12 27
#define RST_PIN 0

MFRC522 rfid1(SS_PIN_RFID1, RST_PIN);
MFRC522 rfid2(SS_PIN_RFID2, RST_PIN);
MFRC522 rfid3(SS_PIN_RFID3, RST_PIN);
MFRC522 rfid4(SS_PIN_RFID4, RST_PIN);
MFRC522 rfid5(SS_PIN_RFID5, RST_PIN);
MFRC522 rfid6(SS_PIN_RFID6, RST_PIN);
MFRC522 rfid7(SS_PIN_RFID7, RST_PIN);
MFRC522 rfid8(SS_PIN_RFID8, RST_PIN);
MFRC522 rfid9(SS_PIN_RFID9, RST_PIN);
MFRC522 rfid10(SS_PIN_RFID10, RST_PIN);
MFRC522 rfid11(SS_PIN_RFID11, RST_PIN);
MFRC522 rfid12(SS_PIN_RFID12, RST_PIN);

void setup() {
  Serial.begin(115200);
  Serial.println(F("Initializing System"));
  
  SPI.begin();

  rfid1.PCD_Init();
  rfid2.PCD_Init();
  rfid3.PCD_Init();
  rfid4.PCD_Init();
  rfid5.PCD_Init();
  rfid6.PCD_Init();
  rfid7.PCD_Init();
  rfid8.PCD_Init();
  rfid9.PCD_Init();
  rfid10.PCD_Init();
  rfid11.PCD_Init();
  rfid12.PCD_Init();
  
  Serial.println(F("RFID Reader 1:"));
  rfid1.PCD_DumpVersionToSerial();
  Serial.println(F("RFID Reader 2:"));
  rfid2.PCD_DumpVersionToSerial();
  Serial.println(F("RFID Reader 3:"));
  rfid3.PCD_DumpVersionToSerial();
  Serial.println(F("RFID Reader 4:"));
  rfid4.PCD_DumpVersionToSerial();
  Serial.println(F("RFID Reader 5:"));
  rfid5.PCD_DumpVersionToSerial();
  Serial.println(F("RFID Reader 6:"));
  rfid6.PCD_DumpVersionToSerial();
  Serial.println(F("RFID Reader 7:"));
  rfid7.PCD_DumpVersionToSerial();
  Serial.println(F("RFID Reader 8:"));
  rfid8.PCD_DumpVersionToSerial();
  Serial.println(F("RFID Reader 9:"));
  rfid9.PCD_DumpVersionToSerial();
  Serial.println(F("RFID Reader 10:"));
  rfid10.PCD_DumpVersionToSerial();
  Serial.println(F("RFID Reader 11:"));
  rfid11.PCD_DumpVersionToSerial();
  Serial.println(F("RFID Reader 12:"));
  rfid12.PCD_DumpVersionToSerial();
}

void loop() {
  readRFID1();
  readRFID2();
  readRFID3();
  readRFID4();
  readRFID5();
  readRFID6();
  readRFID7();
  readRFID8();
  readRFID9();
  readRFID10();
  readRFID11();
  readRFID12();
}

void readRFID1() {
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }
  
  if (!rfid1.PICC_IsNewCardPresent() || !rfid1.PICC_ReadCardSerial())
    return;

  Serial.print(F("RFID1 UID: "));
  printDec(rfid1.uid.uidByte, rfid1.uid.size);
  Serial.println();
  
  rfid1.PICC_HaltA();
  rfid1.PCD_StopCrypto1();
}

void readRFID2() {
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  if (!rfid2.PICC_IsNewCardPresent() || !rfid2.PICC_ReadCardSerial())
    return;

  Serial.print(F("RFID2 UID: "));
  printDec(rfid2.uid.uidByte, rfid2.uid.size);
  Serial.println();

  rfid2.PICC_HaltA();
  rfid2.PCD_StopCrypto1();
}

void readRFID3() {
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  if (!rfid3.PICC_IsNewCardPresent() || !rfid3.PICC_ReadCardSerial())
    return;

  Serial.print(F("RFID3 UID: "));
  printDec(rfid3.uid.uidByte, rfid3.uid.size);
  Serial.println();

  rfid3.PICC_HaltA();
  rfid3.PCD_StopCrypto1();
}

void readRFID4() {
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  if (!rfid4.PICC_IsNewCardPresent() || !rfid4.PICC_ReadCardSerial())
    return;

  Serial.print(F("RFID4 UID: "));
  printDec(rfid4.uid.uidByte, rfid4.uid.size);
  Serial.println();

  rfid4.PICC_HaltA();
  rfid4.PCD_StopCrypto1();
}

void readRFID5() {
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  if (!rfid5.PICC_IsNewCardPresent() || !rfid5.PICC_ReadCardSerial())
    return;

  Serial.print(F("RFID5 UID: "));
  printDec(rfid5.uid.uidByte, rfid5.uid.size);
  Serial.println();

  rfid5.PICC_HaltA();
  rfid5.PCD_StopCrypto1();
}

void readRFID6() {
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  if (!rfid6.PICC_IsNewCardPresent() || !rfid6.PICC_ReadCardSerial())
    return;

  Serial.print(F("RFID6 UID: "));
  printDec(rfid6.uid.uidByte, rfid6.uid.size);
  Serial.println();

  rfid6.PICC_HaltA();
  rfid6.PCD_StopCrypto1();
}

void readRFID7() {
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }
  
  if (!rfid7.PICC_IsNewCardPresent() || !rfid7.PICC_ReadCardSerial())
    return;

  Serial.print(F("RFID7 UID: "));
  printDec(rfid7.uid.uidByte, rfid7.uid.size);
  Serial.println();
  
  rfid7.PICC_HaltA();
  rfid7.PCD_StopCrypto1();
}

void readRFID8() {
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  if (!rfid8.PICC_IsNewCardPresent() || !rfid8.PICC_ReadCardSerial())
    return;

  Serial.print(F("RFID8 UID: "));
  printDec(rfid8.uid.uidByte, rfid8.uid.size);
  Serial.println();

  rfid8.PICC_HaltA();
  rfid8.PCD_StopCrypto1();
}

void readRFID9() {
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  if (!rfid9.PICC_IsNewCardPresent() || !rfid9.PICC_ReadCardSerial())
    return;

  Serial.print(F("RFID9 UID: "));
  printDec(rfid9.uid.uidByte, rfid9.uid.size);
  Serial.println();

  rfid9.PICC_HaltA();
  rfid9.PCD_StopCrypto1();
}

void readRFID10() {
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  if (!rfid10.PICC_IsNewCardPresent() || !rfid10.PICC_ReadCardSerial())
    return;

  Serial.print(F("RFID10 UID: "));
  printDec(rfid10.uid.uidByte, rfid10.uid.size);
  Serial.println();

  rfid10.PICC_HaltA();
  rfid10.PCD_StopCrypto1();
}

void readRFID11() {
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  if (!rfid11.PICC_IsNewCardPresent() || !rfid11.PICC_ReadCardSerial())
    return;

  Serial.print(F("RFID11 UID: "));
  printDec(rfid11.uid.uidByte, rfid11.uid.size);
  Serial.println();

  rfid11.PICC_HaltA();
  rfid11.PCD_StopCrypto1();
}

void readRFID12() {
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  if (!rfid12.PICC_IsNewCardPresent() || !rfid12.PICC_ReadCardSerial())
    return;

  Serial.print(F("RFID12 UID: "));
  printDec(rfid12.uid.uidByte, rfid12.uid.size);
  Serial.println();

  rfid12.PICC_HaltA();
  rfid12.PCD_StopCrypto1();
}

void printDec(byte *buffer, byte bufferSize) {
  for (byte i = 0; i < bufferSize; i++) {
    Serial.print(buffer[i] < 0x10 ? "0" : "");
    Serial.print(buffer[i], DEC);
    Serial.print(" ");
  }
}