#define BLYNK_TEMPLATE_ID "TMPL3_jnCrw82"
#define BLYNK_TEMPLATE_NAME "motar control"
#define BLYNK_AUTH_TOKEN "7RIeK0iZLr379LSPeP39BfNbDCuCuMpj"
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Mukesh"; char pass[] = "mukesh11";
int IN1 = 4;
int IN2 = 5;
int IN3 = 12;
int IN4 = 13;
BLYNK_WRITE(V1)
{
digitalWrite(IN2, param.asInt());
digitalWrite(IN4, param.asInt());
}
BLYNK_WRITE(V2)
{
digitalWrite(IN1, param.asInt());
digitalWrite(IN3, param.asInt());
}
10

BLYNK_WRITE(V3)
{
digitalWrite(IN2, param.asInt());
digitalWrite(IN3, param.asInt());
}
BLYNK_WRITE(V4)
{
digitalWrite(IN1, param.asInt());
digitalWrite(IN4, param.asInt());
}
void setup()
{
Serial.begin(115200);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
Blynk.begin(auth, ssid, pass, "blynk.cloud", 8080);
}
void loop() {
Blynk.run();
} 