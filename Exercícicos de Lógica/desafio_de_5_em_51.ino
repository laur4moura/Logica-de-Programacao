// C++ code
//Variáveis
int resultado; 
int numeros; 


void setup()
{
 Serial.begin(9600);
  
  //exibir número de 0 a 100 de 5 em 5 
  for(int contador = 0; contador <= 100; contador += 5){
  resultado = (numeros) + (contador); 
  Serial.println("Contador eh " + String(resultado));
    
  }
}

void loop()
{
 
  
}