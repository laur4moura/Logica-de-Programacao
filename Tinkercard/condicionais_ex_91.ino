/*Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
inferior a 500 reais. Escreva um programa que receba o salário de um
funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
funcionário não tenha direito a aumento.
*/

// C++ code

//Variáveis

float salario = 0;

//mensagem caso o funcionário não tenha direito a aumento
// 30% aos funcionários cujo salário é inferior a 500 reais

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada 
  Serial.println("Qual o seu salario?");
  while (! Serial.available ()) {}
  salario = Serial.parseFloat ();
  
 //processamento 
  
  if ( salario < 500 ) {
  	salario = salario * 1.30;              
  	Serial.println( "Salario serah reajustado para: R$ " + String(salario));
  }else{
    Serial.println (" O funcionario nao tem direito ao aumento");
}
  Serial.println();//pular linha
  Serial.println();//pular linha
  delay(1000);
}