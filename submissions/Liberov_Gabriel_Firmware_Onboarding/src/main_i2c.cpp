#include <Arduino.h>
#include "BMEI2CInterface.h"
#include "LEDController.h"

LEDController ledController;


void setup() {
 Serial.begin(115200);
 BMEI2CInterfaceInstance::create();
 bool initialized = BMEI2CInterfaceInstance::instance().begin();
 ledController.begin();
}

void loop() {
  float temperature = BMEI2CInterfaceInstance::instance().getTemperature();
  Serial.println(temperature);
  ledController.update(temperature);
}


