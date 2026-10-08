#include <Arduino.h>
#include "BMESPIInterface.h"
#include "LEDController.h"

LEDController ledController;

void setup()
{
    BMESPIInterfaceInstance::create();

    bool initialized = BMESPIInterfaceInstance::instance().begin();

    ledController.begin();
}

void loop()
{
    float temperature = BMESPIInterfaceInstance::instance().getTemperature();

    ledController.update(temperature);
}