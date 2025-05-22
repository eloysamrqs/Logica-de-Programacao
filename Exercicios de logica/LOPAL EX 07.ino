// C++ code
//
void setup()
{
  Serial.begin(9600);
}

String nome = "";
String cargo = "";
float salario = 0;
float acrescido = 0;
float total = 0;

void loop()
{
  Serial.println("digite o seu nome");
  while (!Serial.available()) {}
  nome = Serial.readString();
  Serial.println("digite o seu cargo");
  while (!Serial.available()) {}
  cargo = Serial.readString();
  Serial.println("digite o seu salario");
  while (!Serial.available()) {}
  salario = Serial.parseFloat();
  acrescido = salario * 0.10;  
  total = salario + acrescido;
  Serial.println("seu nome eh: " + nome);
  Serial.println("seu cargo eh: " + cargo);
  Serial.print("seu novo salario eh: " + String(total));
  delay(10000);
}