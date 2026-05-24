#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI(); 

void setup() {
  // Включаем подсветку экрана (пин 15 на T-Embed)
  pinMode(15, OUTPUT);
  digitalWrite(15, HIGH);

  // Инициализация дисплея
  tft.init();
  tft.setRotation(1); // Горизонтальная ориентация
  tft.fillScreen(TFT_BLACK); // Черный фон

  // Вывод текста
  tft.setTextColor(TFT_WHITE, TFT_BLACK); 
  tft.setTextSize(3);
  
  // Пишем HELLO (стандартные шрифты Arduino не поддерживают кириллицу, 
  // поэтому английскими буквами надежнее)
  tft.drawString("HELLO!", 60, 45);
}

void loop() {
  // Ничего не делаем
}
