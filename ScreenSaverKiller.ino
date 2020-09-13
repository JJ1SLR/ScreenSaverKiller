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

void setup() {
  // Take control of the mouse:
  Mouse.begin();
}

void loop() {
  // UP
  Mouse.move(0, -1, 0);
  // DOWN
  Mouse.move(0, 1, 0);
  // LEFT
  Mouse.move(-1, 0, 0);
  // RIGHT
  Mouse.move(1, 0, 0);
  // DOWN
  Mouse.move(0, 1, 0);
  // UP
  Mouse.move(0, -1, 0);
  // RIGHT
  Mouse.move(1, 0, 0);
  // LEFT
  Mouse.move(-1, 0, 0);
  // delay for 30 seconds
  delay(30000);
}
