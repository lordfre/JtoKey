#include <JtoKey.h>//Версия библиотеки 1.0 в этой версии нет подсветки синтаксиса в будуюшем это будет риализовано
#define X_PIN A1  //Сюда подключен джостик
#define Y_PIN A0
JtoKey Joe(X_PIN, Y_PIN); //Вместо Joe(имя джостика) можно использовать что-то своё дальше ко всем функциям будем обращатьчя с помощью этого имени
//P.S.Можно подключить несколько джостиков но нужно будет указать каждому своё имя
void setup(){
  Serial.begin(9600);
}
void loop(){
    if(Joe.up()){//Ну здесь ничего обьяснять кроме того что эти функции возврощают 1 когда джостик находиться в нужном положении
    Serial.println("Вверх");
    } else if(Joe.down()){
    Serial.println("Вниз");
    } else if(Joe.left()){
     Serial.println("Влево");
    } else if(Joe.right()){
    Serial.println("Вправо");
    } else Serial.println("Центр");//А здесь когда джостик не находиться ни в одном из 4 положений значит он в центре
}
