#include "Bracelet_Final.h"

void setup() {
  pinMode(vibreur, OUTPUT);
  
  mySerial.begin(baudsBle);
  Serial.begin(baudsSer);
}

void loop()
{
  getMessage(Ble, 130, 'b');
  Serial.print(Ble);
  
  menu(Ble);
  
  getMessage(Ser, 130, 's');
  mySerial.print(Ser);
}

