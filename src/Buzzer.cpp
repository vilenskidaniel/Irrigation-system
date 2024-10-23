#include "Buzzer.h"
#include <Arduino.h>

Buzzer::Buzzer(int buzzerPin, int buzzerChannel)
    : buzzerPin(buzzerPin), buzzerChannel(buzzerChannel) {
    ledcSetup(buzzerChannel, 5000, 8);    // Настройка канала для буззера
    ledcAttachPin(buzzerPin, buzzerChannel); // Привязка пина к каналу буззера
}

void Buzzer::playTone(int frequency, int duration) {
    ledcWriteTone(buzzerChannel, frequency); // Установка частоты
    delay(duration);                         // Время звучания
    stopTone();                              // Остановка звука
}

void Buzzer::stopTone() {
    ledcWrite(buzzerChannel, 0);             // Выключение буззера
}
