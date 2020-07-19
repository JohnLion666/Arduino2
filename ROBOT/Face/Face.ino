#include <OLED_I2C.h>

OLED  myOLED(SDA, SCL, 8);

extern uint8_t smile_one[];
extern uint8_t antysmile[];
extern uint8_t OMG[];
extern uint8_t like[];
extern uint8_t ok[];
extern uint8_t sad[];
extern uint8_t WTF[];
void setup()
{
  myOLED.begin();
  
}

void loop()
{ 
  int times = 1000+ random(1000);
  myOLED.clrScr();
  myOLED.drawBitmap(0, 16,  WTF, 128, 32);
  myOLED.update();
  delay(times);
  myOLED.clrScr();
  myOLED.drawBitmap(0, 16, sad, 128, 32);
  myOLED.update();
  delay(times);
  myOLED.clrScr();
  myOLED.drawBitmap(0, 16, ok, 128, 32);
  myOLED.update();
  delay(times);
  myOLED.clrScr();
  myOLED.drawBitmap(0, 16, smile_one, 128, 32);
  myOLED.update();
  delay(times);
   myOLED.clrScr();
  myOLED.drawBitmap(0, 16, like, 128, 32);
  myOLED.update();
  delay(times);
   myOLED.clrScr();
  myOLED.drawBitmap(0, 16, antysmile, 128, 32);
  myOLED.update();
  delay(times);
   myOLED.clrScr();
  myOLED.drawBitmap(0, 16,  OMG, 128, 32);
  myOLED.update();
  delay(times);
  
}


