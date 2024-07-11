#include <liquidCrystal_I2C.h>

liquidCrystal_I2C ldc(0x20,16,2);

void setup(){
ldc.init();
  ldc.backlight();
  ldc.setCursor(0 , 0);
  ldc.print('Hello,World!");
            }
            
void loop(){
 // o "void loop" sempre precisa star presente mesmo que não use ele.
  
}