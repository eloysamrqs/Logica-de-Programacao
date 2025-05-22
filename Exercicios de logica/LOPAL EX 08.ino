/* Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
Ao final exiba o nome, o cargo e o salário desse funcionário.
*/

void setup()
{
  Serial.begin(9600);
}
  String nome = "";
  String cargo = "";
  float salario = 0;
  float acrescido = 0;

void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|         LOPAL - EX08         |");
  Serial.println("|------------------------------|");
  
  Serial.println();
 
  Serial.println("Digite seu nome ");
  while (! Serial.available());
  nome = Serial.readString();
  
  Serial.println("Digite seu cargo ");
  while (! Serial.available());
  cargo = Serial.readString();
  
  Serial.println("Digite seu salario ");
  while (! Serial.available());
  salario = Serial.parseFloat();
  
  //processamento
  acrescido = salario * 0.10;
  
  //acrecido
  if (salario < 1000){
  salario = salario + acrescido;
  } else {
  salario = salario;
  }
  
  //saida 
  Serial.println("|------------------------------|");
  
  Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.println("Salario: " + String(salario) );
  
  Serial.println("|------------------------------|"); 
  
  Serial.println();//pula uma linha
  
  delay(1000);
}