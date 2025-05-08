/*

Faça um programa que pergunte ao usuário sua idade e se ele tem ingresso.

Após validação, exiba a mensagem se ele pode entrar na festa ou não.

OBS: Condição para entrar na festa é ter o ingresso e ser maior de idade

---
Logo em seguida altere o programa para acender um led caso o usuário possa entrar na festa,
caso contrário acenda um led vermelho

*/

// C++ code
//Variáveis

int ledVermelho =5;
int ledVerde =6;

int idade = 0;
//bool maiorDeIdade = idade >=18;
//valor false = 0
//valor true = 1

String ingresso = "sim";

bool entraNaFesta = idade >= 18 && ingresso == "sim";//true 1

//Area de configuração do arduino 
//Roda apenas uma vez antes do loop
void setup()
{
  pinMode(ledVermelho, OUTPUT);//LED VERMELHO-saida
  pinMode(ledVerde, OUTPUT);//LED VERDE-saida
  Serial.begin(9600);
}

void loop()
{
  
  //entrada
  //Perguntar idade
  Serial.println("Digite a sua idade");// pergunte a idade do usuário
  while( ! Serial.available() ){}// aguarda o usuário digitar (para o loop)
  idade = Serial.parseInt();
  
  //Perguntar se tem o Ingresso 
  Serial.println("Ganhou ingresso? sim/nao");// pergunte se o usuário tem ingresso
  while( ! Serial.available() ){}// aguarda o usuário digitar (para o loop)
  ingresso = Serial.readString();
  
  
  //Processameto
  Serial.println("Idade: " + String(idade));
  //Serial.println("Maioridade: " + String(maiorDeIdade));
  Serial.println("Ingresso: " + String(ingresso));
 
  if(idade >= 18 && ingresso == "sim" ){
    digitalWrite(ledVerde, HIGH);
     delay(5000); 
    digitalWrite(ledVermelho, LOW);
     delay(500);
    
    //bloquinho do sim (true)
    Serial.print(" Parabens... ");
    Serial.println(" Espero que voce curta a festa");
    Serial.println(" serah nesta sexta!!");
        
  } else {
    digitalWrite(ledVerde, LOW);
    delay(5000); 
    digitalWrite(ledVermelho, HIGH);
     delay(10000);
    //bloquinho do não (false)
    Serial.println(" Nao pode entrar  na festa");
    Serial.println("Que pena, nao foi desta vez.");
     delay(500);
  }
 delay(500);//aguarda meio segundo 
  digitalWrite(ledVerde, LOW);
 digitalWrite(ledVermelho, LOW);
  
 
 delay(5000);
}