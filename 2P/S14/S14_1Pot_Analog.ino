// Sesión 14: Control de LED RGB con Potenciómetro
// Descripción: Este código ajusta el brillo de un LED RGB en función de la posición de un potenciómetro.
// El valor del potenciómetro de 0 a 1023 (ADC de 10 bits) se convierte a un rango de 0 a 255 para controlar la señal PWM (de 8 bits).

// Definir pines del LED RGB
const int redPin = 5;    // Pin para el LED rojo
const int greenPin = 2;  // Pin para el LED verde
const int bluePin = 3;   // Pin para el LED azul

const int potPin = A0;   // Pin Analógico para el potenciómetro
// El potenciómetro necesita un pin analógico porque produce una señal analógica que varía de 0 a 5V. No es solo un HIGH o un LOW. 
// Los pines analógicos del Arduino están diseñados para leer estas señales analógicas y convertirlas en valores digitales mediante el ADC (Convertidor Analógico-Digital).

void setup() {
    // Configurar los pines del LED RGB como salidas
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void loop() {
    // Leer el valor del potenciómetro (rango de 0 a 1023)
    int valorPot = analogRead(potPin);

    // Convertir el valor del potenciómetro (0 a 1023) al rango de PWM (0 a 255)
    // Esto es necesario porque analogWrite() acepta valores de 0 a 255
    int brillo = map(valorPot, 0, 1023, 0, 255);

    // Ajustar la intensidad de cada color del LED RGB según el valor del potenciómetro
    analogWrite(redPin, brillo); // Duty cycle = brillo/255 * 100% ()
    analogWrite(greenPin, brillo);
    analogWrite(bluePin, brillo);

    // Pequeña pausa para estabilidad
    delay(10);
}