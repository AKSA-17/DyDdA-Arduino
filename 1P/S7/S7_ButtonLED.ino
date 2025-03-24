// Sesión 7: Estructura de Programación Condicional
// Descripción: Este código enciende un LED cuando se presiona un botón (PushButton).
// Si el botón está presionado, el LED se enciende; de lo contrario, permanece apagado.

// Definimos los pines
const int ledPin = 12;   // LED conectado al pin digital 13
const int buttonPin = 5; // Botón (PushButton) conectado al pin digital 2

// Variable para almacenar el estado del botón
int buttonState = 0;

// La función setup() se ejecuta una sola vez al iniciar el Arduino
void setup() {
    pinMode(ledPin, OUTPUT);    // Configuramos el pin del LED como salida
    pinMode(buttonPin, INPUT);  // Configuramos el pin del botón como entrada
}

// La función loop() se ejecuta repetidamente
void loop() {
  
    // Leemos el estado del botón (HIGH si está presionado, LOW si no lo está)
    buttonState = digitalRead(buttonPin);

    // Condición: Si el botón está presionado, encender el LED
    if (buttonState == HIGH) {
        digitalWrite(ledPin, HIGH); // Encender LED
    } else {
        digitalWrite(ledPin, LOW);  // Apagar LED
    }
}
