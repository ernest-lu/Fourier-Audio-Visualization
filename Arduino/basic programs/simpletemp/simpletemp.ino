int ThermistorPin = 0;
int Vo;
float R1 = 100000;
float logR2, R2, T;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;

int REDLED = 4;
int GREENLED = 5;
int BLUELED = 6;


void setup() {
  Serial.begin(9600);
  pinMode(BLUELED,OUTPUT);
  pinMode(GREENLED,OUTPUT);
  pinMode(REDLED,OUTPUT);
}

void loop() {

  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  T = T - 273.15;

  if(T>=30.1 && T<=55){
    digitalWrite(BLUELED,LOW);
    digitalWrite(GREENLED,HIGH);
    digitalWrite(REDLED,LOW);  
  }
  else if(T>=55.1 && T<=75) {
     digitalWrite(BLUELED,HIGH);
     digitalWrite(GREENLED,LOW);
     digitalWrite(REDLED,LOW);  
  }
  else if(T<=30&&T>=0){
     digitalWrite(BLUELED,LOW);
     digitalWrite(GREENLED,LOW);
     digitalWrite(REDLED,HIGH); 
  }

  Serial.print("Temperature: "); 
  Serial.print(T);
  Serial.println(" C"); 

  delay(500);
}
