

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "667da96c61b947509c8631bdfb995dca"; // the auth code that you got on your gmail
char ssid[] = "BsDO-U3VyeUE"; // username or ssid of your WI-FI
char pass[] = "Bhaipuchkele"; // password of your Wi-Fi

void setup()
{
// Debug console
Serial.begin(9600);
pinMode(D1,OUTPUT); //extend these to D8 if you are using a 8 pin relay
pinMode(D2,OUTPUT);
pinMode(D3,OUTPUT);
pinMode(D4,OUTPUT);


 
digitalWrite(D1,HIGH); // Make it low if you want everything to go off
digitalWrite(D2,HIGH); // in case of a power cut
digitalWrite(D3,HIGH);
digitalWrite(D4,HIGH);
Blynk.begin(auth, ssid, pass);
}

void loop()
{
Blynk.run();
}
