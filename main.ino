#define BLYNK_TEMPLATE_ID "เปลี่ยนID"
#define BLYNK_TEMPLATE_NAME "เปลี่ยนNAME"
#define BLYNK_AUTH_TOKEN "เปลี่ยนTOKEN"

#define BLYNK_PRINT Serial

#include <BlynkSimpleEsp32.h>
#include <ESP32Servo.h>

char ssid[] = "เปลี่ยนเป็นชื่อ wifi";
char pass[] = "เปลี่ยนเป็นรหัสผ่าน";

int openDelay = 2000; // หน่วย milisecond
int stage;

Servo servo;
BlynkTimer timer;

BLYNK_WRITE(V0) {
  int val = param.asInt();
  if (val == 1) {
    stage = 1;
  }

  if (val == 0) {
    stage = 0;
  }
  
  Serial.println(stage);
}


void setup()  {
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  servo.attach(14);
  servo.write(0);  
}

void loop() {
  Blynk.run();

  if (stage == 1) {
    servo.write(100);  
    delay(openDelay); 
  }
  else {
    servo.write(0);  
  }  
}
