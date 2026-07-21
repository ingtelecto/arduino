// Asignamos un "nombre" al pin que usaremos

// 'buzzer' ahora es un alias para el pin 12

int buzzer = 12;
void setup()

{

// Configuramos el pin del zumbador como una SALIDA (OUTPUT)

// Esto significa que el Arduino enviará voltaje POR este pin.

pinMode(buzzer, OUTPUT);

}
void loop()

{

// Declaramos una variable 'i' que usaremos como contador

// 'unsigned char' es un tipo de número pequeño, de 0 a 255

unsigned char i;
// Este bucle 'while(1)' es infinito.

// Hará que los dos tonos se repitan una y otra vez.

while(1)

{

// --- PRIMER TONO ---

// Este bucle 'for' repite el código de adentro 80 veces

// Esto hace que el tono dure un poco más

for(i=0; i<80; i++)

{

digitalWrite(buzzer, HIGH); // Enciende el pin (envía 5V)

delay(1); // Espera 1 milisegundo

digitalWrite(buzzer, LOW); // Apaga el pin (envía 0V)

delay(1); // Espera 1 milisegundo

}
// --- SEGUNDO TONO ---

// Este bucle 'for' repite el código de adentro 100 veces

for(i=0; i<100; i++)

{

digitalWrite(buzzer, HIGH); // Enciende el pin

delay(2); // Espera 2 milisegundos

digitalWrite(buzzer, LOW); // Apaga el pin

delay(2); // Espera 2 milisegundos

}

} // El 'while(1)' vuelve a empezar

}
