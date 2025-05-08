/*

Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
inferior a 500 reais. Escreva um programa que receba o salário de um
funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
funcionário não tenha direito a aumento.

*/ 

float salario;
float aumento;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|         LOPAL - EX09         |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
//salario
  Serial.println("Digite o seu salario"); //pergunta ao usuario
  while (!Serial.available()) {} //da uma pausa parao usuario responder
  salario = Serial.parseFloat(); //guarda a resposta do usuario

//condição
  if (salario < 500) {
  salario = salario * 1.3;
  Serial.println ("Seu novo salario: R$" + String (salario) );
  } else {
  salario = salario;
  Serial.println ("Voce nao recebera um aumento");
  }
 delay(5000);
 }