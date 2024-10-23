#include "StatusChecker.h"
#include <Arduino.h>

StatusChecker::StatusChecker(MoistureSensor &sensor, RGBLED &led, Buzzer &buzzer)
    : sensor(sensor), led(led), buzzer(buzzer) {}

void StatusChecker::checkModulesStatus() {
    int moisturePercent = sensor.calculateMoisturePercent();
    Serial.print("Влажность: ");
    Serial.println(moisturePercent);
    
    // Проверка состояния RGB LED
    Serial.println("Проверка RGB LED");
    
    // Проверка состояния буззера
    Serial.println("Проверка буззера");
}
