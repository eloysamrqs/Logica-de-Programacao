// C++ code
//
String frutas[6];
float precosFrutas[6];
void setup()
{
 int i; 
  
 Serial.begin(9600);
  
 Serial.println("*** SACOLAO DO ZEH ***");
 Serial.println();
  
  
 Serial.print("Oh ZEH, bora cadastrae as frutas!");
  
 Serial.println();
  
 for( i = 0; i <= 5; i++){
 
 Serial.println("Informe a " + String(i + 1) + " Fruta: ");
 while(!Serial.available());
 String fruta = Serial.readString();
 frutas[i] = fruta;
   
 Serial.println("Qual o preco da fruta " + fruta + "?");
 while(!Serial.available());
 float preco = Serial.parseFloat();
 precosFrutas[i] = preco;
 }  
  
  for( i = 0; i <= 5; i++){
  Serial.println(String(i) +"a Fruta: " + frutas[i] );
  Serial.println("Preco: " + String(precosFrutas[i]) ); 
  }
}

void loop()
{
 
}