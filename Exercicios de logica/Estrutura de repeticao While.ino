/*
While - É uma estrutura de reperetição que só executa a repetição/laço enquanto a condição for verdadeira 
*/

/*
Do While - E uma estrutura de repeticao que executa PELO MENOS UMA VEZ independente da condicao.
Em seguida, continuara executando enquanto a condicao for verdadeira.
*/

/*
For - E uma estrutura de  repeticao qu tem dentro da condicao a inicializacao, a propria condicao do for e incremente.
Ponto de atencao as definicoes sao separadas por ;
*/

int numero1 = 0; //variavel global

void setup()
{
 Serial.begin(9600);
}

//funcao
void loop()
{
  
 //while
  int contadorWhile = 1;
  
  while(contadorWhile <= 5){
    Serial.println(String(contadorWhile));
    //contador = contadorWhile + 1;
    contadorWhile++;
  }
   int contadorWhileMenor = 5;
    
  while(contadorWhile > 0){
    Serial.println(String(contadorWhile));
    //contador = contadorWhile + 1;
    contadorWhile--; 
  delay(1200);
}


 //Do While 
int contadorDoWhile = 1;
do{
Serial.println("Contando Do while " + String(contadorDoWhile));
contadorDoWhile++;
  
}
  while(contadorDoWhile <= 5);
  delay(1200);
  
  
  //For  
  //      variavel      condicao do for
  for (int contador = 1; contador <= 100; contador += 5 ){
  Serial.println("Contador do For: " + String(contador));   
}
  delay(1200);
  
}