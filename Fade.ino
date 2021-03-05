int vib = 9;      
int strength = 0;    
int fadeAmount = 5;    

void setup() {
  pinMode(vib, OUTPUT);
}

void loop() {
  analogWrite(vib, strength);

  strength = strength + fadeAmount;

  if (strength <= 0 || strength >= 255) {
    fadeAmount = -fadeAmount;
  }
 
  delay(30);
}
