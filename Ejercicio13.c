/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 13*/

/*Escribir un diagrama de flujo tal que dado como entrada un arreglo uni-
dimensional de enteros, obtenga como resultado la suma de los mismos.*/

#include <stdio.h>

int main()
{
    // Módulo de Declaración: Declarar e inicializar el arreglo y variables.
    
    // 1. Declaración e inicialización del arreglo unidimensional de enteros (5 elementos).
    // El índice va de 0 a 4.
    int enteroArregloNumeros[] = {10, 5, 2, 8, 15};
    
    // 2. Variables para la lógica del programa.
    // Usamos 'long' para la suma para evitar desbordamiento, aunque 'int' es suficiente para este ejemplo.
    long enteroSumaTotal = 0;   // El acumulador de la suma, inicializado en 0.
    int enteroTamanio = sizeof(enteroArregloNumeros) / sizeof(enteroArregloNumeros[0]); // Calcula el tamaño del arreglo.
    int enteroIndice;           // Variable para el índice del ciclo.

    // Módulo de Entrada: Mostrar el arreglo a sumar.
    printf("Programa para calcular la suma de los elementos de un arreglo.\n");
    printf("Arreglo: {10, 5, 2, 8, 15}\n");
    
    // Módulo de Procesamiento: Ciclo Repetitivo para sumar.
    
    // Estructura for: Itera desde el índice 0 hasta el último elemento (tamaño - 1).
    for (enteroIndice = 0; enteroIndice < enteroTamanio; enteroIndice++)
    {
        // Operación de Acumulación.
        // Accede al elemento usando el índice [enteroIndice] y lo suma al acumulador.
        // enteroSumaTotal = enteroSumaTotal + enteroArregloNumeros[enteroIndice];
        enteroSumaTotal += enteroArregloNumeros[enteroIndice];
    }
    
    // Módulo de Salida: mostrar el resultado final.
    printf("\n--- Resultado Final ---\n");
    printf("El numero de elementos en el arreglo es: %i\n", enteroTamanio);
    printf("La suma total de los elementos del arreglo es: %ld\n", enteroSumaTotal); // %ld para long int

    return 0;
}
