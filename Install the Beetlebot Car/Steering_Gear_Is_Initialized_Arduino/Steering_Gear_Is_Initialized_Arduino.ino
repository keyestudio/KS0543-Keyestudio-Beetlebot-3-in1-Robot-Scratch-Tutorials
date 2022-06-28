//*************************************************************************************
/*
  Project 00 Steering gear is initialized
  Adjust the initial steering gear Angle to 90°.
*/
int servoPin = 9; //Define the pins of the steering gear

void setup() {
  pinMode(servoPin, OUTPUT); //steering pin is set to output
  servopulse(servoPin, 90); //Turn it to 90 degrees
  delay(300); //delay 0.3S
}
void loop(){

}
void servopulse(int pin, int myangle) { //Impulse function
  int pulsewidth = map(myangle, 0, 180, 500, 2500); //Map Angle to pulse width
  for (int i = 0; i < 5; i++) { //Output a few more pulses
    digitalWrite(pin, HIGH);//Set the steering gear interface level to high
    delayMicroseconds(pulsewidth);//Number of microseconds of delayed pulse width value
    digitalWrite(pin, LOW);//Lower the level of steering gear interface
    delay(20 - pulsewidth / 1000);
  }
}
//*************************************************************************************
