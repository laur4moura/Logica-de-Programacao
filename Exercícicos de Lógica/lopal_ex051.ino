
//Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.

//Variáveis
float numeroCm = 0;
float numeroPolegada = 0;

void setup()
{
  Serial.begin(9600);//Entrada 
}

void loop()
{
   //cabeçalho
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|         LOPAL-EX_05          |");
  Serial.println("|                              |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  //Entrada 
  Serial.println("Digite uma medida em centimetros");//pergunta uma medida em centímetros da escolha do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  numeroCm = Serial.parseFloat();//resposta do usuário
  
 //processamento
 numeroPolegada = numeroCm * 2.54;
  
 //saída
 Serial.println("A conversao de centimetro para polegada eh: " + String (numeroPolegada) );
 delay(5000);//aguarda 5 segundos antes de rodar o loop noe
}vament

