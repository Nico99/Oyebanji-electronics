//Final Project Code

//servo boat motors
#include <Servo.h>
Servo boatA;
Servo boatB;

//boolean for ignition
boolean boatOn = false;

/////////////////////
////////////////////
///////////////////////
//code for touch sensor
int inputPin = 3;//this is the digital port
int valRead; //val to read the button

void igniteEngine() {
  
  valRead = digitalRead(inputPin);
  Serial.println(boatOn);//this will tell if it works
  if(valRead == HIGH) {
    Serial.println("1");
    boatA.write(90);
    boatB.write(90);
   
  }
  if(valRead == LOW) {
    Serial.println("0");
     boatOn = true;
     
  if(boatOn == false) {
     boatA.write(0);
     boatB.write(180);
     waveFlag();
  }

       
   
  }
  
  
}


/////////////////////
////////////////////
///////////////////////
//code for the servos
void auton() {
  //boat goes straight
  boatA.write(0);
  boatB.write(180);
  delay(8000);
  
  //boat turns left
  boatA.write(90);
  boatB.write(180);
  delay(2000);
  
  //boat turns right
  boatA.write(0);
  boatB.write(90);
  delay(2000);
  
  //boat goes straight
  boatA.write(0);
  boatB.write(180);
  delay(10000);
  
  //boat turns right
  boatA.write(0);
  boatB.write(90);
  delay(3000);
  
  //boat turns left
  boatA.write(90);
  boatB.write(180);
  delay(2000);
  
  //boat goes straight
  boatA.write(0);
  boatB.write(180);
  delay(3000);
  
  //boat turn off
  boatA.write(90);
  boatB.write(90);
  delay(1000);
  
  
  
}


/////////////////////
////////////////////
///////////////////////
//code for the pentiometer
int sensorPin = 0;
int sensorValue = 0;

void steerBoat() {
  
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue); //read this values
  
int ledRedPin = 13;
int ledGreenPin = 12;
  
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);
  
  if(sensorValue < 800) {
  //boat turns left
  boatA.write(90);
  boatB.write(180);
  digitalWrite(ledRedPin, LOW);
  digitalWrite(ledGreenPin, HIGH);
  
   
  }
  if(sensorValue > 800) {
  //boat turns right
  boatA.write(0);
  boatB.write(90);
  digitalWrite(ledRedPin, HIGH);
  digitalWrite(ledGreenPin, LOW);
  
  }
}

/////////////////////
////////////////////
///////////////////////
//piezo code
int speaker = 11;
//setting up the sensor
int inputMusicPin = 1;
int val = 0;

//pitch scale
int c4 = 277;
int d4 = 293;
int e4 = 330;
int f4 = 370;
int g4 = 415;
int an4 = 440;
int b4 = 494;
int c5 = 523;
int r = 0;

//definition for the tempo
int tempo = 1000;
int w = tempo;
int h = w/2;
int q = h/2;
int e = q/2;
int s = e/2;

//arrays for the line notes and rhythm
int line1[] = {an4, an4, r, b4, c4, an4, d4, d4, r, d4, c4, b4, c4, c4, r, c4, b4, an4};
int line1Rhythm[] = {e, e, e, e, q, q, e, e, e, e, q, q, e, e, e, e, q, q};

int line2[] = {b4, b4, r, c4, b4, an4, g4, an4, r, c4, an4, b4, c4, an4, r, r, an4, e4, d4, c4, b4, c4, an4, b4, c4, b4};
int line2Rhythm[] = {e, e, e, e, e, e, q, h, h, q, q, q, e, e, q, e, e, e, e, e, e, q, q, q, e, e};

int line3[] = {r, r, c4, b4, c4, an4, r, f4, an4, an4, e4, r, c4, c4, e4, e4};
int line3Rhythm[] = {w, e, q, e, q, q, e, q, e, q, q, e, q, e, q, q};

int line4[] = {r, b4, b4, c4, b4, an4, r, c4, b4, c4, an4, r, f4, an4, an4, e4};
int line4Rhythm[] = {e, q, e, e, e, q, e, q, e, q, q, e, q, e, q, q};

int line5[] = {r, c4, c4, e4, e4, r, b4, b4, c4, an4};
int line5Rhythm[] = {e, q, e, q, q, e, q, e, q, q};

//function
void waveFlag() {
  //for loops for the lines of code
  for(int a = 0; a< 18; a++) {
     tone(speaker, line1[a], line1Rhythm[a]);
     delay(line1Rhythm[a]);
  }
  for(int b = 0; b<26; b++) {
    tone(speaker, line2[b], line2Rhythm[b]);
    delay(line2Rhythm[b]); 
  }
  for(int c = 0; c < 16; c++) {
    tone(speaker, line3[c], line3Rhythm[c]);
    delay(line3Rhythm[c]); 
  }
  for(int d = 0; d < 16; d++) {
    tone(speaker, line4[d], line4Rhythm[d]);
    delay(line4Rhythm[d]); 
  }
  for(int e = 0; e < 10; e++) {
    tone(speaker, line5[e], line5Rhythm[e]);
    delay(line5Rhythm[e]); 
  }
}


////////
///////
///////


void setup() {
  
  Serial.begin(9600);//serial communication
  
  //sevo setup
  boatA.attach(9);
  boatB.attach(10);
  
  //touch sensor setup
  pinMode(inputMusicPin, INPUT);
  
  //piezo 
  pinMode(speaker, OUTPUT);
  
  waveFlag();
   igniteEngine();
   auton();
  
  
}



void loop() {

steerBoat();

  
}
