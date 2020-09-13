/*
  ScreenSaverKiller

  A simple program running on Arduino Leonardo, to kill a windows screen saver. 
  Just move the mouse point 1 pixel in the following sequence every 30 seconds. 
  UP -> DOWN -> LEFT -> RIGHT -> DOWN -> UP -> RIGHT -> LEFT

  created 13 Sep 2020
  by JJ1SLR

  https://github.com/JJ1SLR/ScreenSaverKiller
*/

#include "Mouse.h"

#define MOUSE_MOVE_PIXELS  1

void setup() {
  // Take control of the mouse:
  Mouse.begin();
}

void loop() {
  // UP
  Mouse.move(0, -MOUSE_MOVE_PIXELS, 0);
  delay(2);  // response delay of the mouse
  // DOWN
  Mouse.move(0, MOUSE_MOVE_PIXELS, 0);
  delay(2);  // response delay of the mouse
  // LEFT
  Mouse.move(-MOUSE_MOVE_PIXELS, 0, 0);
  delay(2);  // response delay of the mouse
  // RIGHT
  Mouse.move(MOUSE_MOVE_PIXELS, 0, 0);
  delay(2);  // response delay of the mouse
  // DOWN
  Mouse.move(0, MOUSE_MOVE_PIXELS, 0);
  delay(2);  // response delay of the mouse
  // UP
  Mouse.move(0, -MOUSE_MOVE_PIXELS, 0);
  delay(2);  // response delay of the mouse
  // RIGHT
  Mouse.move(MOUSE_MOVE_PIXELS, 0, 0);
  delay(2);  // response delay of the mouse
  // LEFT
  Mouse.move(-MOUSE_MOVE_PIXELS, 0, 0);
  delay(2);  // response delay of the mouse
  // delay for 30 seconds
  delay(30000);
}
