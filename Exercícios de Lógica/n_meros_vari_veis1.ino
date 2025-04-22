// C++ code
//
void setup()
{
  Serial.begin(9600); // Configurar a porta serial do Arduino  
  pinMode(LED_BUILTIN, OUTPUT);// Configura o LED interno como saída 
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  Serisl.println("Hello");
  delay(750); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  Serisl.println("World")
  delay(750); // Wait for 1000 millisecond(s)
}