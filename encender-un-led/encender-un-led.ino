/*

Tutorial 01 - Hace parpadear un LED conectado al pin 8 cada segundo.

*/
// Definimos una constante para el pin del LED.

int ledPin = 8;
// Aquí configuramos los pines.

void setup() {

// Configura el pin 'ledPin' (el 8) como una SALIDA digital.

pinMode(ledPin, OUTPUT);
}
// Se ejecuta en bucle, una y otra vez, indefinidamente.

void loop() {
digitalWrite(ledPin, HIGH);
// Espera 1000 milisegundos (1 segundo).

delay(1000);
digitalWrite(ledPin, LOW);
// Espera otros 1000 milisegundos (1 segundo).

delay(1000);

}
