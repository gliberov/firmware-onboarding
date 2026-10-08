#include "BMESPIInterface.h"

bool BMESPIInterface::begin()
{
    return bme.begin();
}

float BMESPIInterface::getTemperature()
{
    return bme.readTemperature();
}