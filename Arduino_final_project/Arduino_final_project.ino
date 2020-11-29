// SERVO MOTOR
#include <Servo.h>
Servo myservo;
int pos = 0;
// COMPONENTS
int buzzer = 8;
int leftLDR = A0;
int rightLDR = A1;
int motor = 6;
int button = 12;
// READING
int btnRead;
// VARIABLES
int peopleCount = 0;
int enter;
int out;
int flag = false;
//Functions
void entrySystem ();
void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(leftLDR, INPUT);
  pinMode(rightLDR, INPUT);
  pinMode(button, INPUT);
  myservo.attach(6);
  Serial.begin(9600);
}

void loop()
{
  btnRead = digitalRead(button); 
  if (btnRead==true){
    flag = ! flag; }   
  while (flag == true){
    btnRead = digitalRead(button); 
    if (btnRead==true){
      flag = ! flag; }
    else {  
     entrySystem();
     exitSystem (); 
          
    }
  }
}
  void entrySystem (){ 
     if (peopleCount <5){
      enter = analogRead (leftLDR);
      if (enter<=55){
        peopleCount ++;
        Serial.print(peopleCount);
        Serial.println();
      
// START SERVO MOTOR MOTION
      for (pos = 0; pos <= 180; pos += 1) { 
        myservo.write(pos);              
        delay(5);                     
  }  
  }  
     }
   
    // START BUZZER SOUND
    else 
    {
      tone(buzzer, 1000);
      delay(1000);
      noTone(buzzer);
    }
   
  }

  void exitSystem (){
// START ENTRY CONDITION OF PEOPLE
    if (peopleCount >=1){
      out = analogRead (rightLDR);
      if (out <=55){
  
        peopleCount -- ;
        Serial.print(peopleCount);
        Serial.println();
  
// START SERVO MOTOR MOTION
    for (pos = 180; pos >= 0; pos +=-1) { 
      myservo.write(pos);              
      delay(5);
                             
    }
  }
}
  }                      
