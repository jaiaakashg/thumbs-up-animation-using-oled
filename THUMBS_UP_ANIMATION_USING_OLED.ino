#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 


#define OLED_RESET    -1 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);

  // Initialize with the I2C addr 0x3C (for the 128x64)
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

  display.clearDisplay();
  drawThumbsUp();
  display.display();
}

void drawThumbsUp() {
  display.fillRoundRect(30, 30, 30, 20, 5, SSD1306_WHITE);  
  display.fillRect(25, 15, 10, 20, SSD1306_WHITE);  
  display.fillRect(60, 20, 10, 30, SSD1306_WHITE);  
  display.fillRect(70, 20, 10, 30, SSD1306_WHITE);  
  display.fillRect(80, 20, 10, 30, SSD1306_WHITE);  
  display.fillRect(90, 20, 10, 30, SSD1306_WHITE); 
  display.drawRoundRect(30, 30, 30, 20, 5, SSD1306_BLACK);  
  display.drawRect(25, 15, 10, 20, SSD1306_BLACK);  
  display.drawRect(60, 20, 10, 30, SSD1306_BLACK);  
  display.drawRect(70, 20, 10, 30, SSD1306_BLACK);  
  display.drawRect(80, 20, 10, 30, SSD1306_BLACK);  
  display.drawRect(90, 20, 10, 30, SSD1306_BLACK);  
}

void loop() {
}

