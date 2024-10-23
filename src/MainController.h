// MainController.h
#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include "MoistureSensor.h"
#include "RGBLED.h"
#include "Buzzer.h"
#include "StatusChecker.h"

class MainController {
public:
    MainController(MoistureSensor &sensor, RGBLED &led, Buzzer &buzzer, StatusChecker &checker);
    void updateSystem(); // Основная логика программы
private:
    MoistureSensor &sensor;
    RGBLED &led;
    Buzzer &buzzer;
    StatusChecker &checker;
};

#endif
