/*Faça um programa que receba 4 notas de um aluno, calcule e imprima a média
aritmética das notas e a mensagem de APROVADO para média superior ou igual a
7,0 RECUPERAÇÃO para notas entre 5.0 e 7,0 ou a mensagem de REPROVADO
para média inferior a 5,0.
*/


// C++ code
//
float n1, n2, n3, n4;//cria as quatro variaveis de uma só vez, e inicia com 0.
float media = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite a primeira nota.");
  while(! Serial.available());
  n1 = Serial.parseFloat();
  
  Serial.println("Digite a segunda nota.");
  while(! Serial.available());
  n2 = Serial.parseFloat();
  
  Serial.println("Digite a terceira nota.");
  while(! Serial.available());
  n3 = Serial.parseFloat();
  
  Serial.println("Digite a quarta nota.");
  while(! Serial.available());
  n4 = Serial.parseFloat();
  
  media = (float(n1) + float(n2) + float(n3) + float(n4)) / 4;
  
  Serial.println("A media eh: " + String(media));
  
  
  if(media >= 7){
  Serial.println("Aprovado");
  } else if(7 > media >= 5 ){
  Serial.println("Recuperação");
  } else {
  Serial.println("Reprovado");
  }
  
  delay(20000);
  Serial.println();
  Serial.println();
  
}