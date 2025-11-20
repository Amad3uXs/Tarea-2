/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 4*/

/*Una persona invierte en un banco una determinada cantidad de dinero y
a una cierta tasa de inter ́es mensual. Construya un diagrama de flujo que
permita obtener el monto de dinero que obtendr ́a al finalizar el mes.*/

#include <stdio.h>

int main()
{
    // Declaración de variables: se usa 'double' para precisión monetaria y tasas.
    double realCapital;
    double realTasaInteres;
    double realMontoFinal;

    // Módulo de Entrada: solicitar el capital y la tasa de interés.
    printf("Programa para calcular el monto final de una inversion mensual.\n");
    
    printf("Ingrese el capital invertido (ej. 1000.00):\n");
    // Se usa "%lf" para leer un valor de tipo 'double'
    scanf("%lf", &realCapital);

    printf("Ingrese la tasa de interes mensual (en decimal, ej. 0.05 para 5%%):\n");
    // Se usa "%lf" para leer la tasa de interés.
    scanf("%lf", &realTasaInteres);

    // Módulo de Procesamiento: calcular el monto final.
    // MontoFinal = Capital * (1 + TasaInteres)
    realMontoFinal = realCapital * (1.0 + realTasaInteres);

    // Módulo de Salida: mostrar los resultados.
    printf("\n--- Resumen de la Inversion ---\n");
    printf("Capital Inicial: $%.2lf\n", realCapital);
    printf("Tasa Mensual: %.2lf%% (%.4lf en decimal)\n", realTasaInteres * 100.0, realTasaInteres);
    printf("Monto Final al mes: $%.2lf\n", realMontoFinal);

    return 0;
}
