// Sesión 5: Encender 2 LED
// Descripción: Este código enciende y apaga dos LEDs conectados a los pines 0 y 13 de Arduino con intervalos de 1 segundo.

// Definimos los pines donde conectaremos los LEDs
const int led1 = 0;  // Primer LED conectado al pin digital 13
const int led2 = 13;   // Segundo LED conectado al pin digital 0

// La función setup() se ejecuta una vez cuando se enciende o reinicia Arduino
void setup() {
    pinMode(led1, OUTPUT);  // Configuramos el pin 13 como salida
    pinMode(led2, OUTPUT);  // Configuramos el pin 0 como salida
}

// La función loop() se ejecuta de manera continua
void loop() {
    digitalWrite(led1, HIGH);  // Encendemos el LED 1
    digitalWrite(led2, LOW);   // Apagamos el LED 2
    delay(1000);  // Esperamos 1 segundo

    digitalWrite(led1, LOW);   // Apagamos el LED 1
    digitalWrite(led2, HIGH);  // Encendemos el LED 2
    delay(1000);  // Esperamos 1 segundo antes de repetir el ciclo
}
