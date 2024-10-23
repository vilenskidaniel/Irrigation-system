// MainController.cpp
#include "MainController.h"

MainController::MainController(MoistureSensor &sensor, RGBLED &led, Buzzer &buzzer, StatusChecker &checker)
    : sensor(sensor), led(led), buzzer(buzzer), checker(checker) {}

void MainController::updateSystem() {
    int moisturePercent = sensor.calculateMoisturePercent();
    
    if (moisturePercent < 30) {
        led.blinkColor(255, 0, 0, 200); // Красный мигает
        buzzer.playTone(1000, 500);     // Звук буззера
    } else if (moisturePercent < 50) {
        led.blinkColor(255, 255, 0, 500); // Желтый мигает
    } else {
        led.setColor(0, 255, 0);          // Зелёный горит
    }
    
    checker.checkModulesStatus(); // Проверка состояния модулей
}
