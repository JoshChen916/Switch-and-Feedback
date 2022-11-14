 //reference: https://www.youtube.com/watch?v=CP6U9R3w3xg, https://www.youtube.com/watch?v=e1FVSpkw6q4
 
const int LEDCOUNT=3;
int LEDPins[]={2,3,4,5};

void setup() {
for (int thisLED=0;thisLED <=3; thisLED++){
  pinMode(LEDPins[thisLED],OUTPUT);
}
}

void loop(){
   for(int num =0; num<=3; num++){
   digitalWrite(LEDPins[num],HIGH);
   delay(200);
   }
   for(int num=3;num>=0;num--){
   digitalWrite(LEDPins[num],LOW);
   delay(200);
   }
    for(int t=0;t<=4;t++){
      for(int num =2; num<=5; num++)
        digitalWrite(num,HIGH);
        delay(200);
       for(int num =5; num>=2; num--)
        digitalWrite(num,LOW);
        delay(200);  
    }
  } 
