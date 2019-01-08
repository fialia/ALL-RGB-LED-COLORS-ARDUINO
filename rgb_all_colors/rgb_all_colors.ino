int red = 5;
int green = 6;
int blue = 9;

void setup(){
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  analogWrite(red,0);
  analogWrite(green,0);
  analogWrite(blue,0);
}
void loop(){
  WHITE();
  delay(100);
  LIGHTYELLOW();
  delay(100);
  LIGHTYELLOW1();
  delay(100);
  YELLOW();
  delay(100);
  LIGHTORANGE();
  delay(100);
  ORANGE();
  delay(100);
  LIGHTRED();
  delay(100);
  LIGHTRED1();
  delay(100);
  RED();
  delay(100);
  REDTOROZE();
  delay(100);
  REDTOROZE1();
  delay(100);
  REDTOROZE2();
  delay(100);
  ROZE();
  delay(100);
  LIGHTPURPLE();
  delay(100);
  PURPLE();
  delay(100);
  DARKPURPLE();
  delay(100);
  DARKPURPLE1();
  delay(100);
  PURPLETOBLUE();
  delay(100);
  PURPLETOBLUE1();
  delay(100);
  BLUE();
  delay(100);
  LIGHTBLUE();
  delay(100);
  LIGHTBLUE1();
  delay(100);
  LIGHTBLUE2();
  delay(100);
  LIGHTBLUE3();
  delay(100);
  LIGHTBLUE4();
  delay(100);
  BLUETOGREEN();
  delay(100);
  BLUETOGREEN1();
  delay(100);
  LIGHTGREEN();
  delay(100);
  GREEN();
  delay(100);
  GREENTOWHITE();
  delay(100);
  GREENTOWHITE1();
  delay(100);
  GREENTOWHITE2();
  delay(100);
  GREENTOWHITE3();
  delay(100);
  GREENTOWHITE4();
  delay(100);  
}
void WHITE(){
  analogWrite(red,255);
  analogWrite(green,255);
  analogWrite(blue,255);
}
void LIGHTYELLOW(){
  analogWrite(red,255);
  analogWrite(green,255);
  analogWrite(blue,153);
}
void LIGHTYELLOW1(){
  analogWrite(red,255);
  analogWrite(green,255);
  analogWrite(blue,51);
}
void YELLOW(){
  analogWrite(red,255);
  analogWrite(green,255);
  analogWrite(blue,0);
}
void LIGHTORANGE(){
  analogWrite(red,255);
  analogWrite(green,204);
  analogWrite(blue,0);
}
void ORANGE(){
  analogWrite(red,255);
  analogWrite(green,153);
  analogWrite(blue,0); 
}
void LIGHTRED(){
  analogWrite(red,255);
  analogWrite(green,102);
  analogWrite(blue,0);
}
void LIGHTRED1(){
  analogWrite(red,255);
  analogWrite(green,51);
  analogWrite(blue,0);
}
void RED(){
  analogWrite(red,255);
  analogWrite(green,0);
  analogWrite(blue,0);
}
void REDTOROZE(){
  analogWrite(red,255);
  analogWrite(green,0);
  analogWrite(blue,51);
}
void REDTOROZE1(){
  analogWrite(red,255);
  analogWrite(green,0);
  analogWrite(blue,102);
}
void REDTOROZE2(){
  analogWrite(red,255);
  analogWrite(green,0);
  analogWrite(blue,204);
}
void ROZE(){
  analogWrite(red,255);
  analogWrite(green,0);
  analogWrite(blue,255);
}
void LIGHTPURPLE(){
  analogWrite(red,204);
  analogWrite(green,0);
  analogWrite(blue,255);
}
void PURPLE(){
  analogWrite(red,153);
  analogWrite(green,0);
  analogWrite(blue,255);
}
void DARKPURPLE(){
  analogWrite(red,102);
  analogWrite(green,0);
  analogWrite(blue,255);
}
void DARKPURPLE1(){
  analogWrite(red,51);
  analogWrite(green,0);
  analogWrite(blue,153);
}
void PURPLETOBLUE(){
  analogWrite(red,51);
  analogWrite(green,0);
  analogWrite(blue,204);
}
void PURPLETOBLUE1(){
  analogWrite(red,51);
  analogWrite(green,0);
  analogWrite(blue,255);
}
void BLUE(){
  analogWrite(red,0);
  analogWrite(green,0);
  analogWrite(blue,255);
}
void LIGHTBLUE(){
  analogWrite(red,0);
  analogWrite(green,51);
  analogWrite(blue,255);
}
void LIGHTBLUE1(){
  analogWrite(red,0);
  analogWrite(green,102);
  analogWrite(blue,255);
}
void LIGHTBLUE2(){
  analogWrite(red,0);
  analogWrite(green,153);
  analogWrite(blue,255);
}
void LIGHTBLUE3(){
  analogWrite(red,0);
  analogWrite(green,204);
  analogWrite(blue,255);
}
void LIGHTBLUE4(){
  analogWrite(red,0);
  analogWrite(green,255);
  analogWrite(blue,255);
}
void BLUETOGREEN(){
  analogWrite(red,0);
  analogWrite(green,255);
  analogWrite(blue,204);
}
void BLUETOGREEN1(){
  analogWrite(red,0);
  analogWrite(green,255);
  analogWrite(blue,153);
}
void LIGHTGREEN(){
  analogWrite(red,0);
  analogWrite(green,255);
  analogWrite(blue,102);
}
void GREEN(){
  analogWrite(red,0);
  analogWrite(green,255);
  analogWrite(blue,0);
}
void GREENTOWHITE(){
  analogWrite(red,51);
  analogWrite(green,255);
  analogWrite(blue,102);
}
void GREENTOWHITE1(){
  analogWrite(red,102);
  analogWrite(green,255);
  analogWrite(blue,102);
}
void GREENTOWHITE2(){
  analogWrite(red,153);
  analogWrite(green,255);
  analogWrite(blue,153);
}
void GREENTOWHITE3(){
  analogWrite(red,204);
  analogWrite(green,255);
  analogWrite(blue,153);
}
void GREENTOWHITE4(){
  analogWrite(red,204);
  analogWrite(green,255);
  analogWrite(blue,204);
}

