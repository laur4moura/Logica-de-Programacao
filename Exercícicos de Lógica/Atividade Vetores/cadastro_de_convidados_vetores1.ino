// C++ code
//Criar cada vetor tamanho 4, fazendo paret do cadastro. de zero a 3   

  String convidados[4];
  int idadeConvidados[4]; // Camel case 
  String emailConvidados [4];

  //FUNCOES

  void desenhaCabecalho()
  {

    Serial.println("|*--------------------*|");
    Serial.println("|                      |");
    Serial.println("|   CHURRASCO MOURA    |");
    Serial.println("|                      |");
    Serial.println("|*--------------------*|");
    Serial.println();
    Serial.println();


  }


  void setup()
  {
   Serial.begin(9600);

  }

  void loop()
  {
    desenhaCabecalho();//chama funcao pra desnhar o cabçalho 

    for(int i = 0; i <= 3; i++){
    //perguntar para o usuário o nome
    Serial.println("Informe o seu nome para cadastro " + String(i+1) + convidados[i]);
    while(! Serial.available());  
    convidados[i] = Serial.readString();

    //perguntar a idade para o usuário 
    Serial.println("Informe a sua idade " + convidados[i]);
    while(! Serial.available());  
    idadeConvidados[i] = Serial.parseInt();

    //perguntar o email para o usuário 
    Serial.println("Informe o seu email " + convidados[i]);
    while(! Serial.available());  
    emailConvidados[i] = Serial.readString();


    Serial.println();
    Serial.println();

    }//fim do for



    //ebibir a lista de COnvidados
    //obs: só vai na festa quem for maior de idade >= 18

    Serial.println("Exibindo convidados eleitos para a festa: ");
    Serial.println();
    Serial.println();


    for(int i = 0 ; i <=3 ; i++){

     if(idadeConvidados[i]>= 18) 
     {//apenas maiores de 18 
    Serial.println(String(i + 1) + " nome eh : " + convidados[i]);
    Serial.println(String(i + 1) + " idade eh : " + idadeConvidados[i]);
    Serial.println(String(i + 1) + " email eh : " + emailConvidados[i]);
    Serial.println("Permissao para a festa: " + String(idadeConvidados[i] >= 18 ? "OK" : "Menor de Idade"));

    Serial.println();
    Serial.println(); 
     } 
    }

    //criar um for 
    //exibir com o print cada um dos arrays
    // pular linha 
    delay(2000);//pausa de 2 
  }