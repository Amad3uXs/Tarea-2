/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 3*/

/*En una Casa de Cabio necesitan construir un programa que dado como
dato una cantidad expresada en d ́olares, convierta esa cantidad en pesos.
Construir el diagrama de flujo correspondiente. Tomar en cuenta que:
1dolar ↢ 11.96pesos.*/

#include <stdio.h>

// Definir la tasa de cambio como una constante simbólica (1 dólar = 11.96 pesos)
#define TASA_CAMBIO 11.96

int main()
{
    // Declaración de variables: se usa 'double' para manejar la precisión de los montos.
    double realDolares;
    double realPesos;

    // Módulo de Entrada: solicitar el monto en dólares.
    printf("Programa para convertir un monto de dolares a pesos.\n");
    printf("Tasa de cambio actual: 1.00 USD = %.2lf MXN\n", TASA_CAMBIO);
    printf("Ingrese el monto en dolares (USD):\n");
    // Se usa "%lf" para leer un valor de tipo 'double'
    scanf("%lf", &realDolares);

    // Módulo de Procesamiento: realizar la conversión.
    // Pesos = Dolares * TASA_CAMBIO
    realPesos = realDolares * TASA_CAMBIO;

    // Módulo de Salida: mostrar los resultados.
    printf("\n--- Conversion ---\n");
    // Se usa "%.2lf" para mostrar el resultado con 2 decimales (formato monetario)
    printf("Monto en USD: $%.2lf\n", realDolares);
    printf("Monto en MXN: $%.2lf\n", realPesos);

    return 0;
}
