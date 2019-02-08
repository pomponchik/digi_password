#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.println("login\tpassword");
  DigiKeyboard.delay(5);
  DigiKeyboard.println("\n");
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("\n");
}

void loop() {
  
}
