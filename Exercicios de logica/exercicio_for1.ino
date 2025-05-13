// C++ code
//

int tabuadaEscolhida;
int resultado;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("Digite o numero que quer da tabuada");
 while (! Serial.available()){}
 tabuadaEscolhida = Serial.parseInt();
  
 for(int contador =1; contador <= 10; contador ++){
 resultado = tabuadaEscolhida * contador;
 Serial.println(String(tabuadaEscolhida) + "X" + String(contador) + "=" + String(resultado));    
 }
} 