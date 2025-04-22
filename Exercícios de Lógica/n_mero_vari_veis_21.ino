// C++ code
//
void setup()
{
  Serial.begin(9600);
}
//Variaveis - criação e inicializacao
int numero1 = 0;
int numero2 = 0;
int soma = 0;
int subtracao = 0;
int multiplicacao = 0;
float divisao = 0;

void loop()
{
  //entrada
  
  Serial.println("digite o primeiro numero");//pergunta
  while(! Serial.available() );//Espera o usuário digitar/dar um <Enter>
  numero1 = Serial.parseInt();//resposta do usuário
  
  Serial.println("digite o segundo numero");//pergunta
  while(! Serial.available() );//Espera o usuário digitar/dar um <Enter>
  numero2 = Serial.parseInt();//resposta do usuário
  
  //processamento
  soma           = numero1 + numero2;//7 - inteiro (int)
  subtracao      = numero1 - numero2;//3 - inteiro (int)
  multiplicacao  = numero1 * numero2;//10 - inteiro (int)
  
  //converte numero1 e numero2 para float antes da conta
  divisao        = float(numero1) / float(numero2);//2.5 - real (float)
  
  //saida
  Serial.println("Resultado da soma sh:" + String(soma) );
  Serial.println("Resultado da subtracao eh:" + String(subtracao));
  Serial.println("Resultado da multiplicacao eh:" + String(multiplicacao));
  Serial.println("Resultado da divisao eh:" + String(divisao));
  delay(1000);//aguarda 1 segundo antes de rodar o loop novamente
}
     