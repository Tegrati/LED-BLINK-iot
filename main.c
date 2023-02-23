#define BLYNK_TEMPLATE_ID “Enter your device ID"
#define BLYNK_DEVICE_NAME  “Enter your device NAME"
#define BLYNK_AUTH_TOKEN  “Enter your device TOKEN"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[ ] = BLYNK_AUTH_TOKEN;
char ssid[ ] = "           ";  // Enter your Wifi Username
char pass[ ] = "          ";  // Enter your Wifi password

int ledpin = 2;
void setup( )
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(ledpin,OUTPUT);
}

void loop( )
{
  Blynk.run( ); 
}
