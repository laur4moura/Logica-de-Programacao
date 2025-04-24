//Faça um programa que receba a idade de uma pessoa em anos e 
//imprima essa idade em: Meses, Dias, Horas, Minutos. 
//Variáveis
int idade = 0;//inicia a idade
long idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
   //cabeçalho
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|         LOPAL-EX_01          |");
  Serial.println("|                              |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  //entrada
  Serial.println("Digite a sua idade");// pergunte a idade do usuário
  while( ! Serial.available() ){}// aguarda o usuário digitar (para o loop)
  idade = Serial.parseInt();
  
  //processamento
  idadeMeses = idade*12;
  idadeDias = idade*365;
  idadeHoras = idade*8766;
  idadeMinutos = idade*525960;
  
  //saída
  Serial.println("sua idade em meses:" + String(idadeMeses) );
  Serial.println("sua idade em dias:" + String(idadeDias) );
  Serial.println("sua idade em horas:" + String(idadeHoras) );
  Serial.println("sua idade em minutos:" + String(idadeMinutos) );

}