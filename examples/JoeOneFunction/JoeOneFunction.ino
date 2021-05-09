#include <JtoKey.h>//Версия библиотеки 1.0 в этой версии нет подсветки синтаксиса в будуюшем это будет риализовано
#define X_PIN A1  //Сюда подключен джостик
#define Y_PIN A0
JtoKey Joe(X_PIN, Y_PIN); //Вместо Joe(имя джостика) можно использовать что-то своё дальше ко всем функциям будем обращатьчя с помощью этого имени
//P.S.Можно подключить несколько джостиков но нужно будет указать каждому своё имя
void setup(){
  Serial.begin(9600);
}
void loop(){
    switch (j.multiSide()) {//Эта фунция возврощает числа взависимости от положения джостика(0-центр,1-верх,2-право,3-низ,4-лево)
    case 0: Serial.println("centre");break;
    case 1: Serial.println("up");break;
    case 2: Serial.println("right");break;
    case 3: Serial.println("down");break;
    case 4: Serial.println("left");break;
}