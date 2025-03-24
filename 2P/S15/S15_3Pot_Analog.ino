// Sesión 15: Control de LED RGB con Potenciómetro
// Descripción: Este código ajusta el brillo de un LED RGB en función de la posición de tres potenciómetros.
// El valor de cada potenciómetro de 0 a 1023 (ADC de 10 bits) se convierte a un rango de 0 a 255 para controlar la señal PWM (de 8 bits).

// Definir pines del LED RGB
const int redPin = 5;    // Pin para el LED rojo
const int greenPin = 2;  // Pin para el LED verde
const int bluePin = 3;   // Pin para el LED azul

// Definir pines de los potenciómetros
const int potRed = A1;   // Potenciómetro para rojo
const int potGreen = A3; // Potenciómetro para verde
const int potBlue = A2;  // Potenciómetro para azul

void setup() {
    // Configurar los pines del LED RGB como salidas
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void loop() {
    // Leer valores de los potenciómetros (0 a 1023)
    int valorRed = analogRead(potRed);
    int valorGreen = analogRead(potGreen);
    int valorBlue = analogRead(potBlue);

    // Convertir valores a rango de PWM (0 a 255)
    int brilloRed = map(valorRed, 0, 1023, 0, 255);
    int brilloGreen = map(valorGreen, 0, 1023, 0, 255);
    int brilloBlue = map(valorBlue, 0, 1023, 0, 255);

    // Ajustar intensidad de cada color
    analogWrite(redPin, brilloRed);
    analogWrite(greenPin, brilloGreen);
    analogWrite(bluePin, brilloBlue);

    // Pequeña pausa para estabilidad
    delay(10);
}