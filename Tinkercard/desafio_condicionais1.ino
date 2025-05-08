// C++ code
int numero = 0;
int led1 = 2;
int led2 = 4;

void setup()
{
  Serial.begin(9600);
}


void loop()
{
  Serial.println("Digite o numero (1: acende o led vermelho;");
  Serial.println("2: acende o led azul; 0: desliga ambos os leds)");
  while(! Serial.available() ){}
  numero = Serial.parseInt ();
  
  if (numero == 1)
  {
  	digitalWrite(led1, HIGH);
  	Serial.println("Led 1 Aceso");
  
  }
  
  if (numero == 2){
    digitalWrite(led2, HIGH);
    Serial.println("Led 2 Aceso");
  } 
  
  if (numero == 0){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    Serial.println("Leds Apagados");
  }
  
  if (numero != 0 && numero != 1 && numero != 2) {
  	Serial.println("erro numero nao esta listado no comando");
  }

}