//#include <TimerOne.h>

#define NPN_PIN 9

void setup() {

  Serial.begin(115200);
  //Timer1.initialize(100); // 100 us => 10 kHz
  //Timer1.pwm(NPN_PIN, 0); // Start with 0 duty 
}

void loop() {

  // Set the duty cycle
  
  float duty = 0.25;
  analogWrite(NPN_PIN, duty*255);

   // Set the duty cycle
  //Timer1.pwm(NPN_PIN, duty*1023); 

  float vA1 = analogRead(A0);
  float vOut = vA1*5.0/1023.0*(5.0+1.0)/1.0;

  Serial.print(vOut);
  Serial.println();

}