//Classwork: Encoding Music Assessment
//Nicholas Oyebanji
//All work here is honestly obtained and is my own.

//Variables for Pins
int speaker = 13;

//Constants for Pitch
int c4 = 261;
int d4 = 293;
int e4 = 330;
int f4 = 350;
int g4 = 392;
int an4 = 440;
int b4 = 494;
int c5 = 523;

//Variables for Rhythm
int beat = 1000;
int w = beat;
int h = w/2;
int q = h/2;
int e = q/2;
int s = e/2;

//Arrays for Pitch and Rhythm
//first line array and rhythm
int line1Notes [] = { e4, e4, e4, e4, e4, e4, e4, g4, c4, d4, e4};
int line1Rhythm [] = {q, q, h, q, q, h, q, q, q, q, w};

//second line array and rhythm
int line2Notes [] =  {f4, f4, f4, f4, f4, e4, e4, e4, e4, d4, d4, e4, d4, g4};
int line2Rhythm[] = { q, q, q, q, q, q, q, q, q, q, q, q, h, h};

//third line array and rhythm
int line3Notes[] = { e4, e4, e4, e4, e4, e4, e4, g4, c4, d4, e4};
int line3Rhythm[] = { q, q, h, q, q, h, q, q, q, q, w};

//fourth line array and rhythm
int line4Notes[] = { f4, f4, f4, f4, f4, e4, e4, e4, g4, g4, f4, d4, c4};
int line4Rhythm[] = {q, q, q, q, q, q, q, q, q, q, q, q, w};

//function to Play Music
void jingleBells() {
  for(int n = 0; n < 11; n++) {
     tone(speaker, line1Notes[n], line1Rhythm[n]);
     delay(line1Rhythm[n]);
  }
  
  for(int n = 0; n < 14; n++) {
    tone(speaker, line2Notes[n], line2Rhythm[n]);
    delay(line2Rhythm[n]); 
  }
  
  for(int a = 0; a < 11; a++) {
    tone(speaker, line3Notes[a], line3Rhythm[a]);
    delay(line3Rhythm[a]); 
  }
  
  for(int b = 0; b < 13; b++) {
    tone(speaker, line4Notes[b], line4Rhythm[b]);
    delay(line4Rhythm[b]);
  }
  
}

//void setup
void setup() {
  pinMode(speaker, OUTPUT);
}

void loop() {
  jingleBells();
}


