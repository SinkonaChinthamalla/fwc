#include <Arduino.h>
int D, C, B, A, X;
int P, Q, Y;
void disp_7474( int D,int C,int B,int A)
{
digitalWrite(2, B);
digitalWrite(3, A);
}

void setup(){
pinMode(13,OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(4, INPUT);
pinMode(5, INPUT);
pinMode(8, INPUT);
pinMode(9, OUTPUT);

}
void loop(){
delay (2000);
X=digitalRead(8);
A=digitalRead(4);
B=digitalRead(5);

P= (!A&&B&&!X) || (A&&!B&&!X);
Q= (A&&!B) || (X);
Y= (A&&B&&X);

digitalWrite(7,P);
digitalWrite(6,Q);
digitalWrite(9, Y);
disp_7474(D,C,B,A);
delay (2000);

}  
