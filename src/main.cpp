#include <Arduino.h>
#include <Keyboard.h>
#include <ezButton.h>
#include <elapsedMillis.h>

ezButton button(11);
bool isPressed = false;
elapsedMillis t;

void setup()
{
  button.setDebounceTime(50);
}

void loop()
{
  button.loop();

  if (button.isPressed())
  {
    if (!isPressed)
    {
      isPressed = true;
      t = 0;
    }
  }

  if (isPressed && t >= 300)
  {
    if (button.getCount() == 1)
    {
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_RIGHT_ARROW);
    }
    if (button.getCount() > 1)
    {
      Keyboard.press(KEY_TAB);
    }

    delay(10);
    Keyboard.releaseAll();
    button.resetCount();
    isPressed = false;
  }
}
