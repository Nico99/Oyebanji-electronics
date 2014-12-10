//Nicholas Oyebanji
//Lab01

////Functions
//void printHappy(String name) {
//  String result = "Happy Birthday" + name; ///This is cantantinating: add a string plus another string
//  Serial.println(result);
//}//
//
////functions
//void printGospels() {
// String gospels[] = {"Matthew", "Mark", "Luke", "John"};
// Serial.println("The Gospels are:");
// for(int i = 0; i<4; i++) {
//   Serial.println(gospels[i]); 
// }
// 
//}
//
//float computeArea(float wid, float hei) {
//  float area = wid * hei;
//  return(area);
//}

void function1() {
  Serial.println("I am an Arduino and I communicate at \n 9600 Baud rate. Ports 0 and 1 are used \n for serial communication. \n \n Serial communication works well for debugging \n and monitoring sensor values during the \n execution of a program.");
}

void function2a(int x, int y) {
  int result = (x/2) * y;
   Serial.println(result); 
}

void function2b(int x, int y) {
  int result = (2 * x) + (x * y);
  Serial.println(result);
}

void function3() {
 String favCharacters [] = {"Troy", "Harry Potter", "Frank Cat", "Lee", "Carter"};
 Serial.println("My favorite movie characters are:");
 //for loop
 for(int i = 0; i <5; i++) {
   Serial.println(favCharacters[i]); 
  }

}

//function 4
void function4() {
  int num[] = {1,2,3,4,5,6,7,8};
  
  //for loop to increase
  for(int i =0; i<8; i++) {
    Serial.println(num[i]);
  }
  //for loop to decrease
  for(int a=7; a>=0; a--) {
    Serial.println(num[a]);
  }
  for(int b = 1; b < 8; b+=2) {
    Serial.println(num[b]); 
  }
  for(int c = 0; c < 8; c+=2) {
    Serial.println(num[c]); 
  }
  for(int d = 6; d >=0; d-=2) {
    Serial.println(num[d]); 
  }
  for(int e = 7; e>=0; e-=2) {
    Serial.println(num[e]); 
  }
  
  
}

void function5() {
 String pitchNames[] = {"C", "D", "E", "F", "G", "A", "B", "C"};
 //Hey, I was wandering for this function, could I do a while loop so that this can repeat twice
 //for loop()
 for(int i = 0; i < 8; i++) {
   Serial.println(pitchNames[i]); 
 }//increasing
 
 //decreasing
 for(int a = 8; a >=0; a--) {
   Serial.println(pitchNames[a]); 
 }
 
 //increasing 
  for(int b = 0; b < 8; b++) {
   Serial.println(pitchNames[b]); 
 }//increasing
 
  //decreasing
 for(int c = 8; c >=0; c--) {
   Serial.println(pitchNames[c]); 
 }
 
 
}

void printFibo(int n) {
     int a = 0;//first digit
     int b = 1;//next digit
   for(int i = 0; i < n; i++) {
      int result = a + b; // the first digit and the last digit sum
      Serial.println( "Fibonacci sequence starts here:" + result);
      a = b;
      b = result;
   } 
}

//this finds the y-int in a linear x model
int findYIntercept(int a, int b) {
  int yInt = (a * 0) + b;
  return yInt;
}

//function 8 
//Wild numbers
void function8() {
  for(long i = 0; i < 100000; i++) {
    Serial.println( i * 10);
  } 
  //Answers to the questions
  //a. I think the variables will be multiplied by 10 
  //b. The sequence continously goes from positive to negative when it hits 32,000 due to it begin an interger instead of a long
  //c. The reason for this scenario is because everytime the number hits  100, 000, the number will switch to negative numbers. One way to change this from happening is to change the the int to a long, which will stop  at the limit
  //I put long so that it won't go up and down on the serial monitor, also, so that I can screenshoot
}

void function9() {
  long result = 0;
   for(int i  = 0; i<1000; i++) {
     if((i  % 5 == 0) || (i % 3 == 0)) {
         result +=i;
     }
   } 
   Serial.println(result);
}

//prints random words
void function10(int n) {
  String resul = "";
  String words[] = {"hi", "ferrari", "download", "ram", "nik"};
   for(int i =0; i < n; i++) { 
    int a = int(random(5));
     Serial.println(words[a]);
 }

}


void setup() {
  Serial.begin(9600);//Start serial communication
  //Serial.println("Hello, World");
  //Serial.println("This is printing");
  //printHappy("Nicholas");
  //Serial.println(computeArea(30, 40));
  //function1();
  //function2a(120, 512);
  //function2b(97, 32);
  function3();
  //function4();
  //function5();
  Serial.println(findYIntercept(3, 4));//in a linear model y = mx + b, in which you plug in 0 for x;
  // function8();//error in directions
  //printFibo(19);
  //function9();
  //function10(3);
  
}//end setup

void loop() {
  
}//end loop
