/*
Criar um sistema de senha onde o usuario digita a senha. Se ele acertar piscar o led verde, se errar
avisar no controle se errou, piscar o led vermelho e aciona e para o buzzer.

A vaiavel senhaCorreta, do tipo inteiro, deve estar com a senha preeviamente 

*/

int buzzer = 4;
int ledVermelho = 13;
int ledVerde = 12;
int senhaCorreta = 123;
int senhaDigitada;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop()
{
  Serial.println("Digite a senha");
  while(!Serial.available());
  senhaDigitada = Serial.parseInt();
  
  Serial.println("Senha que digitou:" + String(senhaDigitada));
  
  if(senhaDigitada == senhaCorreta)
  { 
  Serial.println("Parabens, digitou a senha correta");
  digitalWrite(ledVerde, HIGH);
  delay(1200);
  digitalWrite(ledVerde, LOW);
  delay(1000);
  }else 
  {
  Serial.println("Senha incorreta, tente novamente");
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(1200);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(buzzer, LOW);
  delay(1000);
  }
}