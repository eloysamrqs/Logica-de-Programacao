/*
Criar um protótipo com 3 leds: verde, vermelho e amarelo.
Crie um menu com Do While que solicite ao usuário qual led ele quer acender ou apagar,
com suas devidas funcionalidades, da seguinte forma:

1) Ligar Led Verde
2) Desligar Led Verde
3) Ligar Led Amarelo
4) Desligar Led Amarelo
5) Ligar Led Vermelho
6) Desligar Led Vermelho
7) Ligar Todos os Leds
8) Desligar Todos os Leds
0) Sair

Você não pode esquecer dos resistores e de configurar cadas porta de lede com a função
pinMode(pino, modo) lá dentro da função setup()

Utilizar Do While, Switch e Serial para o menu e comunicação com o usuário
*/

int ledVerde = 13;
int ledAmarelo = 12;
int ledVermelho = 11;
int opcaoUsuario;

void setup()
{
  Serial.begin(9600);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop()
{  
 do {
  Serial.println("|Escolha uma opcao| ");
  Serial.println("1- Ligar Led Verde");
  Serial.println("2- Desligar Led Verde");
  Serial.println("3- Ligar Led Amarelo");
  Serial.println("4- Desligar Led Amarelo");
  Serial.println("5- Ligar Led Vermelho");
  Serial.println("6- Desligar Led Vermelho");
  Serial.println("7- Ligar todos os Leds");
  Serial.println("8- Desligar todos os Leds");
  Serial.println("0- Sair");
  while (!Serial.available());
  opcaoUsuario = Serial.parseInt();
 
   switch (opcaoUsuario){
     case 1:
     digitalWrite(ledVerde, HIGH);
     Serial.println("Led verde ligado");
     Serial.println();
     delay(1500);
     break;
     
     case 2:
     digitalWrite(ledVerde, LOW);
     Serial.println("Led verde desligado");
     Serial.println();
     delay(1500);
     break;
     
     case 3:
     digitalWrite(ledAmarelo, HIGH);
     Serial.println("Led amarelo ligado");
     Serial.println();
     delay(1500);
     break;
     
     case 4:
     digitalWrite(ledAmarelo, LOW);
     Serial.println("Led amarelo desligado");
     Serial.println();
     delay(1500);
     break;
     
     case 5:
     digitalWrite(ledVermelho, HIGH);
     Serial.println("Led vermelho ligado");
     Serial.println();
     delay(1500);
     break;
     
     case 6:
     digitalWrite(ledVermelho, LOW);
     Serial.println("Led vermelho desligado");
     Serial.println();
     delay(1500);
     break;
     
     case 7:
     digitalWrite(ledVerde, HIGH);
     digitalWrite(ledAmarelo, HIGH);
     digitalWrite(ledVermelho, HIGH);
     Serial.println("Todos os leds ligados");
     Serial.println();
     delay(1500);
     break;
     
     case 8:
     digitalWrite(ledVerde, LOW);
     digitalWrite(ledAmarelo, LOW);
     digitalWrite(ledVermelho, LOW);
     Serial.println("Todos os leds desligados");
     Serial.println();
     delay(1500);
     break;
     
     default:
     Serial.println("Saindo...");
     Serial.println();
   }
  } while (opcaoUsuario != 0);
  
    delay(1000);
}
