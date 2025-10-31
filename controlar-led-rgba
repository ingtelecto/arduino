/*

* TUTORIAL INGTELECTO : Lección 2 - LED RGB

* * Este código demuestra cómo controlar un LED RGB de Cátodo Común

* usando la función analogWrite() (PWM) para mezclar colores.

* * El código cambiará el color del LED cada segundo.

*/
// 1. Declaración de Variables Globales

// Asignamos los pines PWM (con ~) a variables con nombres claros

int redPin = 3; // El pin del color Rojo va al pin ~3

int greenPin = 5; // El pin del color Verde va al pin ~5

int BluePin = 6; // El pin del color Azul va al pin ~6
// 2. Función de Configuración (Setup)

// Se ejecuta una sola vez al encender o resetear el Arduino

void setup() {

// Configuramos los 3 pines de color como SALIDAS (OUTPUT)

// ya que enviaremos señal (voltaje) desde el Arduino hacia el LED.

pinMode(redPin, OUTPUT);

pinMode(greenPin, OUTPUT);

pinMode(BluePin, OUTPUT);

}
// 3. Bucle Principal (Loop)

// Este código se repite indefinidamente

void loop() {

// Hacemos que nuestro programa cambie el color del LED

// cada segundo (1000 milisegundos)
setColor(255, 0, 0); // Llama a la función para poner el color Rojo

delay(1000); // Espera 1 segundo
setColor(0, 255, 0); // Color Verde

delay(1000); // Espera 1 segundo
setColor(0, 0, 255); // Color Azul

delay(1000); // Espera 1 segundo
setColor(255, 255, 255); // Color Blanco (Rojo+Verde+Azul al máximo)

delay(1000); // Espera 1 segundo
setColor(180, 0, 255); // Color Púrpura (Rojo y Azul mezclados)

delay(1000); // Espera 1 segundo

}
// 4. Función Personalizada: setColor()

// Esta es una función que creamos nosotros para hacer el código más limpio.

// Toma 3 valores (números) como argumentos: redValue, greenValue y blueValue.

void setColor(int redValue, int greenValue, int blueValue) {
// Usamos analogWrite() para enviar la señal PWM a cada pin

// El valor (0-255) determina el brillo de ese color
analogWrite(redPin, redValue);

analogWrite(greenPin, greenValue);

analogWrite(BluePin, blueValue);

}
