/*
Faça um programa receba dois valores e imprima qual é o maior número
digitado.
*/

void setup()
{
  Serial.begin(9600);
}
 int numero1 = 0;
 int numero2 = 0;
void loop()
{
  
  Serial.println("|------------------------------|");
  Serial.println("|         LOPAL - EX14         |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
  Serial.println("Digite o primeiro numero que deseja verificar");
  while (!Serial.available()) {}
  numero1 = Serial.parseInt();
  Serial.println("Digite o segundo numero que deseja verificar");
  while (!Serial.available()) {}
  numero2 = Serial.parseInt();
  
  if( numero1 > numero2 ) {
  Serial.println( "O maior numero " + String(numero1));
  } 
  if( numero2 > numero1 ) {
  Serial.println( "O maior numero " + String(numero2));
  }
  if( numero1 == numero2 ) {
  Serial.println( "Os dois numeros sao iguais");
  }
  Serial.println();
  Serial.println();
  delay(5000);

delay(5000); 
}