const int buttonPin=7 ;
const int LEDCOUNT=3;
int LEDPins[]={2,3,4,5,6};
int buttonState=0;
void setup() {
for (int thisLED=0;thisLED <=4; thisLED++){
  pinMode(LEDPins[thisLED],OUTPUT);
}
  pinMode(buttonPin, INPUT);
}

void loop() {
buttonState = digitalRead(buttonPin);
if (buttonState == HIGH) {
  Serial.println("button on");
   for(int num =0; num<=4; num++){
   digitalWrite(LEDPins[num],HIGH);
   delay(200);
   }
   for(int num=4;num>=0;num--){
   digitalWrite(LEDPins[num],LOW);
   delay(200);
   }
    for(int t=0;t<=4;t++){
      for(int num =2; num<=6; num++)
        digitalWrite(num,HIGH);
        delay(200);
       for(int num =6; num>=2; num--)
        digitalWrite(num,LOW);
        delay(200);  
    }
  } else { 
    
    for(int num =0; num<=4; num++){
    digitalWrite(LEDPins[num], LOW);}
  }
}
