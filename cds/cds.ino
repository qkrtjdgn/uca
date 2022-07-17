void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int lightValue = analogRead(A0);
  Serial.println(lightValue);
  analogWrite(3, 255-lightValue/3);
//  if(lightValue < 200){
//    digitalWrite(7,HIGH);
//  }
//  else{
//    digitalWrite(7,LOW)0;
//  }
delay(10);
}
