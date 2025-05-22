//Faça um programa que receba um número 
// e exiba o seu dobro

void setup()
{
 Serial.begin(9600);
}
 int Numero = 0;
 int NumeroDobro = 0;
 
void loop()
{
Serial.println("digite um numero");
while(! Serial.available() ){}
Numero = Serial.parseInt();
NumeroDobro = Numero * 2;
Serial.println("O dobro de " + String(Numero) + " eh: " + String(NumeroDobro) );
}