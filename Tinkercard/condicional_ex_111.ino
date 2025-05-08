/*Faça um programa que receba um número inteiro do usuário e informe se este
número é positivo ou negativo.
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
  Serial.println("Digite o numero escolhido.");
  while ( ! Serial.available());
  numero = Serial.parseInt();
  
  Serial.println("numero: " + String(numero));
  
  if (numero >= 0){
  	Serial.println("Numero eh positivo");
  }else{
    Serial.println("Numero eh negativo");
  }
  
}