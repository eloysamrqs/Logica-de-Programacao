/*Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro.
*/ 

float percentual;
float produto;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|         LOPAL - EX10         |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
  Serial.println("Digite o preco do produto");
  while (!Serial.available()) {}
  produto = Serial.parseFloat();

//percentual 
  Serial.println("Digite o percentual de acrescimo");
  while (!Serial.available()) {}
  percentual = Serial.parseFloat();

//calculo
  percentual = percentual/100;
  produto = produto + ( produto * percentual);
  
//saida
  Serial.println("o preco de venda do produto: " + String(produto) );
  
//processamento e saida
  if (percentual < 0.50){
  Serial.println("A sua margem de lucro sera muito baixa.");
 }
  Serial.println();
  Serial.println();
  delay(5000);
}