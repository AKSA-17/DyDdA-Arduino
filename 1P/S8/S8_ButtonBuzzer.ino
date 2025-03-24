// Sesión 8: Botón y Buzzer
// Descripción: Este código enciende un LED y activa un buzzer cuando se presiona un botón.

// Definimos los pines
const int ledPin = 12;    // LED conectado al pin digital 13
const int buttonPin = 5;  // Botón (PushButton) conectado al pin digital 2
const int buzzerPin = 13;  // Buzzer conectado al pin digital 3

// Variable para almacenar el estado del botón
int buttonState = 0;

// La función setup() se ejecuta una sola vez al iniciar el Arduino
void setup() {
    pinMode(ledPin, OUTPUT);    // Configuramos el pin del LED como salida
    pinMode(buzzerPin, OUTPUT); // Configuramos el pin del buzzer como salida
    pinMode(buttonPin, INPUT);  // Configuramos el pin del botón como entrada
}

// La función loop() se ejecuta repetidamente
void loop() {
    // Leemos el estado del botón (HIGH si está presionado, LOW si no lo está)
    buttonState = digitalRead(buttonPin);

    // Condición: Si el botón está presionado, encender LED y buzzer
    if (buttonState == HIGH) {
        digitalWrite(ledPin, HIGH);  // Encender LED
        tone(buzzerPin, 1000, 500); // Activar buzzer con tono de 1000 Hz durante 500 ms
    } else {
        digitalWrite(ledPin, LOW);   // Apagar LED
        noTone(buzzerPin); // Apagar buzzer
    }
}
