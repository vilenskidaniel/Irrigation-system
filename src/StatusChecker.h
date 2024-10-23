#ifndef STATUSCHECKER_H
#define STATUSCHECKER_H

#include "MoistureSensor.h"
#include "RGBLED.h"
#include "Buzzer.h"

class StatusChecker {
public:
    StatusChecker(MoistureSensor &sensor, RGBLED &led, Buzzer &buzzer);
    void checkModulesStatus();
private:
    MoistureSensor &sensor;
    RGBLED &led;
    Buzzer &buzzer;
};

#endif
