// Arduino Code for Automatic Goggles

#include <Servo.h>

Servo left, right; //Initialising 2 servo objects
int LDR = A0; // This is for the output wire of sensor
int threshold = 56; //Threshold value for brightness
void setup() {
  // put your setup code here, to run once:
  left.attach(9);
  right.attach(10);
  left.write(90);
  right.write(90);
 
  delay(10);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(LDR)); //Comment out this line after testing
    if((analogRead(LDR)/10) < threshold){
      
      left.write(90);
      right.write(90);
      
    }
    else{
      
      left.write(180);
      right.write(0);
      
    }
}
