#include "LEDController.h"

void LEDController::begin()
{
    pinMode(BMEConstants::LED_PIN, OUTPUT);
}

void LEDController::update(float temperature)
{
    int delayTime;

    if (temperature < 10)
    {
        delayTime = 1000;
    }
    else if (temperature < 26)
    {
        delayTime = 1100;
    }
    else if (temperature < 28)
    {
        delayTime = 500;
    }
    else if (temperature < 30)
    {
        delayTime = 250;
    }
    else
    {
        delayTime = 100;
    }

    digitalWrite(BMEConstants::LED_PIN, HIGH);
    delay(delayTime);
    digitalWrite(BMEConstants::LED_PIN, LOW);
    delay(delayTime);
}