// TUTORIAL INGTELECTO PRO

// Lección 3: Controlar un LED con dos pulsadores (INPUT_PULLUP)

// Listo para cualquier placa de desarrollo STEREN, ARDUINO, REX QUALIS, ETC.
// --- 1. Variables Globales ---

// Definimos los pines que vamos a utilizar.

// Usar variables hace el código más legible y fácil de modificar.

int ledPin = 5; // El pin donde está conectado el LED

int botonA = 9; // El pin para el botón de ENCENDIDO (ON)

int botonB = 8; // El pin para el botón de APAGADO (OFF)
// --- 2. Configuración (Setup) ---

// Esta función se ejecuta UNA SOLA VEZ al encender o resetear el Arduino.

void setup() {

// Configuramos el pin del LED como SALIDA (OUTPUT)

// Le diremos al Arduino que ENVIARÁ voltaje por este pin.

pinMode(ledPin, OUTPUT);
// Configuramos los pines de los botones como ENTRADA PULL-UP (INPUT_PULLUP)

// 1. INPUT: Le decimos que LEERÁ voltaje de este pin.

// 2. PULLUP: Activamos la resistencia interna a 5V.

// Esto significa que el pin leerá HIGH por defecto,

// y leerá LOW solo cuando se presione el botón (lógica invertida).

pinMode(botonA, INPUT_PULLUP);

pinMode(botonB, INPUT_PULLUP);

}
// --- 3. Bucle Principal (Loop) ---

// Esta función se repite continuamente, miles de veces por segundo.

void loop() {
// --- Lógica del Botón A (Encender) ---
// Preguntamos: "¿El estado del botón A es LOW (Bajo)?"

// Recordamos que LOW significa que el botón ESTÁ PRESIONADO.

if (digitalRead(botonA) == LOW) {

// Si SÍ está presionado, encendemos el LED enviando un estado ALTO (HIGH / 5V)

digitalWrite(ledPin, HIGH);

}
// --- Lógica del Botón B (Apagar) ---
// Preguntamos: "¿El estado del botón B es LOW (Bajo)?"

// (Botón B presionado)

if (digitalRead(botonB) == LOW) {

// Si SÍ está presionado, apagamos el LED enviando un estado BAJO (LOW / 0V)

digitalWrite(ledPin, LOW);

}
// El LED mantendrá su último estado hasta que se presione el otro botón.

}
