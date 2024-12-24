#include <GyverOLED.h>

GyverOLED<SSH1106_128x64> oled;


void hello() {
  oled.clear(); 
  oled.rect(0,0,127,63,OLED_STROKE);
  oled.setCursorXY(28, 13);   
  oled.print("IIS Aosta AQ!");
  oled.setCursorXY(28, 26); 
  oled.println("Elettronica");
  oled.setCursorXY(28, 40); 
  oled.println("2024");
  oled.update(); 
  }
  
  void messaggio_orientamento_20024() {
  oled.clear(); 
  oled.roundRect(0,0,127,63,OLED_STROKE);
  //oled.rect(0,0,127,63,OLED_STROKE);
  oled.setCursorXY(28, 13);   
  oled.print("Benvenuti! ");
  oled.setCursorXY(28, 26); 
  oled.println("Orientamento ");
  oled.setCursorXY(28, 40); 
  oled.println("2024");
  oled.update(); 
  }
  

void setup() {
  oled.init();  
  
  oled.clear();   
  oled.update(); 
}

void loop() {    
  hello();
  delay(4000);
  messaggio_orientamento_20024();
  delay(4000);
}
