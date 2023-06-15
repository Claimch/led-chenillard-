boolean buttonWasUp = true;

int bouton = 13;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int sec = 1000;
int position;
int sec0 = 0;

void setup() {
  Serial.begin(115200);
  pinMode (2,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode (8,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (10,OUTPUT);  
  pinMode (13,INPUT_PULLUP);
sec0= analogRead (A5) ;
}

void loop() {



sec = analogRead(A5); //- sec0;          // réalise la lecture analogique
  position = map(sec, 0, 1023, 0, 10000);  // convertir en pourcentage
  sec = sec + position;
  Serial.print("sec: ");
  Serial.println(position);
  
boolean buttonIsUp = digitalRead(13);

if (buttonWasUp && !buttonIsUp){
  //if (buttonIsUp = false)
  
    delay(10);
    buttonIsUp = digitalRead(2);
      if (!buttonIsUp) {
         digitalWrite(2,HIGH);
         delay(sec);
         digitalWrite(2,LOW);
         digitalWrite(3,HIGH);
         delay(sec);
         digitalWrite(3,LOW);
        digitalWrite(4,HIGH);
         delay(sec);
         digitalWrite(4,LOW);
         digitalWrite(5,HIGH);
         delay(sec);
         digitalWrite(5,LOW);
         digitalWrite(6,HIGH);
         delay(sec);
         digitalWrite(6,LOW);
         digitalWrite(7,HIGH);
         delay(sec);
         digitalWrite(7,LOW);
         digitalWrite(8,HIGH);
         delay(sec);
         digitalWrite(8,LOW);
         digitalWrite(9,HIGH);
         delay(sec);
         digitalWrite(9,LOW);
         digitalWrite(10,HIGH);
         delay(sec);
         digitalWrite(10,LOW);
         Serial.print("sec: ");
         Serial.println(position);
      }
   }
   buttonWasUp = buttonIsUp;
}
