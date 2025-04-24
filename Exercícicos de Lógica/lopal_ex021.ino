//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

//Variáveis 
int anoNascimento = 0;
int anoAtual = 0;
int  idadeAtual = 0;
int idadeSemana = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //cabeçalho
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|         LOPAL-EX_02          |");
  Serial.println("|                              |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
    
  
 //Entrada 
  Serial.println("Digite seu ano de nascimento");//pergunta o ano de nascimento do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  anoNascimento = Serial.parseInt();//resposta do usuário
  
  Serial.println("Digite o ano atual");//pergunta o ano atual do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  anoAtual = Serial.parseInt();//resposta do usuário
  
  //processamento
  idadeAtual = anoAtual - anoNascimento;
  idadeSemana = idadeAtual * 365 / 7;
  
  //saída
  Serial.println("Sua idade em anos: " + String (idadeAtual) );
  Serial.println("Sua idade em semanas: " + String (idadeSemana) );
  delay(5000);//aguarda 5 segundos antes de rodar o loop novamente
}

