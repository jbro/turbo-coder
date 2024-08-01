#include <Arduino.h>
#include <Keyboard.h>
#include <AceButton.h>
using namespace ace_button;

const int PIN_BUTTON = 11;

AceButton button(PIN_BUTTON);

void handleEvent(AceButton *, uint8_t, uint8_t);

void setup()
{
  ButtonConfig *buttonConfig = ButtonConfig::getSystemButtonConfig();
  buttonConfig->setEventHandler(handleEvent);
  buttonConfig->setFeature(ButtonConfig::kFeatureLongPress);
  buttonConfig->setLongPressDelay(300);

  pinMode(PIN_BUTTON, INPUT_PULLUP);
}

void loop()
{
  button.check();
}

void handleEvent(AceButton *button, uint8_t eventType, uint8_t buttonState)
{
  if (eventType == AceButton::kEventPressed)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(10);
    Keyboard.releaseAll();
  }
  if (eventType == AceButton::kEventLongPressed)
  {
    Keyboard.press(KEY_TAB);
    delay(10);
    Keyboard.releaseAll();
  }
  Serial.print("Button event: ");
}
