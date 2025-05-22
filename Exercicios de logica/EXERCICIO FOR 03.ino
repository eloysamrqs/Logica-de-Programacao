void setup() {
  Serial.begin(9600); 
}

void loop() {
  for (int contador = 0; contador <= 100; contador +=2) {  
  Serial.println("Contador do For: " + String(contador));
  delay(1000);
  }
}