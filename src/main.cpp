#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI(); 

void setup() {
  pinMode(15, OUTPUT);
  digitalWrite(15, HIGH);

  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK); 
  tft.setTextSize(3);
  // Пишем HELLO (кириллица в стандартных шрифтах Arduino обычно не поддерживается)
  tft.drawString("HELLO!", 60, 45);
}

void loop() {}
