#include <Keyboard.h>
#include <Mouse.h>

void fourRightClick() {
  Mouse.click();
  Mouse.click();
  delay(150);
  Mouse.click();
  Mouse.click();
}
void copy() {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('c');
  Keyboard.release('c');
  Keyboard.release(KEY_LEFT_CTRL);
}
void paste() {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('v');
  Keyboard.release('v');
  Keyboard.release(KEY_LEFT_CTRL);
}

void goToOtherWindow() {
  Keyboard.press(KEY_LEFT_ALT);
  delay(150);
  Keyboard.press(KEY_TAB);
  Keyboard.release(KEY_TAB);
  Keyboard.release(KEY_LEFT_ALT);

}
void start() {
  fourRightClick();
  copy();
  goToOtherWindow();
  delay(200);
  paste();
  Keyboard.press(KEY_TAB);
  Keyboard.release(KEY_TAB);
}

void doubleTab() {
  Keyboard.press(KEY_TAB);
  Keyboard.release(KEY_TAB);
  Keyboard.press(KEY_TAB);
  Keyboard.release(KEY_TAB);

}

void setup() {

  pinMode(0, INPUT);
  digitalWrite(0, LOW);
}

void loop() {
  int x = 150;
  if (digitalRead(0) == HIGH) {
    delay(1000);
    start();
    Mouse.move(85, 0);
    delay(x);
    start();
    doubleTab();
    Mouse.move(-32, 0);
    delay(x);
    start();
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    Mouse.move(-30, 8);
    delay(x);
    start();
    Mouse.move(55, 0);
    delay(x);
    start();
    doubleTab();
    Mouse.move(-30, 0);
    delay(x);
    start();
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    Mouse.move(-33, 8);
    delay(x);
    start();
    Mouse.move(55, 0);
    delay(x);
    start();
    doubleTab();
    Mouse.move(-30, 0);
    delay(x);
    start();
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    Mouse.move(-33, 7);
    delay(x);
    start();
    Mouse.move(55, 0);
    delay(x);
    start();
    doubleTab();
    Mouse.move(-30, 0);
    delay(x);
    start();
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    Mouse.move(-30, 8);
    delay(x);
    start();
    Mouse.move(55, 0);
    delay(x);
    start();
    doubleTab();
    Mouse.move(-30, 0);
    delay(x);
    start();
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    Mouse.move(-30, 8);
    delay(x);
    start();
    Mouse.move(55, 0);
    delay(x);
    start();
    doubleTab();
    Mouse.move(-35, 0);
    delay(x);
    start();
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    Mouse.move(-30, 8);
    delay(x);
    start();
    Mouse.move(55, 0);
    delay(x);
    start();
    doubleTab();
    Mouse.move(-33, 0);
    delay(x);
    start();
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    Mouse.move(-30, 8);
    delay(x);
    start();
    Mouse.move(55, 0);
    delay(x);
    start();
    doubleTab();
    Mouse.move(-35, 0);
    delay(x);
    start();
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
  }

}
