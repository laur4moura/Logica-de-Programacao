/*
Faça um programa que receba o nome, cargo e salário de um funcionário. 

Se o
funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.

Ao final exiba o nome, o cargo e o salário desse funcionário.
<1000
*/

// C++ code

//Declaração de variáveis
String nome = "";
String cargo = "";
float Salario = 0;
  
// funçao que roda apenas uma única vez
//serve para configurações dos sensores, bibliotecas, etc.
void setup()
{
  Serial.begin(9600);
}


void loop()
{
  Serial.println("Digite o seu nome");//Pergunte o nome do usuário 
  while ( ! Serial.available () );// espere o usuário digitar e dar o <Enter>
  nome = Serial.readString ();
  
  Serial.println("Digite o seu Cargo");//Pergunte o Cargo do usuário 
  while ( ! Serial.available () );// espere o usuário digitar e dar o <Enter>
  Cargo = Serial.readString ();
  
  Serial.println("Digite o seu Salario");//Pergunte o Salario do usuário 
  while ( ! Serial.available () );// espere o usuário digitar e dar o <Enter>
  Salario = Serial.parseFloat ();
  
  
  //processamento
  
  
  //saída
  //exibir nome, cargo e salário
  Serial.println();//pula linha 
  Serial.println();//pula linha 
  
  Serial.println("Nome do funcionario: " + nome);
  Serial.println("Cargo do funcionario: " + cargo); 
  
  if(Salario < 1000 ){ 
    Serial.println("Entao tera um aumento de 10%: R$" + String(Salario10));
    Salario10 = Salario * 1.10;
  }
  
  if(Salario >= 1000){//true
   //calcular o novo salário
    salrio = salario + (salario * 1.10);
    Serial.println ("Novo salario: R$ " + String(salario));
  }else {
    Serial.println(Salario: R$ + String(salario));
}
  
  Serial.println();//pula linha
  Serial.println();//pula linha
}

