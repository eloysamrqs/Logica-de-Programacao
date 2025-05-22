#include <Servo.h>
Servo meuServo;//cria um objeto/variavel do motor servo
Servo motor;

void setup()
{
  //Conecta o servo ao pino digital 9
  //eaquivalente ao pinMode(9, OUTPUT)
  motor.attach(2);//configura o motor na porta 2
  motor.write(0);//configura a posicao inicial em 0 graus
}

void loop()
{
  motor.write(0); //move para 0 graus
  delay(1500);
  motor.write(90); //move para 0 graus
  delay(1500);
  motor.write(180); //move para 0 graus
  delay(1500);
}