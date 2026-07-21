/*
  Tutorial - LDR / Fotoresistencia
  
  Mide la intensidad de luz ambiental utilizando una fotoresistencia (LDR)
  y una resistencia en divisor de tensión, mostrando los valores en el Monitor Serie.
  Sitio web: ingtelecto.com
*/

int sensorPin = A0;   // Pin analógico donde conectamos el divisor de tensión del LDR
int sensorValue = 0;  // Variable para almacenar el valor leído (0 - 1023)

void setup() {
  Serial.begin(9600); // Inicializamos la comunicación serie a 9600 baudios
  Serial.println("--- Lectura Fotoresistencia LDR - ingtelecto.com ---");
}

void loop() {
  // Leemos el valor analógico del pin A0
  sensorValue = analogRead(sensorPin);

  // Enviamos la lectura al Monitor Serie
  Serial.print("Nivel de luz (Valor analógico): ");
  Serial.println(sensorValue);

  delay(500); // Pequeña pausa entre lecturas
}
