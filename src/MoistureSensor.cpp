// MoistureSensor.cpp
#include "MoistureSensor.h"
#include <Arduino.h>

MoistureSensor::MoistureSensor(int analogPin, int digitalPin) 
    : analogPin(analogPin), digitalPin(digitalPin) {}

int MoistureSensor::calculateMoisturePercent() {
    int analogValue = analogRead(analogPin);
    return map(analogValue, 4095, 950, 0, 100); // Преобразование в проценты
}
