#include "RGBLED.h"
#include <Arduino.h>

RGBLED::RGBLED(int redPin, int greenPin, int bluePin, int redChannel, int greenChannel, int blueChannel)
    : redPin(redPin), greenPin(greenPin), bluePin(bluePin), 
      redChannel(redChannel), greenChannel(greenChannel), blueChannel(blueChannel) {
    
    ledcSetup(redChannel, 5000, 8);  // Настройка канала для красного цвета
    ledcSetup(greenChannel, 5000, 8); // Настройка канала для зелёного цвета
    ledcSetup(blueChannel, 5000, 8);  // Настройка канала для синего цвета
    
    ledcAttachPin(redPin, redChannel);    // Привязка пина для красного цвета
    ledcAttachPin(greenPin, greenChannel);// Привязка пина для зелёного цвета
    ledcAttachPin(bluePin, blueChannel);  // Привязка пина для синего цвета
}

void RGBLED::setColor(int red, int green, int blue) {
    ledcWrite(redChannel, red);      // Установка яркости красного цвета
    ledcWrite(greenChannel, green);  // Установка яркости зелёного цвета
    ledcWrite(blueChannel, blue);    // Установка яркости синего цвета
}

void RGBLED::blinkColor(int red, int green, int blue, int delayTime) {
    setColor(red, green, blue);      // Установка цвета
    delay(delayTime);                // Задержка
    setColor(0, 0, 0);               // Выключение цвета
    delay(delayTime);                // Задержка
}
