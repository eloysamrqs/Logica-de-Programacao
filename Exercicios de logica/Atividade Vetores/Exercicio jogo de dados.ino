/*Na entrada da fortaleza, há um painel com uma entrada serial. Um guardião digital (o
Arduino) propõe um desafio: “Adivinhe corretamente o número sagrado do dado,
que varia de 1 a 6.”
Se você errar, o sistema piscará um LED vermelho, indicando que você foi testado e falhou.
Se acertar, um LED verde piscará como sinal de aprovação divina, e uma das joias azuis do
templo (representadas por LEDs azuis) se acenderá, marcando o seu progresso.
Ao conquistar 3 acertos, todas as joias estarão acesas — e a Porta da Sabedoria
(controlada por um servo motor) se abrirá magicamente, permitindo sua
passagem ao templo.
*/ 

#include <Servo.h>
Servo meuServo;
Servo motor;

int Vermelho = 7;
int Verde = 10;
int Azul = 4;
int Azul2 = 3;
int Azul3 = 2;
int ptsFeitos;

void cabecalho()
{
  Serial.println("--------------------------------");
  Serial.println("                                ");
  Serial.println("     PROGRAMA JOGO DE DADOS     ");
  Serial.println("                                ");
  Serial.println("--------------------------------");
  Serial.println();
  delay(1000);
}

void setup()
{
  pinMode(Verde, OUTPUT);
  pinMode(Vermelho, OUTPUT);
  pinMode(Azul, OUTPUT);
  pinMode(Azul2, OUTPUT);
  pinMode(Azul3, OUTPUT);
  motor.attach(2);
  motor.write(0);
  Serial.begin(9600);
}

void loop()
{
  randomSeed(analogRead(0));
  cabecalho();
  do{
    Serial.println("Digite seu palpite");
    while(! Serial.available());
    int palpite = Serial.parseInt();

    int numeroSorteado = random(1, 7);
    Serial.println("Jogando o dado...");
   

    Serial.println();
    Serial.println("Seu palpite: " + String(palpite));
    Serial.println("Numero do dado: " + String(numeroSorteado));
    if(palpite == numeroSorteado){
      digitalWrite(Verde, HIGH);
      delay(2000);
      digitalWrite(Verde, LOW);
      ptsFeitos += 1;
    }else{
      digitalWrite(Vermelho, HIGH);
      delay(2000);
      digitalWrite(Vermelho, LOW);
      Serial.println("Que pena, tente novamente");
      ptsFeitos = 0;
    }
  if(ptsFeitos == 1){
  digitalWrite(Azul, HIGH);
  }else if(ptsFeitos == 2){
  digitalWrite(Azul2, HIGH);
  }else if(ptsFeitos == 3){
  digitalWrite(Azul3, HIGH);
  }else{
  digitalWrite(Azul, LOW);
  digitalWrite(Azul2, LOW);
  digitalWrite(Azul3, LOW);
  }
  Serial.println();    
}while(ptsFeitos <= 2);
  Serial.println("Parabens, voce ganhou");
  motor.write(0);
  delay(500);
  
  motor.write(90);
  delay(500);
  
  motor.write(180);
}