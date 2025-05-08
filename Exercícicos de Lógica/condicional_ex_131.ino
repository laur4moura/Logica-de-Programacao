/*Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.
*/

// C++ code
//Variaveis
int numero = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite seu numero");
  while (! Serial.available());
  numero = Serial.parseInt();
  
  if(numero %2 == 0){
  Serial.println("O numero eh par");
  }
  delay(2000);
}