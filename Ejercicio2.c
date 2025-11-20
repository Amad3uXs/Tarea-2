/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 2*/

/*Construir un diagrama de flujo tal que dado el radio de un c ́ırculo, calcule
e imprima el  ́area y la circunferencia. El  ́area del c ́ırculo se calcula como
Area = π ∗ radio2 y la circunferencia se calcula como Circunferencia =
2 ∗ π ∗ radio.*/

#include <stdio.h>

// Para usar M_PI, una constante para pi, se podría incluir <math.h> 
// pero para mantenerlo simple, se define el valor de PI como una constante simbólica.
#define PI 3.14159265358979323846

int main()
{
    // Declaración de variables para almacenar el radio y los resultados.
    // Se usa 'double' (doble precisión) para valores reales, como se recomienda.
    double realRadio;
    double realArea;
    double realCircunferencia;

    // Módulo de Entrada: solicitar el radio al usuario.
    printf("Programa para calcular el area y la circunferencia de un circulo.\n");
    printf("Ingrese el radio del circulo (valor real):\n");
    // Se usa "%lf" para leer un valor de tipo 'double'
    scanf("%lf", &realRadio);

    // Módulo de Procesamiento: realizar las operaciones.
    // Area = PI * radio^2
    realArea = PI * (realRadio * realRadio);

    // Circunferencia = 2 * PI * radio
    realCircunferencia = 2 * PI * realRadio;

    // Módulo de Salida: mostrar los resultados.
    printf("\n--- Resultados ---\n");
    // Se usa "%.2lf" para mostrar el resultado con 2 decimales.
    printf("Radio ingresado: %.2lf\n", realRadio);
    printf("Area del circulo: %.2lf\n", realArea);
    printf("Circunferencia del circulo: %.2lf\n", realCircunferencia);

    return 0;
}
