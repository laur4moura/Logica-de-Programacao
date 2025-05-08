/*
	Faça um  que receba um código de origem de um produto e informe sua procedência conforme a lista abaixo:
    
    CÓDIGO DE ORIGEM			PROCEDÊNCIA 
    	1							Sul
        2							Norte
        3							Leste
        4							Oeste
        5 ou 6 						Nordeste
        7, 8 ou 9 					 Sudeste
        10 até 20 					Centro-Oeste
        acima de 20 				Código ainda sem definição
*/

// C++ code
//Variáveis
float numero = 0;
  
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual o codigo de origem?");
  while (! Serial.available());
  numero = Serial.parseFloat();
  
  if( numero == 1 ){
  Serial.println("o produto eh do sul");
  }else if(numero == 2) {
  Serial.println("o produto eh do norte");
  }else if(numero == 3) {
  Serial.println("o produto eh do leste");
  }else if(numero == 4) {
  Serial.println("produto eh do oeste");
  }else if(numero <= 6) {
  Serial.println("o produto eh do nordeste");
  }else if(numero <= 9) {
  Serial.println("o produto eh do sudeste");
  }else if(numero >= 10 && numero <= 20) {
  Serial.println("o produto eh do Centro-oeste");
  }else {
  Serial.println("Codigo ainda sem definicao");
}
  delay(20000);
  Serial.println();
  Serial.println();
  Serial.println();
}