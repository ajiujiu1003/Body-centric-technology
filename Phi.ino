void setup() {

  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  analogWrite(2, 255);
  analogWrite(4, 255);
  analogWrite(8, 255);
  analogWrite(13, 255);
  digitalWrite(13, HIGH);
  digitalWrite(8, LOW);  
  digitalWrite(4, LOW);
  digitalWrite(2,LOW); 
  delay(500);                      
  digitalWrite(13, LOW);    
  digitalWrite(8, HIGH);  
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);  
  delay(500);  
  digitalWrite(13, LOW);
  digitalWrite(8, LOW);  
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH); 
  delay(500);   
  digitalWrite(13, LOW);
  digitalWrite(8, LOW);  
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW); 
  delay(500);   
 
}
