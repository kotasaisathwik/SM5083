#include <Arduino.h>
  //Declaring all variables as integers
  int D1,D2,X,D3
int a,b,c,d,e,f;
  //Code released under GNU GPL.  Free to use for anything.
  void disp_7447(int D, int C, int B, int A)
  {
    digitalWrite(2, A); //LSB
    digitalWrite(3, B);
    digitalWrite(4, C);
    digitalWrite(5, D); //MSB

  }
  // the setup function runs once when you press reset or power the board
  void setup() {
   pinMode(LED_BUILTIN, OUTPUT);
      pinMode(2, OUTPUT);
      pinMode(3, OUTPUT);
      pinMode(4, OUTPUT);
      pinMode(5, OUTPUT);
      pinMode(6, INPUT);
      pinMode(7, INPUT);
      pinMode(8, INPUT);
      pinMode(9, INPUT);
      pinMode(10, OUTPUT);
      pinMode(11, OUTPUT);
      

  }

  // the loop function runs over and over again forever
  void loop() {
digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);  
  X = digitalRead(6);//LSB
  D1 = digitalRead(7);
  D2 = digitalRead(8);
  D3 = digitalRead(9);//MSB
a = D1&&X;
b = D2&&X;
c = a || b;
d = D3&&X;
e = a ||d;
f = D1&&D2;
digitalWrite(10, c);
digitalWrite(11, e);
digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 
if (f==0){
  disp_7447(0,0,0,0);
}
if (f==1){
  disp_7447(0,0,0,1);
}

  }
