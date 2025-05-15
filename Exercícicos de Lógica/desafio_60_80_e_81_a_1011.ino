// C++ code
//Variaveis


void setup()
{
  Serial.begin(9600);
  
 
  
  // exibir os números pares de 60 a 80 e impares de 81 a 101
  

  
   int contadorPares = 60;
  
  while (contadorPares <= 80){
  Serial.println("Contador eh " + String(contadorPares));
  contadorPares += 2;
  }
  
  Serial.println();
  Serial.println(); 
  Serial.println();
  
  
   int contadorImpares = 81;
  
  while (contadorImpares <= 101){
  Serial.println("Contador eh " + String(contadorImpares));
  contadorImpares += 2;
  }
  

}
 
 

void loop()
{
 
}