#include "DigiKeyboard.h"

//Use key names for the variables below
//See https://github.com/digistump/DigisparkArduinoIntegration/blob/master/libraries/DigisparkKeyboard/DigiKeyboard.h for a list of key values.
int topLeftKey = KEY_A;
int topRightKey = KEY_B;
int botLeftKey = KEY_C;
int botRightKey = KEY_D;
int repeatingKey = 0;

int topLeftPressed = 0;
int topRightPressed = 0;
int botLeftPressed = 0;
int botRightPressed = 0;
int topLeftCounter = 0;
int topRightCounter = 0;
int botLeftCounter = 0;
int botRightCounter = 0;

void setup() {
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(5, INPUT);
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
}

void keyFunction(int keyPin, int keyName, int * keyCounter, int * keyPressed) {
  if (digitalRead(keyPin) == LOW) {
    if (*keyPressed == 0 ) {
      *keyPressed = 1;
      DigiKeyboard.sendKeyStroke(keyName);
      repeatingKey = keyName;
    } else {
      if (repeatingKey == keyName) {
        *keyCounter += 1;
        if (*keyCounter % 25 == 0 && *keyCounter > 500) {
          DigiKeyboard.sendKeyStroke(keyName);
        }
      } 
    }
  } else {
    *keyPressed = 0;
    *keyCounter = 0;
  }
}

void loop() {
  DigiKeyboard.update();
  keyFunction(1, topRightKey, &topRightCounter, &topRightPressed);
  keyFunction(2, botLeftKey, &botLeftCounter, &botLeftPressed);
  keyFunction(5, botRightKey, &botRightCounter, &botRightPressed);
  keyFunction(0, topLeftKey, &topLeftCounter, &topLeftPressed);
  delay(1);
}
