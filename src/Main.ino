#include "MainController.h"
#include "MoistureSensor.h"
#include "RGBLED.h"
#include "Buzzer.h"
#include "StatusChecker.h"
#include <HardwareSerial.h>

MoistureSensor moistureSensor(32, 34); // Подключение датчика влажности
RGBLED rgbLed(26, 25, 27, 0, 1, 2);    // Подключение RGB светодиода
Buzzer buzzer(14, 3);                  // Подключение буззера
StatusChecker statusChecker(moistureSensor, rgbLed, buzzer); // Создание объекта для проверки статусов

MainController controller(moistureSensor, rgbLed, buzzer, statusChecker); // Главный контроллер

void setup() {
    Serial.begin(115200);
}

void loop() {
    controller.updateSystem();  // Обновление системы
    delay(1000);                // Задержка для стабильности
}
