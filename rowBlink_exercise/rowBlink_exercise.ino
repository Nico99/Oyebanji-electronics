//Nicholas Oyebanji

int pins[] = {2, 3, 4, 5, 6, 7, 8, 9};

//pattern function
void patternFunction() {
  for(int i = 0; i <8; i++) {
   digitalWrite(pins[i], HIGH);
   delay(250);
    digitalWrite(pins[i], LOW); 
  }
  for(int a = 7; a >= 0; a--) {
    digitalWrite(pins[a], HIGH);
    delay(250);
    digitalWrite(pins[a], LOW);
  }

}

void setup() {
  for(int i = 0; i < 8; i++) {
     pinMode(pins[i], OUTPUT);
   }
}

void loop() {
  patternFunction();
}
