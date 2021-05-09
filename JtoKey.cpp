#include "Arduino.h"
#include "JtoKey.h"

JtoKey::JtoKey(byte x, byte y){
	pinMode(x,INPUT);
	pinMode(y,INPUT);
	_x=x;
	_y=y;
}

boolean JtoKey::up(){
  
  int x = analogRead(_x);
  int y = analogRead(_y);
  if (x >= 800 && y >= 500) {
	  return (true);
  } else return (false);
  
}

boolean JtoKey::down(){
	bool q=0;
  int x = analogRead(_x);
  int y = analogRead(_y);
	if (x <= 300 && y <= 400) {
    return (true);
  } else return (false);
}

boolean JtoKey::left(){
	bool q=0;
  int x = analogRead(_x);
  int y = analogRead(_y);
	if (x >= 300 && y <= 250) {
    return (true);
  } else return (false);
}

boolean JtoKey::right(){
	bool q=0;
  int x = analogRead(_x);
  int y = analogRead(_y);
  if (x >= 500 && y >= 800) {
      return (true);
  } else return (false);
}

int JtoKey::multiSide(){
	int q = 0;
  int x = analogRead(_x);
  int y = analogRead(_y);
  if (x >= 800 && y >= 500) {
	    q = 1;//вверх
  } else if (x >= 500 && y >= 800) {
      q = 2;//право
  } else if (x <= 300 && y <= 400) {
      q = 3;//вниз
  } else if (x >= 300 && y <= 250) {
      q = 4;//влево
  } else q = 0;//центр
  
	return (q);
}

boolean JtoKey::pressKey(){
  
}