char receivedChar;
boolean newData = false;
int led2= 2;
int led3= 3;
int led4 =4;
int led5 =5;
int led6 =6;
int led7 =7;


void setup() {
  Serial.begin(9600);
 //Serial.println("<Arduino is ready>");
}

void loop() {
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  recvOneChar();
  showNewData();
}

void recvOneChar() {
  if (Serial.available() > 0) {
    receivedChar = Serial.readString();
    
    if (receivedChar == 'a') {
      lightLedOne(led2);
    }
     else if (receivedChar == 'A') {
       lightLedTwo(led2,led3);
       
       
    }
    else if (receivedChar == 'b') {
       lightLedTwo(led2,led3);
       
       
    }
     else if (receivedChar == 'B') {
       lightLedTwo(led2,led3);
       
       
    }
     else if (receivedChar == 'c') {
       lightLedTwo(led2,led5);
       
       
    }
     else if (receivedChar == 'C') {
       lightLedTwo(led2,led5);
       
       
    }
    else if (receivedChar == 'd') {
       lightLedThree(led2,led5,led6);
       
       
    }
     else if (receivedChar == 'D') {
       lightLedThree(led2,led5,led6);
       
       
    }
         
    else if (receivedChar == 'e') {
       lightLedTwo(led2,led6);
       
       
    }
     else if (receivedChar == 'E') {
       lightLedTwo(led2,led6);
       
       
    }
    else if (receivedChar == 'f') {
       lightLedThree(led2,led3,led5);
       
       
    }
     else if (receivedChar == 'F') {
       lightLedThree(led2,led3,led5);
       
       
    }
    else if (receivedChar == 'g') {
       lightLedFour(led2,led3,led5,led6);
       
       
    }
     else if (receivedChar == 'G') {
       lightLedFour(led2,led3,led5,led6);
       
       
    }
    else if (receivedChar == 'h') {
       lightLedThree(led2,led3,led6);
       
       
    }
     else if (receivedChar == 'H') {
       lightLedThree(led2,led3,led6);
       
       
    }
    else if (receivedChar == 'i') {
       lightLedTwo(led3,led5);
       
       
    }
     else if (receivedChar == 'I') {
       lightLedTwo(led3,led5);
       
       
    }
    else if (receivedChar == 'j') {
       lightLedThree(led3,led5,led6);
       
       
    }
     else if (receivedChar == 'J') {
       lightLedThree(led3,led5,led6);
       
       
    }
    else if (receivedChar == 'k') {
       lightLedTwo(led2,led4);
       
       
    }
    else if (receivedChar == 'K') {
       lightLedTwo(led2,led4);
       
       
    }
    else if (receivedChar == 'l') {
       lightLedThree(led2,led3,led4);
       
       
    }
     else if (receivedChar == 'L') {
       lightLedThree(led2,led3,led4);
       
       
    }
    else if (receivedChar == 'm') {
       lightLedThree(led2,led4,led5);
       
       
    }
     else if (receivedChar == 'M') {
       lightLedThree(led2,led4,led5);
       
       
    }
    else if (receivedChar == 'n') {
       lightLedFour(led2,led4,led5,led6);
       
       
    }
     else if (receivedChar == 'N') {
       lightLedFour(led2,led4,led5,led6);
       
       
    }
    else if (receivedChar == 'o') {
       lightLedThree(led2,led4,led6);
       
       
    }
     else if (receivedChar == 'O') {
       lightLedThree(led2,led4,led6);
       
       
    }
    else if (receivedChar == 'p') {
       lightLedFour(led2,led3,led4,led5);       
       
    }
    else if (receivedChar == 'P') {
       lightLedFour(led2,led3,led4,led5);       
       
    }
    else if (receivedChar == 'q') {
       lightLedFive(led2,led3,led4,led5,led6);
       
       
    }
     else if (receivedChar == 'Q') {
       lightLedFive(led2,led3,led4,led5,led6);
       
       
    }
    else if (receivedChar == 'r') {
       lightLedFour(led2,led3,led4,led6);
       
       
    }
     else if (receivedChar == 'R') {
       lightLedFour(led2,led3,led4,led6);
       
       
    }
    else if (receivedChar == 's') {
       lightLedThree(led3,led4,led5);
       
       
    }
     else if (receivedChar == 'S') {
       lightLedThree(led3,led4,led5);
       
       
    }
    else if (receivedChar == 't') {
       lightLedFour(led3,led4,led5,led6);
       
       
    }
     else if (receivedChar == 'T') {
       lightLedFour(led3,led4,led5,led6);
       
       
    }
    else if (receivedChar == 'u') {
       lightLedThree(led2,led4,led7);       
       
    }
     else if (receivedChar == 'U') {
       lightLedThree(led2,led4,led7);       
       
    }
    else if (receivedChar == 'v') {
       lightLedFour(led2,led3,led4,led7);       
       
    }
     else if (receivedChar == 'V') {
       lightLedFour(led2,led3,led4,led7);       
       
    }
    else if (receivedChar == 'w') {
       lightLedFour(led3,led5,led6,led7);       
       
    }
     else if (receivedChar == 'W') {
       lightLedFour(led3,led5,led6,led7);       
       
    }
    else if (receivedChar == 'x') {
       lightLedFour(led2,led4,led5,led6);       
       
    }
    else if (receivedChar == 'X') {
       lightLedFour(led2,led4,led5,led6);       
       
    }
    else if (receivedChar == 'y') {
       lightLedFive(led2,led4,led5,led6,led7);       
       
    }
     else if (receivedChar == 'Y') {
       lightLedFive(led2,led4,led5,led6,led7);       
       
    }
    else if (receivedChar == 'z') {
       lightLedFour(led2,led4,led6,led7);       
       
    }
     else if (receivedChar == 'Z') {
       lightLedFour(led2,led4,led6,led7);       
       
    }

    else if (receivedChar == ',') {
       lightLedOne(led3);    
       
    }
    else if (receivedChar == ';') {
       lightLedTwo(led3,led4);       
       
    }
    else if (receivedChar == ':') {
       lightLedTwo(led3,led6);       
       
    }
    else if (receivedChar == '.') {
       lightLedThree(led3,led5,led7);       
       
    }
    else if (receivedChar == '!') {
       lightLedThree(led3,led4,led6);       
       
    }
    else if (receivedChar == ' ') {
       lightLedSpace(led2);       
       
    }
    
    
  }



}


void showNewData() {
  if (newData == true) {
    Serial.print("This just in ... ");
    Serial.println(receivedChar);
    newData = false;
  }
}
void lightLedOne(int nameOfLedTwo) {
  digitalWrite(nameOfLedTwo, HIGH);
   delay (1000);
  digitalWrite(nameOfLedTwo, LOW);
 
  newData = true;
}
void lightLedTwo(int nameOfLedTwo, int nameOfLedThree) {
  digitalWrite(nameOfLedTwo, HIGH);
  digitalWrite(nameOfLedThree, HIGH);
   delay (1000);
  digitalWrite(nameOfLedTwo, LOW);
  digitalWrite(nameOfLedThree, LOW);
  newData = true;
}
void lightLedThree(int nameOfLedTwo, int nameOfLedThree, int nameOfLedFour) {
  digitalWrite(nameOfLedTwo, HIGH);
  digitalWrite(nameOfLedThree, HIGH);
  digitalWrite(nameOfLedFour, HIGH);
   delay (1000);
  digitalWrite(nameOfLedTwo, LOW);
  digitalWrite(nameOfLedThree, LOW);
  digitalWrite(nameOfLedFour, LOW);
  newData = true;
}
void lightLedFour(int nameOfLedTwo, int nameOfLedThree, int nameOfLedFour,int nameOfLedFive) {
  digitalWrite(nameOfLedTwo, HIGH);
  digitalWrite(nameOfLedThree, HIGH);
  digitalWrite(nameOfLedFour, HIGH);
   digitalWrite(nameOfLedFive, HIGH);
   delay (1000);
  digitalWrite(nameOfLedTwo, LOW);
  digitalWrite(nameOfLedThree, LOW);
  digitalWrite(nameOfLedFour, LOW);
   digitalWrite(nameOfLedFive, LOW);
  newData = true;
}
void lightLedFive(int nameOfLedTwo, int nameOfLedThree, int nameOfLedFour,int nameOfLedFive, int nameOfLedSix) {
  digitalWrite(nameOfLedTwo, HIGH);
  digitalWrite(nameOfLedThree, HIGH);
  digitalWrite(nameOfLedFour, HIGH);
  digitalWrite(nameOfLedFive, HIGH);
  digitalWrite(nameOfLedSix, HIGH);
   delay (1000);
  digitalWrite(nameOfLedTwo, LOW);
  digitalWrite(nameOfLedThree, LOW);
  digitalWrite(nameOfLedFour, LOW);
   digitalWrite(nameOfLedFive, LOW);
   digitalWrite(nameOfLedSix, LOW);
  newData = true;
}
void lightLedSix(int nameOfLedTwo, int nameOfLedThree, int nameOfLedFour,int nameOfLedFive, int nameOfLedSix,  int nameOfLedSeven) {
  digitalWrite(nameOfLedTwo, HIGH);
  digitalWrite(nameOfLedThree, HIGH);
  digitalWrite(nameOfLedFour, HIGH);
  digitalWrite(nameOfLedFive, HIGH);
  digitalWrite(nameOfLedSix, HIGH);
   digitalWrite(nameOfLedSeven, HIGH);
   delay (1000);
  digitalWrite(nameOfLedTwo, LOW);
  digitalWrite(nameOfLedThree, LOW);
  digitalWrite(nameOfLedFour, LOW);
   digitalWrite(nameOfLedFive, LOW);
   digitalWrite(nameOfLedSix, LOW);
   digitalWrite(nameOfLedSeven, LOW);
  newData = true;
}
void lightLedSpace(int nameOfLedTwo) {
  digitalWrite(nameOfLedTwo,  LOW);
   delay (2000);

 
  newData = true;
}
