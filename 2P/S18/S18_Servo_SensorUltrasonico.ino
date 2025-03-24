#include <Servo.h>  // Biblioteca para controlar el servomotor

// Definimos los pines para el sensor ultrasónico
#define TRIG_PIN 9  
#define ECHO_PIN 10 

// Creamos un objeto Servo
Servo miServo;

void setup() {
    pinMode(TRIG_PIN, OUTPUT);  
    pinMode(ECHO_PIN, INPUT);  
    miServo.attach(6); // Conectamos el servomotor al pin 6
}

void loop() {
    long tiempoEco;
    float distancia;

    // Enviar un pulso de 10 microsegundos para activar el sensor
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    // Medir el tiempo que tarda el eco en regresar
    tiempoEco = pulseIn(ECHO_PIN, HIGH);

    // Convertir el tiempo en distancia (en cm)
    distancia = tiempoEco * 0.0343 / 2;

    // Control del servomotor: si un objeto está cerca, mueve el servo
    if (distancia < 10) {
        miServo.write(90);  // Mueve el servo a 90 grados
    } else {
        miServo.write(0);  // Vuelve a la posición inicial
    }

    delay(500); // Pequeño retardo para estabilidad
}
