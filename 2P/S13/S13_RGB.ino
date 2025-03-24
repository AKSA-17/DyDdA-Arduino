// Sesión 13: Control de LED RGB
// Descripción: Este código controla un LED RGB, cambiando sus colores en intervalos de 1 segundo.

// Definimos los pines donde conectaremos los ánodos del LED RGB
const int redPin = 5;    // Ánodo rojo conectado al pin digital 5
const int bluePin = 3;   // Ánodo azul conectado al pin digital 3
const int greenPin = 2;  // Ánodo verde conectado al pin digital 2

// La función setup() se ejecuta una vez cuando se enciende o reinicia Arduino
void setup() {
    pinMode(redPin, OUTPUT);   // Configuramos el pin 5 como salida
    pinMode(bluePin, OUTPUT);  // Configuramos el pin 3 como salida
    pinMode(greenPin, OUTPUT); // Configuramos el pin 2 como salida
}

// La función loop() se ejecuta de manera continua
void loop() {
    // Encendemos el color rojo
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    delay(1000); // Esperamos 1 segundo

    // Encendemos el color azul
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
    delay(1000); // Esperamos 1 segundo

    // Encendemos el color verde
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
    delay(1000); // Esperamos 1 segundo

    // Combinación de colores:
    // Encendemos el color amarillo (rojo + verde)
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
    delay(1000); // Esperamos 1 segundo

    // Encendemos el color cian (verde + azul)
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);
    delay(1000); // Esperamos 1 segundo

    // Encendemos el color magenta (rojo + azul)
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
    delay(1000); // Esperamos 1 segundo

    // Encendemos el color blanco (rojo + verde + azul)
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);
    delay(1000); // Esperamos 1 segundo
}