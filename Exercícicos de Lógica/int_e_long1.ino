// C++ code
//
void setup()
{
  Serial.begin(9600);
}

//inicializacao de Variáveis 
int caixaPequena = 0;// -32768 até 32767 (faixa inicial e final do int)
long caixaGrande = 0;// -2147483648 até 2147483647 (faixa inicial e fnal do long)

void loop()
{
  caixaPequena = 32767;
  caixaGrande = 32767136;
  
  Serial.println(caixaPequena);//truncou o valor (cortou, pois estoura a faixa permitida)
  Serial.println(caixaGrande);
  
  delay(20000);//20segundos
}