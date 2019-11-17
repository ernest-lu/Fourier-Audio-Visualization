
int REDLED = 4;
int GREENLED = 5;
int BLUELED = 6;

void setup(){
  pinMode(BLUELED,OUTPUT);
  pinMode(GREENLED,OUTPUT);
  pinMode(REDLED,OUTPUT);
}

void loop(){
  digitalWrite(BLUELED,HIGH);
  digitalWrite(GREENLED,HIGH);
  digitalWrite(REDLED,HIGH);
}
