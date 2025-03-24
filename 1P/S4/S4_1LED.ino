// Sesión 4: Encender mi primer LED
// Descripción: Este código enciende y apaga un LED conectado al puerto 0 de Arduino con intervalos de 1 segundo.

// Definimos el pin donde conectaremos el LED
const int ledPin = 0;  // El LED está conectado al pin digital 0

// La función setup() se ejecuta una vez cuando se enciende o reinicia Arduino
void setup() {
    pinMode(ledPin, OUTPUT);  // Configuramos el pin 0 como salida
}

// La función loop() se ejecuta de manera continua
void loop() {
    digitalWrite(ledPin, HIGH);  // Encendemos el LED
    delay(1000);  // Esperamos 1 segundo (1000 milisegundos)

    digitalWrite(ledPin, LOW);  // Apagamos el LED
    delay(1000);  // Esperamos 1 segundo antes de repetir el ciclo
}
