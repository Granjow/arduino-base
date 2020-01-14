#define DEBUG

#include "demo.h"
#include "arduino-debug-utils.h"

// Target: Arduino Pro Mini or higher (where Serial is available)

Demo demo;

void setup() {
#ifdef DEBUG
  Serial.begin(9600);
#endif
  DEBUG_PRINTLN("Hello! Debug mode is enabled!");

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(demo.doubleANumber(1000));
  digitalWrite(LED_BUILTIN, LOW);
  delay(demo.doubleANumber(500));
}
