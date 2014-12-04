// Test of Arduino
//Blink

//Pin 13 has onboard LED
int led = 13;

//Setup runs once when board is activated
void setup() {
 //Pin 13 as output
 pinMode(led, OUTPUT); 
}

void loop() {
 digitalWrite(led, HIGH); //Turn LED
 delay(1000); //Wait 1 second
 digitalWrite(led, LOW); //Turn LED on 13 off
 delay(1000); //Wait 1 second
  
}
