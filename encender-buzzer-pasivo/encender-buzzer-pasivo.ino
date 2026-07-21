/*Este código demuestra el uso de la función tone()

con el parámetro de duración.

*/
// --- 1. Definición de las Frecuencias (en Hz) ---

// Creamos variables para hacer el código legible.

// Estos son los estándares de la escala temperada.

int Do = 262;

int Re = 294;

int Mi = 330;

int Fa = 349;

int Sol = 392;

int La = 440; // Frecuencia estándar de afinación (La 4)

int Si = 494;

int Do2 = 524; // Do agudo (una octava arriba)
// --- 2. Definición de Pines y Variables ---

int buzz = 12; // Pin digital donde conectamos el zumbador

int wait = 500; // Variable para la DURACIÓN de la nota (en ms)
// --- 3. Configuración Inicial (se ejecuta UNA vez) ---

void setup() {

// Configuramos el pin del zumbador como una SALIDA.

// El Arduino enviará una señal HACIA el zumbador.

pinMode(buzz, OUTPUT);

}
// --- 4. Bucle Principal (se repite indefinidamente) ---

void loop() {
// Tocar la escala nota por nota
// Toca Do (262Hz) por 500ms

tone(buzz, Do, wait);

// Espera 1 segundo ANTES de tocar la siguiente nota

delay(1000);
// Toca Re (294Hz) por 500ms

tone(buzz, Re, wait);

delay(1000); // Espera 1s
// Toca Mi (330Hz) por 500ms

tone(buzz, Mi, wait);

delay(1000); // Espera 1s
// Toca Fa (349Hz) por 500ms

tone(buzz, Fa, wait);

delay(1000); // Espera 1s
// Toca Sol (392Hz) por 500ms

tone(buzz, Sol, wait);

delay(1000); // Espera 1s
// Toca La (440Hz) por 500ms

tone(buzz, La, wait);

delay(1000); // Espera 1s
// Toca Si (494Hz) por 500ms

tone(buzz, Si, wait);

delay(1000); // Espera 1s
// Toca Do Agudo (524Hz) por 500ms

tone(buzz, Do2, wait);

delay(1000); // Espera 1s
// Detenemos cualquier sonido por si acaso.

// Buena práctica antes de que el loop repita.

noTone(buzz);

}
