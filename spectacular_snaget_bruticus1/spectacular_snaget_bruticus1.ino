#include <liquidCrystal_I2C.h>

liquidCrystal_I2C ldc(0x20,16,2);

void setup(){
ldc.init();
  ldc.backlight();
  }
            
void loop(){
 // o "void loop" sempre precisa star presente mesmo que não use ele.
  for(int i = 0 ; i <= 16; i++){
    lcd.clear();
    lcd.setCursor(i , 0);
    lcd("Hello,World!!");
  }
}