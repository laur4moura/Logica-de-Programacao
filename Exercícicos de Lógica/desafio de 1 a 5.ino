// C++ code
//

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    int contadorDoWhile = 1;
  do{
    Serial.println("Contando Do while" + String(contadorDoWhile));
    contadorDoWhile++;
  }
  while(contadorDoWhile <= 5);
  
  delay(12000);
}