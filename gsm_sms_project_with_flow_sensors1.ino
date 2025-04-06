//Code for GSM Panic Button Project By Lectra Comm Copyright@20210318

#include <SoftwareSerial.h>
SoftwareSerial mySerial(9,10);
char msg;
char call;
int buttonpin=12;
void setup()

{
  
  pinMode(buttonpin,INPUT);
  mySerial.begin(9600);   // Setting the baud rate of GSM Module  
  Serial.begin(9600);// Setting the baud rate of Serial Monitor (Arduino)
  Serial.println("press button");
}

void loop()
{
  if(digitalRead(buttonpin)==HIGH)
  {
    
    Serial.println("button pressed");
    delay(2000);
    SendMessage();  
  }

 if (mySerial.available()>0)
 Serial.write(mySerial.read());
}

void SendMessage()
{
  
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode

  delay(1000);  // Delay of 1000 milli seconds or 1 second
  mySerial.println("AT+CMGS=\"+27\"\r");
  delay(1000);
  mySerial.println("Dipika Dad needs your urgent attention,nearest person please attend to him!!!");// The SMS text you want to send
  delay(1000);
  mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(5000);
   

   mySerial.println("AT+CMGS=\"+27\"\r");
  delay(1000);
  mySerial.println("Sheetara Dad needs your urgent attention,nearest person please attend to him!!!");// The SMS text you want to send
  delay(1000);
  mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(5000);


 mySerial.println("AT+CMGS=\"+27\"\r");
  delay(1000);
  mySerial.println("Sunil Dad needs your urgent attention,nearest person please attend to him!!!");// The SMS text you want to send
  delay(1000);
  mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(5000);

 mySerial.println("AT+CMGS=\"+27\"\r");
  delay(1000);
  mySerial.println("Resh Dad needs your urgent attention,nearest person please attend to him!!!");// The SMS text you want to send
  delay(1000);
  mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(5000);

 mySerial.println("AT+CMGS=\"+27\"\r");
  delay(1000);
  mySerial.println("VJ Dad needs your urgent attention,nearest person please attend to him!!!");// The SMS text you want to send
  delay(1000);
  mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);

}