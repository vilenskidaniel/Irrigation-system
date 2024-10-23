#ifndef RGBLED_H
#define RGBLED_H

class RGBLED {
public:
    RGBLED(int redPin, int greenPin, int bluePin, int redChannel, int greenChannel, int blueChannel);
    void setColor(int red, int green, int blue);
    void blinkColor(int red, int green, int blue, int delayTime);
private:
    int redPin, greenPin, bluePin;
    int redChannel, greenChannel, blueChannel;
};

#endif
