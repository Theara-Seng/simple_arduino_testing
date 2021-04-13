
#include <Adafruit_GFX.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>
#include <Adafruit_SSD1306.h>
Adafruit_SSD1306 thearaoled(13);
void setup() {
  thearaoled.begin(0x3c);
  thearaoled.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
