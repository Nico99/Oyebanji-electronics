//Nicholas Oyebanji

//Lab02

//array for the pins on the breadboard
int lights[] = {2, 3, 4, 5, 6, 7, 8, 9};

//functions 
void pattern01() {
    for(int i = 0; i < 8; i++) {
      digitalWrite(lights[i], HIGH);
      delay(250);
      digitalWrite(lights[i], LOW);
    }
    
    for(int a = 8; a >=0; a--) {
      digitalWrite(lights[a], HIGH);
      delay(250);
      digitalWrite(lights[a], LOW);
    }
}

void pattern02() {
   for(int i = 0; i < 8; i++) {
     digitalWrite(lights[i], HIGH);
     delay(5);
     digitalWrite(lights[i], LOW);
   }
   for(int a = 8; a>=0; a--) {
     digitalWrite(lights[a], HIGH); 
     delay(250);
     digitalWrite(lights[a], HIGH); 
   }
}

void pattern03() {
  for(int i = 0; i < 8; i++) {
    digitalWrite(lights[i], HIGH);
    delay(10);
    digitalWrite(lights[i], LOW);
}
}

void pattern04() {
  for(int i =0; i < 10; i++) {
     if( i < 8) {
        digitalWrite(lights[i], HIGH); //when it goes up in the for loop, it turns off the second interger behind the current value.
     }
     delay(250);
     digitalWrite(lights[i-2],LOW);
   
     
  }

}

void setup() {
  //sets up the baud communication speed
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}//end setup

//loop
void loop() {
  //pattern01(); 
  //pattern02();
  //pattern03();
  pattern04();
}



