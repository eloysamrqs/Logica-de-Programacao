// C++ code
//VARIÁVEIS
float resultado;

int escolhaDaOperacao;
int contador =0;
  
float somar(float numero1, float numero2, int numero3 = 2){
	return (numero1 + numero2 + numero3 );
  	//numero3 é um parametro do somar 
}
float subtrair(float numero1, float numero2){
	return (numero1 - numero2 );
}
float multiplicar(float numero1, float numero2){
	return (numero1 * numero2 );
}
float dividir(float numero1, float numero2){
	return (numero1 / numero2 );
}


void setup()
{
 Serial.begin(9600);
  
    float numero1 = 0;
    float numero2 = 0;
   

   do{
   Serial.println("Bem-vindo(a) a calculadora Inteligente ");
   Serial.println("Escolha uma das opcoes/operacoes:");
   Serial.println("1- Somar");
   Serial.println("2- Subtrair");
   Serial.println("3- Multiplicar");
   Serial.println("4- Dividir");

   while( ! Serial.available()){} 

   escolhaDaOperacao = Serial.parseInt();

   Serial.println("Digite o primeiro numero:");
    while (! Serial.available()){}
   numero1 = Serial.parseFloat();

   Serial.println("Digite o segundo numero:");
   while (! Serial.available());
   numero2 = Serial.parseFloat(); 
   
     switch(escolhaDaOperacao ){
       case 1:
       resultado= somar(numero1, numero2);
       Serial.println("O resultado foi: " + String(resultado));

       break;

       case 2:
       resultado = subtrair (numero1, numero2);
       Serial.println("O resultado foi: " + String(resultado));

       break;

       case 3:
       resultado = multiplicar(numero1, numero2);
       Serial.println("O resultado foi: " + String(resultado));

       break;

       case 4:
       resultado = dividir (numero1, numero2);
       Serial.println("O resultado foi: " + String(resultado));

       break;

       default:
       Serial.println("Opcao invalida");

  }
  Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
  while(!Serial.available());
  
  if(Serial.readString() == "S")
  {
  contador++;
  }
  else
  {
  contador = 0;
  Serial.println("Ate breve, obrigado por usar nossa calculadora inteligente!!! :)");
  Serial.println("Caso queira voltar, reinicie o sistema.");
    } 
   } 
  while(contador != 0);  
}

void loop(){}
  