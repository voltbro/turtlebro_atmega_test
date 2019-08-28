void setup() {
  // put your setup code here, to run once:
  pinMode(22,INPUT);
  pinMode(23,INPUT);
  pinMode(24,INPUT);  
  pinMode(25,INPUT);   

  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(28,OUTPUT);
  pinMode(29,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(29,digitalRead(22));
  digitalWrite(28,digitalRead(24));
  digitalWrite(27,digitalRead(23));
  digitalWrite(26,digitalRead(25));

}
