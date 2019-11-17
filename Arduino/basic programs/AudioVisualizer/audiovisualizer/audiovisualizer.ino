
char why;
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  /*String s = "";
  char temp = Serial.read();
  while (temp != '!') {
    s += temp;
    temp = Serial.read();
  }
  int a = s.toInt();*/
  int a = Serial.read() - 'A';
  if (a > 1)
    digitalWrite(2, HIGH);
  if (a > 3)
    digitalWrite(3, HIGH);
  if (a > 6)
    digitalWrite(4, HIGH);
  if (a > 8)
    digitalWrite(5, HIGH);
  if (a > 11)
    digitalWrite(6, HIGH);
  if (a > 13)
    digitalWrite(7, HIGH);
  if (a > 16)
    digitalWrite(8, HIGH);
  if (a > 18)
    digitalWrite(9, HIGH);
  if (a > 21)
    digitalWrite(10, HIGH);
  if (a > 23)
    digitalWrite(11, HIGH);
  if (a > 26)
    digitalWrite(12, HIGH);
  if (a > 28)
    digitalWrite(13, HIGH);

  delay(3);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}
