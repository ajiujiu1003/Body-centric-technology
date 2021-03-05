void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(2, 255);
  analogWrite(4, 255);
  analogWrite(13, 255);
  digitalWrite(13, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW); 
  delay(100);                      
  digitalWrite(13, LOW);      
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);  
  delay(100);  
  digitalWrite(13,LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(100); 
  digitalWrite(13,LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  delay(2000); 
}
