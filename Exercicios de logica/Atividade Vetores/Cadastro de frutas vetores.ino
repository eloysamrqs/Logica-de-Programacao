// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  Serial.println("SACOLAO DO ZEH");
  Serial.println();
  
  String frutas[6];//cria o vetor tamanho 6 
  
  Serial.println("OH ZEH, bora cadastrar as frutas");
  
  Serial.println();
  
  
  
  for(int i = 0; i <= 5; i++){
  Serial.println("Informe " + String(i + 1) + "a fruta:");
  while (!Serial.available());
  String frutaDigitada = Serial.readString();
  
  frutas[i] = frutaDigitada; 
  }
  
 for(int i = 0; i <= 5; i++){
 Serial.println(String(i) +"a Fruta: " + frutas[i]);
  }
  
}

void loop()
{
  
}