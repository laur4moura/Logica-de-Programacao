// C++ code
// Variaveis
float idade = 25;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Categorias na escolinha de futebol 
  //infantil abaixo de 10 anos 
  //juvenil abaixo de 18 anos 
  //adulto abaixo de 35 
  //senior a partir de 35
  
  if(idade <= 10 ) {//de infinito negativo ate 10 anos 
  Serial.println("Categoria infantil");
  }else if(idade < 18) {//juvenil ate 17 anos
  Serial.println("Categoria juvenil");
  }else if( idade < 35) {//de 18 anos ate 34
  Serial.println("Categoria adulta");
  }else{// de 35 ate o infinito positivo
  Serial.println("Categoria Senior");
  }
  delay(20000);
}