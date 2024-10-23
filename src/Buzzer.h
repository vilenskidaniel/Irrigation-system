#ifndef BUZZER_H
#define BUZZER_H

class Buzzer {
public:
    Buzzer(int buzzerPin, int buzzerChannel);
    void playTone(int frequency, int duration);
    void stopTone();
private:
    int buzzerPin;
    int buzzerChannel;
};

#endif
