  
#include "FastLED.h"
#define LED_COUNT 16
#define LED_PIN 10
CRGB strip[LED_COUNT];

void setup()
{
  FastLED.addLeds<WS2811, LED_PIN, GRB>(strip, LED_COUNT);
}
 
void loop(){  
 
  Police_two();
}
void Police_one(){
  int myDelay = 20; //скорость мигалки 
  for (int i = 0; i < LED_COUNT-LED_COUNT/4; i++){
    strip[i-1] = CRGB::Black;
    FastLED.show();
    int k = i;
    while (k <=i + LED_COUNT/4){
      strip[k] = CRGB::Blue;
      k++;
    }
    delay(myDelay);
  }
  for (int i = LED_COUNT - LED_COUNT/4; i >0; i--){
    strip[i + LED_COUNT/4+1] = CRGB::Black;
    FastLED.show();
    int k = i;
    while (k <=i + LED_COUNT/4){
      strip[k] = CRGB::Blue;
      k++;
    }
    delay(myDelay);
  }
}
void Police_two(){
  int my_delay = 8;
  int count1 = 0 ;
  while(count1 <6){
      for( int i = 0; i <LED_COUNT/2; i++){
        strip[i] = CRGB::Blue;
        FastLED.show();
      }
      delay(my_delay);
      for( int i = 0; i <LED_COUNT/2; i++){
        strip[i] = CRGB::Black;
        FastLED.show();
      }
      delay(my_delay);
      count1++;
  }
  delay(my_delay  );
  int count2 = 0;
  while(count2 <6){
      for( int i = LED_COUNT/2; i <LED_COUNT; i++){
        strip[i] = CRGB::Red;
        FastLED.show();
      }
      delay(my_delay);
      for( int i = LED_COUNT/2; i <LED_COUNT; i++){
        strip[i] = CRGB::Black;
        FastLED.show();
      }
      delay(my_delay);
      count2++;
  }
  delay(my_delay);
}



