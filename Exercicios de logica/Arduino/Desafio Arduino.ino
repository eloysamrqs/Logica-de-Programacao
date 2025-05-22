// C++ code
//
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
  Serial.println("     PROGRAMA JOGO DE DADOS     ");
  Serial.println("--------------------------------");
  Serial.println();
  delay(1000);
}
void pontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++){
    Serial.print(".");
    delay(tempo);
  }
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
    Serial.println("Digite o seu palpite");
    while(! Serial.available());
    int palpite = Serial.parseInt();

    int numeroSorteado = random(1, 7);
    Serial.println("Jogando o dado");
    pontinhos();
