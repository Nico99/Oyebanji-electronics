//Nicholas Oyebanji
//Lab04

//variable for the speaker
int speaker = 13;

//I had to change some of the values to fit the song

//setting up the sensor
int inputPin = 1;
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

void setup() {
  Serial.begin(9600);
  pinMode(speaker, OUTPUT);
 
 //sensor
pinMode(inputPin, INPUT);//declaring the pushbutton as input 
}

void loop() {
 //waveFlag();
  
  //sensor code
  val = analogRead(inputPin);//read inputValue
   
   if(val > 500) {
   waveFlag();
   Serial.println(val); 
   }
  
  
  
}






