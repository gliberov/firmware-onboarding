#pragma once

#include "BMEConstants.h"

class LEDController
{
public:
    void begin();
    void update(float temperature);
};