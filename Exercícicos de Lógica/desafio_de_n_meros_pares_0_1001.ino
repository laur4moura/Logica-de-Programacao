// C++ code
//VARIÁVEIS 
int resultado;
int numeros;

void setup()
{
 Serial.begin(9600);
  
   //exibir números pares de 0 a 100 
  for(int contador = 0; contador <= 100; contador += 2){
  resultado = (numeros) + (contador); 
  Serial.println("Contador eh " + String(resultado));
    
  }
}

void loop()
{
  
}