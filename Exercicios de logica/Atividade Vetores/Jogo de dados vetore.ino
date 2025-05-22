//variavel global

void cabecalho()
{
  Serial.println("--------------------------------");
  Serial.println("     PROGRAMA JOGO DE DADOS     ");
  Serial.println("--------------------------------");
  Serial.println();
  delay(1000);
}

void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= 5; i ++)
  {
    Serial.print(".");
    delay(750);
  }
}
void setup()
{
  {
    Serial.begin(9600);
    randomSeed(analogRead(0));
  }
}
void loop()
{
  {
    cabecalho();
    
    //quantas vezzes ele quer jogar
    Serial.println("Quantas vezes quer jogar?");
    while(!Serial.available());
    int qtdRodadas = Serial.parseInt();
    
    //criar os vetores de estatisticas para o relatorio final
    int vetPalpites[qtdRodadas];
    int vetResultados[qtdRodadas];
    
    //processamento do jogo
    for(int r = 0; r < qtdRodadas; r++)
    {//aqui dentro, o jogo todo!!!
    //solicita o palpite ao usuario
    Serial.println("Digite um palpite entre 1 e 6");
    while(!Serial.available());
    int palpite = Serial.parseInt();

    int numeroSorteado = random(1, 7);
      
    //guardar os dados para estatisticas
    vetPalpites[r] = palpite;
    vetResultados[r] = numeroSorteado;

    Serial.print("Jogando o dado");
    
    desenhaPontinhos();

    Serial.println();
    Serial.println();
    Serial.println("Seu palpite: " + String(palpite));
    Serial.println("Numero sorteado: " + String(numeroSorteado));

    if(palpite == numeroSorteado)
    {
      Serial.println("Parabens, voce acertou!");
    } else {
      Serial.println("Que pena, tente outra vez!");
      
      Serial.println();
    }

    Serial.println("Reinicie o programa");
    Serial.println();
    delay(700);
    }//fim do for rodada
    
    //mostrar as estatisticas da jogada
    Serial.println("ESTATISTICAS DO JOGO");
    Serial.println();
    for(int i = 0; i < qtdRodadas; i++)
    {
      Serial.println("Rodada " + String(i + 1) + ":");
      Serial.println("Seu palpite: " + String(vetPalpites[i]));
      Serial.println("Dado: " + String(vetResultados[i]));
      Serial.println("Resultado: " + String(vetResultados[i] == vetPalpites[i] ? "Acertou" : "Errou"));
      Serial.println("--------------------------------");
      Serial.println();
    }//fim do for que exibe o relatorio final (estatisticas)
    
    Serial.println("FIM DE JOGO, REINICIANDO SISTEMA!!");
    desenhaPontinhos(3, 500);
    delay(3000);
    
  }
  }
