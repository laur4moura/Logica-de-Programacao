// C++ code
// 
String frutaDigitada = "";
String frutas[6]{};
float precosFrutas[6];

void setup()
{
  Serial.begin(9600);
  
  
  Serial.println("*** SACOLAO DA NEIRE ***");
  Serial.println();

 
  
  Serial.println("Oh NEIRE, bora cadastrar as frutas!");
  
  Serial.println();
  
  for(int i = 0; i <= 5; i++){
  //perguntar a fruta para o usuário
  Serial.println("Informe a " + String(i+1) + "a Fruta:");
  while(! Serial.available());
  String frutaDigitada = Serial.readString();
  
  //pega o preco da fruta
  Serial.println("Qual o preco de  " + frutaDigitada + "?");
  while(! Serial.available());
  float precoDigitado = Serial.parseFloat();
  
  
  frutas[i] = frutaDigitada;
  precosFrutas[i] = precoDigitado;
  
  }  //fim do for
   
  Serial.println("Exibindo os valores cadastrados: ");
  Serial.println();
  
  Serial.println("---LISTA DE FRUTAS---");
  
  Serial.println();
  Serial.println();
  
  
  
  for(int i = 0; i <= 5; i++){
  Serial.println(String(i + 1) + " fruta: " + frutas[i]);
  Serial.println("Preco da Fruta: " + String(precosFrutas[i]));  
   
    
    
  }
  
  
  
  

}
void loop()
{
  
}