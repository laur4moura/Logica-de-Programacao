/*Faça um programa que receba um número do usuário e informe se este
número é par ou ímpar.
*/

// C++ code
//Variáveis
int numero = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o numero");
  while ( ! Serial.available());
  numero = Serial.parseInt();
  
  if(numero %2 ==0 ){
   Serial.println("numero eh par");
  }else{
   Serial.println("numero eh impar");
  }
  
  Serial.println("----------------------------");
 delay(2000);
}