// C++ code
//VARIÁVEIS
float numero1 = 0;
float numero2 = 0;
float soma;
float subtrair;
float dividir;
float multiplicar;
int escolhaDaOperacao;
int contador =0;
  
void setup()
{
 Serial.begin(9600);
  
   do{
   Serial.println("Bem-vindo(a) a calculadora Inteligente ");
   Serial.println("Escolha uma das opcoes/operacoes:");
   Serial.println("1- Somar");
   Serial.println("2- Subtrair");
   Serial.println("3- Dividir");
   Serial.println("4- Multiplicar");

   while( ! Serial.available()){} 

   escolhaDaOperacao = Serial.parseInt();

   Serial.println("Agora, para realizar a operacao digite o primeiro numero:");
    while (! Serial.available()){}
   numero1 = Serial.parseFloat();

   Serial.println("Agora, para realizar a operacao digite o segundo numero:");
   while (! Serial.available());
   numero2 = Serial.parseFloat(); 
  
     switch(escolhaDaOperacao ){
       case 1:
       soma = numero1 + numero2;
       Serial.println("WOW!! O resultado foi: " + String(soma));

       break;

       case 2:
       subtrair = numero1 - numero2;
       Serial.println("WOW!! O resultado foi: " + String(subtrair));

       break;

       case 3:
       dividir = (numero1 / numero2);
       Serial.println("WOW!! O resultado foi: " + String(dividir));

       break;

       case 4:
       multiplicar = numero1 * numero2;
       Serial.println("WOW!! O resultado foi: " + String(multiplicar));

       break;

       default:
       Serial.println("Opcao invalida");

     }
   } 
  while(contador != 0);  
}

void loop(){}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  