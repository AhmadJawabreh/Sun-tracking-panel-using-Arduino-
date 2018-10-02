#include <Servo.h>
/*        
 *         Palestine Polytechnic University
 College of Information Technology and Computer Engineering 
     Department of Computer Systems Engineering 
              Embedded systems
             Sun tracking panel
    Prepared by :  Ahmad Jawabreh & Enas Jawabreh
          Supervisor : Dr.Ayman Wazwaz
                 Oct 2018            

*/
//Servo Motor Settings
Servo myservo;  
int INITIAL_POSTION = 90; 
int SERVO_PIN = 9;  

//LDRS Settings
int LDR_ONE_PIN   = A0;
int LDR_TWO_PIN   = A1;
int LDR_ONE_VALUE = 0;
int LDR_TWO_VALUE = 0;
 
void setup() {
  myservo.attach(SERVO_PIN);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
  myservo.write(90);
  delay(2000);
}


void loop() {

  LDR_ONE_VALUE = analogRead(LDR_ONE_PIN); // Read The Density Of Light in LDR1 :).
  LDR_TWO_VALUE = analogRead(LDR_TWO_PIN); // Read The Density Of Light in LDR2 :).

  if(abs(LDR_TWO_VALUE - LDR_TWO_VALUE) > 10){
   if(LDR_ONE_VALUE > LDR_TWO_VALUE){  // IF The Density Of Light at LDR_ONE greater then LDR_TWO, The Moter will move to LDR_ONE. 
     INITIAL_POSTION =  INITIAL_POSTION - 2;
     myservo.write(INITIAL_POSTION);
     }
   else if (LDR_TWO_VALUE > LDR_ONE_VALUE ){  // IF The Density Of Light at LDR_TWO greater then LDR_ONE, The Moter will move to LDR_TWO. 
       INITIAL_POSTION =  INITIAL_POSTION + 2;
     myservo.write(INITIAL_POSTION);
   }
  }
   Serial.println(LDR_ONE_VALUE); 
   Serial.println(LDR_TWO_VALUE); 
   Serial.println(INITIAL_POSTION);
   delay(15);  
}
