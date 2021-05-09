#ifndef JtoKey_h
#define JtoKey_h
#include <Arduino.h>

class JtoKey {
public:
JtoKey(byte x, byte y);
boolean up();
boolean down();
boolean left();
boolean right();
int multiSide();
boolean pressKey();

private:
    byte  _x;
	byte  _y;
};
#endif