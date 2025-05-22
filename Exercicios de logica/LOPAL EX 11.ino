/*
Faça um programa que receba um número inteiro do usuário e informe se este
número é positivo ou negativo.
*/

void setup()
{
 Serial.begin(9600);
}
float numero = 0;

void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|         LOPAL - EX11         |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
  Serial.println("Digite um numero");
  while (!Serial.available()) {}
  numero = Serial.parseFloat();
  
  if(numero >= 0) {
  Serial.println("Numero positivo");
  } else {
  Serial.println("Numero negativo");
  }
  delay(5000);
}