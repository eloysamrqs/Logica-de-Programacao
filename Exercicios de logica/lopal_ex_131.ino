/*
Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.
*/

void setup()
{
  Serial.begin(9600);
}
 int numero = 0;
void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|         LOPAL - EX13         |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
  Serial.println("Digite o numero que deseja verificar");
  while (!Serial.available()) {}
  numero = Serial.parseInt();
  
  if( numero %2 == 0 ) {
  Serial.println(numero);
  }
  Serial.println();
  Serial.println();
  delay(5000);
}