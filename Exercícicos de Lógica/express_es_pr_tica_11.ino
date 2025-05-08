// C++ code
//Variáveis
int idade = 21;
//bool maiorDeIdade = idade >=18;
//valor false = 0
//valor true = 1

String ingresso = "sim";

bool entraNaFesta = idade >= 18 && ingresso == "sim";//true 1


void setup()
  
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("Idade: " + String(idade));
 Serial.println(" Entra na ?" + String(entraNaFesta) );
 //Serial.println("Maioridade: " + String(maiorDeIdade));
  
 delay(3000);
}