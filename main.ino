/*
* Authors: Abraham Cifuentes, Hajar Boughoula
* 
*/

#include <IRemote.h> //
#include <Servo.h> //

#define trigPin A3
#define echoPin A2
#define cm 1  //Metric is the best

Servo servoFLP; //Front Left Pivot Servo
Servo servoFLL; //Front Left Lift Servo
Servo servoBLP; //Back Left Pivot Servo
Servo servoBLL; //Back Left Lift Servo
Servo servoFRP; //Front Right Pivot
Servo servoFRL; //Front Right Lift
Servo servoBRP; //Back Right Pivot
Servo servoBRL; //Back Right Lift

void setup(){
  Serial.begin(9600);
  
  servoFLP.attach(2); 
  servoFLL.attach(3);
  servoBLP.attach(4);
  servoBLL.attach(5);
  servoFRP.attcah(6);
  servoFRL.attach(7);
  servoBRP.attach(8);
  servoBRL.attcah(9);
}
