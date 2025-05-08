/*Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIR OU IGUAL A 6 e 
SE A frequência É MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!
*/
 
float n1; 
float n2;
float media;
float frequencia;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
 Serial.println("Digite sua primeira nota");
 while (! Serial.available());
 n1 = Serial.parseFloat();
 
 Serial.println("Digite sua segunda nota");
 while (! Serial.available());
 n2 = Serial.parseFloat();
  
 Serial.println("Digite a frequencia");
 while (! Serial.available());
 frequencia = Serial.parseFloat();
  
  
 //processamento
  media = (n1 + n2) / 2;
    
 if(media >= 6 && media < 10 && frequencia >= 75){ //dificuldade em lembrar os operadores
 Serial.println("Aprovado");
 }else if(media == 10 && frequencia >= 75){//dificuldade em lembrar os operadores
 Serial.println("Aprovado");
 Serial.println("Parabens! Nota maxima");
 }else if(media < 6 && frequencia >= 75){//dificuldade em lembrar os operadores
 Serial.println("Reprovado");
 }else if(media >= 6 && frequencia < 75) {//dificuldade em lembrar os operadores
 Serial.println("Reprovado");
 }else if(media < 6 && frequencia < 75){//dificuldade em lembrar os operadores
 Serial.println("Reprovado");
 }
  
 