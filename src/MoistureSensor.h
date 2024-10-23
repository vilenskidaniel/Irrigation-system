// MoistureSensor.h
#ifndef MOISTURESENSOR_H
#define MOISTURESENSOR_H

class MoistureSensor {
public:
    MoistureSensor(int analogPin, int digitalPin);
    int calculateMoisturePercent();
private:
    int analogPin;
    int digitalPin;
};

#endif
