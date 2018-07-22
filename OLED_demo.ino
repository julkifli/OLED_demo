
/***********************************************************************
*  NodeMCU and OLED display "Hello World"
*  Based on original code developed by: Makerbro at https://acrobotic.com/
*  TECC Garage POLIKK
************************************************************************/

#include <Wire.h>
#include <ACROBOTIC_SSD1306.h>

void setup()
{
  Wire.begin();  
  oled.init();                          // Initialze SSD1306 OLED display
  oled.clearDisplay();                  // Clear screen
  oled.setTextXY(0,0);                  // Set cursor position, start of line 0
  oled.putString("  TECC GARAGE POLIKK");
  oled.setTextXY(4,0);                 // Set cursor position, start of line 4
  oled.putString("  HELLO, WORLD");
}

void loop()
{
}
