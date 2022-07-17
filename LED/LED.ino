void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7,HIGH);
  delay(50);
  digitalWrite(8,HIGH);
  delay(50);
  digitalWrite(12,HIGH);
  delay(50);
  digitalWrite(7,LOW);
  delay(50);
  digitalWrite(8,LOW);
  delay(50);
  digitalWrite(12,LOW);
  delay(50);
}
