//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

//variaveis
int anoNasc = 0;
int anoAtual = 0;
int idadePessoa = 0;
int idadeSemana = 0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("digite o seu ano de nascimento");
  while(! Serial.available() ){}
  anoNasc = Serial.parseInt();
  delay(500);
 
  Serial.println("digite o ano atual: ");
  while(! Serial.available() ){}
  anoAtual = Serial.parseInt();
  delay(500);
    
  //processamento 
  idadePessoa = anoAtual - anoNasc;
  idadeSemana = idadePessoa * 52;
  
  //saida
  Serial.println("Sua idade: " + String(idadePessoa) );
  Serial.println("Sua idade em Semana: " + String(idadeSemana) );
  
}