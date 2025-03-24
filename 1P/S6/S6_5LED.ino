// Sesión 6: Estructura de Programación Secuencial
// Descripción: Este código controla 5 LEDs conectados a los pines del 1 al 5, 
// parpadeándolos de manera secuencial y luego encendiéndolos todos simultáneamente.

// Definimos los pines de los LEDs
const int led1 = 1;  
const int led2 = 2;  
const int led3 = 3;  
const int led4 = 4;  
const int led5 = 5;  

// La función setup() se ejecuta una sola vez al iniciar el Arduino
void setup() {
    // Configuramos los pines de los LEDs como salidas
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
}

// La función loop() se ejecuta repetidamente
void loop() {
    // Encendemos y apagamos cada LED secuencialmente con 1 segundo de espera
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);

    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);

    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led3, LOW);

    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led4, LOW);

    digitalWrite(led5, HIGH);
    delay(1000);
    digitalWrite(led5, LOW);

    // Encendemos los 5 LEDs al mismo tiempo
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);

    delay(1000); // Esperamos 1 segundo

    // Apagamos los 5 LEDs
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);

    delay(1000); // Esperamos 1 segundo antes de repetir el ciclo
}