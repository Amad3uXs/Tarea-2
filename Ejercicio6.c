/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 6*/

/*Dado como dato el sueldo de un trabajador considere un aumento del
15% si un sueldo es inferior a $1,000 y de un 12% en caso contrario.
Imprimir el sueldo con el aumento incorporado. Hacer el diagrama de
flujo correspondiente.*/

#include <stdio.h>

// Definimos las constantes para la lógica del aumento.
#define UMBRAL_SUELDO 1000.00
#define AUMENTO_ALTO 0.15     // 15%
#define AUMENTO_BAJO 0.12     // 12%

int main()
{
    // Declaración de variables: usamos 'double' para manejar sueldos y tasas.
    double realSueldoActual;
    double realSueldoFinal;
    double realMontoAumento;
    double realTasaAplicada;

    // Módulo de Entrada: solicitar el sueldo actual.
    printf("Programa para calcular el aumento salarial.\n");
    printf("Sueldo actual: $");
    // Se usa "%lf" para leer un valor de tipo 'double'
    scanf("%lf", &realSueldoActual);

    // Módulo de Procesamiento: aplicar la estructura condicional (if-else).
    // Si el sueldo es inferior a $1,000, aplica AUMENTO_ALTO (15%).
    if (realSueldoActual < UMBRAL_SUELDO) 
    {
        realTasaAplicada = AUMENTO_ALTO;
    }
    // De lo contrario, aplica AUMENTO_BAJO (12%).
    else 
    {
        realTasaAplicada = AUMENTO_BAJO;
    }
    
    // Cálculo del aumento fuera del if-else para evitar repetición de código.
    realMontoAumento = realSueldoActual * realTasaAplicada;
    realSueldoFinal = realSueldoActual + realMontoAumento;

    // Módulo de Salida: mostrar el resultado.
    printf("\n--- Calculo de Aumento ---\n");
    printf("Sueldo Base: $%.2lf\n", realSueldoActual);
    printf("Tasa de Aumento Aplicada: %.0lf%%\n", realTasaAplicada * 100.0);
    printf("Monto del Aumento: +$%.2lf\n", realMontoAumento);
    printf("---------------------------\n");
    printf("Sueldo Final: $%.2lf\n", realSueldoFinal);

    return 0;
}
