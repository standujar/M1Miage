#include <SoftwareSerial.h>
#define vibreur 6 
#define RX 10 
#define TX 11 
#define VBATPIN A9 

#define baudsBle 9600 
#define baudsSer 9600 

SoftwareSerial mySerial(TX, RX);

char Ble[129];
char Ser[129];

int mvb;

void help(){
  mySerial.write("\nVoici la liste des commandes disponible: ");
  mySerial.write("\n?: Afficher l'aide ");
  mySerial.write("\n1: Simuler la vibration (tourner) ");
  mySerial.write("\n2: Afficher le % de batterie restant\n");
}

void turn()
{
    int i=10;
    while(i>0){
      digitalWrite(vibreur, HIGH);
      delay(50);
      digitalWrite(vibreur, LOW);
      delay(50);
      i--;
    }
    mySerial.write("\n=> Il faut tourner <=\n");
}

void getMessage(char buffer[], uint8_t maxSize, char type)
{
  memset(buffer, 0, maxSize);
  
  while(mySerial.available() == 0 && Serial.available() == 0) delay(1);
  uint8_t count=0;
  if(type=='b'){
    do
    {
      count += mySerial.readBytes(buffer+count, maxSize);
      delay(2);
    } while( (count < maxSize) && !(mySerial.available() == 0) );
  }
  else if(type=='s'){
      do
    {
      count += Serial.readBytes(buffer+count, maxSize);
      delay(2);
    } while( (count < maxSize) && !(Serial.available() == 0) );
  }
}

void MesuringBattery(){
  float calcule;
  calcule = analogRead(VBATPIN);
  calcule *= 2;    // Division par 2, pour multiplier ensuite
  calcule *= 3.3;  // Multiplie par 3.3V notre ref
  calcule /= 1024; // convertir en voltage
  mvb = calcule*100/4.22;
  mvb=mvb-80/100;
  mySerial.print("\nBatterie: "); 
  mySerial.print(mvb);
  mySerial.print(" %\n"); 
}

void menu(char buffer[]){
  if (buffer[0] == '?'){
    help();
  }
  else if (buffer[0] == '1'){
    turn();
  }
  else if (buffer[0] == '2'){
    MesuringBattery();
  }
}



