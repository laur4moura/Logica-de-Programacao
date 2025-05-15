// C++ code
//VARIAVEIS
int numeros; 
int resultado; 


void setup()
{
  Serial.begin(9600);
  
  // exibir numeros impares de 1 a 99  
  for(int contador = 1; contador <= 100; contador += 2){
  resultado = (numeros) + (contador);
  Serial.println("Contador eh " + String(resultado));
  }
}

void loop()
{
  
}