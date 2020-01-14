#ifndef ARDUINO_DEBUG_UTILS
#define ARDUINO_DEBUG_UTILS

#include "Arduino.h"

#ifdef DEBUG
#define DEBUG_PRINTLN(x) Serial.println(x)
#else
#define DEBUG_PRINTLN(x)
#endif

#endif
