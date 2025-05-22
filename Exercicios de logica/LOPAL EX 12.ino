/*
Faça um programa que receba um número do usuário e informe se este
número é par ou ímpar.
*/

void setup()
{
 Serial.begin(9600);
}

 int numero = 0;

void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|         LOPAL - EX12         |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
  
  Serial.println("Digite um numero");
  while (!Serial.available()) {}
  numero = Serial.parseInt();
  
  if( numero %2 == 1 ) {
  Serial.println("Numero impar");
  } else {
  Serial.println("Numero par");
  } 
  }