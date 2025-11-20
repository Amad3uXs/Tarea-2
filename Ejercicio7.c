/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 7*/

/*Hacer un diagrama de flujo para calcular el precio de un ticket ida y vuelta
en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
Tambi ́en se sabe que si el numero de d ́ıas de estancia es mayor a 7 y la
distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
un descuento del 30%. El precio por km es de $0.23.*/

#include <stdio.h>

// Definimos las constantes para el cálculo.
#define PRECIO_POR_KM 0.23 
#define DESCUENTO 0.30        // 30%
#define DISTANCIA_MINIMA 800.0
#define DIAS_MINIMOS 7

int main()
{
    // Declaración de variables.
    int enteroDiasEstancia;
    double realDistanciaIda;
    double realDistanciaTotal;
    double realCostoBase;
    double realCostoFinal;
    double realMontoDescontado = 0.0;
    
    // Módulo de Entrada: solicitar la distancia de ida y los días de estancia.
    printf("Programa para calcular el costo del ticket de ferrocarril.\n");
    printf("Precio por km: $%.2lf\n", PRECIO_POR_KM);
    
    printf("Ingrese la distancia solo de IDA (en km, ej. 500.0): ");
    scanf("%lf", &realDistanciaIda);
    
    printf("Ingrese el numero de dias de estancia (ej. 8): ");
    scanf("%i", &enteroDiasEstancia);

    // Módulo de Procesamiento - Cálculos Secuenciales.
    // Distancia total es ida y vuelta
    realDistanciaTotal = realDistanciaIda * 2.0;
    
    // Costo base = Distancia Total * Precio por km
    realCostoBase = realDistanciaTotal * PRECIO_POR_KM;
    
    // Inicializar el costo final con el costo base (precio sin descuento)
    realCostoFinal = realCostoBase;

    // Módulo de Procesamiento - Estructura Condicional.
    // Condición compuesta: (dias > 7) Y (distancia total > 800 km)
    if ((enteroDiasEstancia > DIAS_MINIMOS) && (realDistanciaTotal > DISTANCIA_MINIMA)) 
    {
        // Se cumplen ambas condiciones: aplicar descuento.
        realMontoDescontado = realCostoBase * DESCUENTO;
        realCostoFinal = realCostoBase - realMontoDescontado;
        
        printf("\n¡CUMPLE LOS REQUISITOS! Se aplica el descuento del %.0f%%.\n", DESCUENTO * 100.0);
    }
    else 
    {
        // No se cumple la condición
        printf("\nREQUISITOS NO CUMPLIDOS. El ticket se cobra a precio base.\n");
    }

    // Módulo de Salida: mostrar los resultados.
    printf("\n--- Resumen del Viaje ---\n");
    printf("Distancia Total a recorrer: %.2lf km\n", realDistanciaTotal);
    printf("Costo Base: $%.2lf\n", realCostoBase);
    printf("Monto Descontado: -$%.2lf\n", realMontoDescontado);
    printf("---------------------------\n");
    printf("Costo FINAL del Ticket: $%.2lf\n", realCostoFinal);

    return 0;
}
