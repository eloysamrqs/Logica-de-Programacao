// C++ code
//
void setup()
{
 Serial.begin(9600);
}
int cargo = 0;
float salario = 0;
void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|         LOPAL - EX16         |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
 
//cargo 
  Serial.println("Digite o numero do cargo");
  Serial.println("1 para Producao");
  Serial.println("2 para Administrativo");
  Serial.println("3 para Diretoria");

  while (!Serial.available()) {}
  cargo = Serial.parseInt();
//salario  
  Serial.println("Digite o salario");
  while (!Serial.available()) {}
  salario = Serial.parseFloat();
 
  if(cargo == 1) {
  salario = salario + salario * (6.5/100);
  Serial.println("Novo salario: " + String(salario));
  } else if(cargo == 2) {
  salario = salario + salario * (7.5/100);
  Serial.println("Novo salario: " + String(salario));
  } else if(cargo == 3) {
  salario = salario + salario * 0.12;
  Serial.println("Novo salario: " + String(salario));
  } else {
  Serial.println("ERRO: O numero digitado nao corresponde a nenhum cargo");
  }
  delay(5000);
  Serial.println();
  Serial.println();
}