/*
  Tutorial - Sensor de Temperatura y Humedad DHT11
  
  Mide la humedad relativa y la temperatura en grados Celsius
  usando el sensor DHT11 y muestra los datos en el Monitor Serie.
  Sitio web: ingtelecto.com
*/

#define DHT11_PIN 0 // Conectado al pin analógico A0

// Función para leer los 40 bits de datos transmitidos por el DHT11
byte read_dht11_dat() {
  byte i = 0;
  byte result = 0;
  for (i = 0; i < 8; i++) {
    while (!(PINC & _BV(DHT11_PIN))); // Espera a que el pin pase a nivel ALTO
    delayMicroseconds(30);
    if (PINC & _BV(DHT11_PIN)) {
      result |= (1 << (7 - i));
    }
    while ((PINC & _BV(DHT11_PIN)));  // Espera a que termine el bit
  }
  return result;
}

void setup() {
  DDRC |= _BV(DHT11_PIN);
  PORTC |= _BV(DHT11_PIN);
  Serial.begin(9600);
  Serial.println("--- Lectura Sensor DHT11 - ingtelecto.com ---");
}

void loop() {
  byte dht11_dat[5];
  byte dht11_in;
  byte i;

  // Secuencia de inicio para solicitar datos al DHT11
  PORTC &= ~_BV(DHT11_PIN);
  delay(18);
  PORTC |= _BV(DHT11_PIN);
  delayMicroseconds(40);
  DDRC &= ~_BV(DHT11_PIN);
  delayMicroseconds(40);

  dht11_in = PINC & _BV(DHT11_PIN);
  if (dht11_in) {
    Serial.println("Error: Condición de inicio 1 no cumplida");
    return;
  }
  delayMicroseconds(80);

  dht11_in = PINC & _BV(DHT11_PIN);
  if (!dht11_in) {
    Serial.println("Error: Condición de inicio 2 no cumplida");
    return;
  }
  delayMicroseconds(80);

  // Lectura de los 5 bytes (Humedad entera, Humedad decimal, Temp entera, Temp decimal, Checksum)
  for (i = 0; i < 5; i++) {
    dht11_dat[i] = read_dht11_dat();
  }

  DDRC |= _BV(DHT11_PIN);
  PORTC |= _BV(DHT11_PIN);

  byte dht11_check_sum = dht11_dat[0] + dht11_dat[1] + dht11_dat[2] + dht11_dat[3];
  
  if (dht11_dat[4] != dht11_check_sum) {
    Serial.println("Error de lectura: Checksum incorrecto");
  } else {
    Serial.print("Humedad: ");
    Serial.print(dht11_dat[0], DEC);
    Serial.print(".");
    Serial.print(dht11_dat[1], DEC);
    Serial.print("%  |  ");
    Serial.print("Temperatura: ");
    Serial.print(dht11_dat[2], DEC);
    Serial.print(".");
    Serial.print(dht11_dat[3], DEC);
    Serial.println(" °C");
  }

  delay(2000); // Espera 2 segundos entre lecturas
}
