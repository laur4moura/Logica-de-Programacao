#include <Servo.h>
Servo motor;

 int ledVerde = 12;
 int ledVermelho = 8;
 int ledAzul1 = 7;
 int ledAzul2 = 4;
 int ledAzul3 = 2;
 int acertos = 0;


void desenhaCabecalho() {
  Serial.println("*");
  Serial.println("PROGRAMA: JOGO DE DADOS");
  Serial.println("                          *");
  delay(500);
}

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0)); // Evita sempre o mesmo número sorteado

  motor.attach(13);
  motor.write(0); // Move o motor

  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
  pinMode(ledAzul3, OUTPUT);
}

void loop() {
  int palpite;
  int numeroSorteado = random(1, 7); // Sorteia um número entre 1 e 6

  desenhaCabecalho();
  Serial.println("Digite o seu palpite (entre 1 e 6):");

  while (!Serial.available());
  palpite = Serial.parseInt();

  Serial.println("Processando...");
  delay(2000);

  Serial.println("O seu palpite: " + String(palpite));
  Serial.println("O numero sorteado: " + String(numeroSorteado));

  // Lógica de jogo e acionamento dos LEDs
  if (palpite == numeroSorteado) {
    Serial.println("Parabens, voce acertou!");
    digitalWrite(ledVerde, HIGH);
    delay(500);
    digitalWrite(ledVerde, LOW);
    acertos++; // Incrementa a contagem de acertos
  } else {
    Serial.println("Que pena, tente outra vez.");
    digitalWrite(ledVermelho, HIGH);
    delay(1000);
    digitalWrite(ledVermelho, LOW);
  }

  // Controla LEDs com base nos acertos
  if (acertos == 1) {
    digitalWrite(ledAzul1, HIGH);
  } else if (acertos == 2) {
    digitalWrite(ledAzul2, HIGH);
  } else if (acertos >= 3) {
    Serial.println("Voce conquistou a sabedoria! A porta se abre...");
    motor.write(90); // Move o motor
    digitalWrite(ledAzul3, HIGH);
  }

  Serial.println("Reinicie o programa para jogar novamente.");
  Serial.println();
  Serial.println();
  delay(3000);
}
