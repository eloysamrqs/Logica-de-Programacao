// C++ code

 
  String convidados[4];
  int idadeConvidados[4];
  String emailConvidados[4];

void desenhaCabecalho()
{
  //fazer um cabecario bonitinho para o programa 
  
  Serial.println("------------------------------------------------------------");
  Serial.println("Ola, seja bem-vindo(a)");
  Serial.println("Para que possa entrar na festa, me diga alguns de seus dados");
  Serial.println("Nome, idade e email");
  Serial.println("------------------------------------------------------------");
}

void setup()
{
  Serial.begin(9600); //inicia a comunicação serial
}

void loop()
{
  desenhaCabecalho();
  
  //cadastrar os dados
  for(int i = 0; i < 4; i++)
  {
    //solicitar o nome do usuario
    Serial.println("Informe " +String(i + 1)+ "o nome para cadastro");
    while(!Serial.available());
    convidados[i] = Serial.readString();
    
    //solicitar a idade
    Serial.println("Informe a idade de " + convidados[i]);
    while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt();
    
    //solicitar email
    Serial.println("Informe o email de " + convidados[i]);
    while(!Serial.available());
    emailConvidados[i] = Serial.readString();
    
    Serial.println();
    
  }//fim do for
  
  //Exibir a lista de convidados
  //obs: so vai na festa quem for maior de idade >=18
  
  //criar um for
  //exibir com o print cada um dos array
  //pular uma linha
  
  Serial.println("-----------------------------");
  Serial.println("Convidados eleitos para festa");
  Serial.println("-----------------------------");
  Serial.println();
  
  
  for(int i = 0; i < 4; i++)
  { 
  
  Serial.println("Nome: " + convidados[i]);
  Serial.println("Idade: " + String(idadeConvidados[i]));
  Serial.println("Email: " + emailConvidados[i]);
  Serial.println("Permissao para festa: " + String(idadeConvidados[i] >= 18 ? "OK" : "Menor de idade"));
    
  Serial.println();
    
    }
 
  
  
  delay(3000);
  
}