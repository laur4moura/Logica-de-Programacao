  // C++ code
  //VARIÁVEIS



  //srtea um numero randômico/ale[atorio de 1 até 7 - 1, ou seja, 6 

  void desenhaCabecalho()
  {
    Serial.println("*");
    Serial.println("    PROGRAMA   ");
    Serial.println("  JOGO DE DADOS ");
    Serial.println("                 *");
    Serial.println();
    delay(500);
  }

  void desenhaPontinho(int qtdPontos = 5, int tempo = 700)
  {
    for(int i = 1; i <= qtdPontos; i++)
    {
      Serial.print(".");
      delay(tempo);
    }

    }

  void setup()

  {
    Serial.begin(9600);
    randomSeed(analogRead(0));//inicia e normaliza a porta randômica para evitar o mesmo valor

  }

  void loop()

  {
    int palpite;
  int numeroSorteado = random (1,7);

    desenhaCabecalho();

    //ENTRDA

    Serial.println("Quantas vezes voce quer jogar?");
    while(! Serial.available());  
    int qtdRodadas = Serial.parseInt();


    //os Vetores do tamnho da quantidade de rodadas
    int vetPalpites[qtdRodadas];
    int vetResultados[qtdRodadas]; 

    //PROCESSAMENTO
    for(int r = 0; r < qtdRodadas; r++)
    {
       //solicitar o palpite do usuario - 3 comandos

    Serial.println("Digite o seu palpite entre 1 a 6");
    while(! Serial.available());  
    palpite = Serial.parseInt();
    Serial.println();
    Serial.println();


    vetPalpites[r] = palpite;
    vetResultados[r] =numeroSorteado;

    Serial.println("Jogando o dado");

    for(int i = 0; i <5; i ++){
    Serial.print(".");

    delay(500);
    }

    delay(2000);
    Serial.println();
    Serial.println("O seu Palpite " + String(palpite));
    Serial.println("O Numero Sorteado eh  " + String(numeroSorteado));

    if(palpite == numeroSorteado)
    {
    Serial.println("Parabens, voce acertou!! :)");
    }else{
    Serial.println("Que pena, tente outra vez");
    }

   


  }//fim do for das rodada 

   // ao finalizar, mostrar as estatisticas das jogadas - um relatório 
     Serial.println("ESTATISTICAS DO JOGO");
     Serial.println();
     for(int i =0; i < qtdRodadas; i++)
     {
      Serial.println("Rodada" + String(i+1) + ":");
      Serial.println("   Palpite: " + String(vetPalpites[i]));
      Serial.println("   Dado: " + String(vetResultados[i]));
      Serial.println("   Resultado: " + String(vetResultados[i] == vetPalpites[i]? "Acertou!" : "Errou!"));
      Serial.println("--------------------------------" );
      Serial.println();
     }

     Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!!");
     desenhaPontinho(3,500);
     Serial.println();
     Serial.println();

     delay(3000);



  }