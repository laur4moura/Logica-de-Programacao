// C++ code
//VARIÁVEIS

int ledVerde = 12;
int ledVermelho = 8;
int ledAzul1= 7;
int ledAzul2 = 4;
int ledAzul3 = 2;
int acertos; 
#include <Servo.h>
Servo motor;

//srtea um numero randômico/ale[atorio de 1 até 7 - 1, ou seja, 6 

void desenhaCabecalho()
{
  Serial.println("*");
  Serial.println("    PROGRAMA   ");
  Serial.println("  JOGO DE DADOS ");
  Serial.println("                 *");
  Serial.println();
  delay(500);
}


void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));//inicia e normaliza a porta randômica para evitar o mesmo valor
  motor.attach(13);
  motor.write(0);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);  
  pinMode(ledAzul3, OUTPUT); 
}

void loop()
{
  int palpite;
  int numeroSorteado = random (1,7);

  desenhaCabecalho();
  //solicitar o palpite do usuario - 3 comandos

  Serial.println("Digite o seu palpite entre 1 a 6");
  while(! Serial.available());  
  palpite = Serial.parseInt();
  Serial.println();
  Serial.println();

  for(int i = 0; i <5; i ++){
    Serial.print(".");

    delay(500);
  }

  delay(2000);
  Serial.println();
  Serial.println("O seu Palpite " + String(palpite));
  Serial.println("O Numero Sorteado eh  " + String(numeroSorteado));

  if(palpite == numeroSorteado)
  {
    Serial.println("Parabens, voce acertou!! :)");
    digitalWrite(ledVerde, HIGH);  
    digitalWrite(ledAzul1, HIGH);
    delay(500);
    digitalWrite(ledVerde, LOW);
  } else if (acertos == 0){
    digitalWrite(ledAzul1, HIGH);
  }
  else if(acertos == 1) {
    digitalWrite(ledAzul2, HIGH);

  }else if (acertos == 2){
    digitalWrite(ledAzul2, HIGH);
    acertos ++;



  } else if (acertos >= 3) {
    Serial.println("Você conquistou a sabedoria! A porta se abre...");
    motor.write(90);

  }
  else{
    digitalWrite(ledVermelho, HIGH);
    delay(1000);
    digitalWrite(ledVermelho, LOW);
    Serial.println("Que pena, tente outra vez");
  }





  Serial.println("Reinicie o programa");
  Serial.println();
  Serial.println();




}