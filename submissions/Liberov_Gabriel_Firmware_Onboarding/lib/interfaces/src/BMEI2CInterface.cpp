#include "BMEI2CInterface.h"

bool BMEI2CInterface::begin()
{
    return bme.begin(0x76);
}

float BMEI2CInterface::getTemperature()
{
    return bme.readTemperature();
}