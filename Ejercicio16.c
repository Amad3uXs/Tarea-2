/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 16*/

/*Construir un diagrama de flujo para almacenar en un arreglo unidimen-
sional los 100 primeros n ́umeros pares. Imprimir al final el arreglo.*/

#include <stdio.h>

// Definimos el numero de elementos a almacenar
#define N_PARES 100

int main()
{
    // Módulo de Declaración: Declarar el arreglo y variables.
    
    // 1. Declaración del arreglo unidimensional para almacenar 100 enteros.
    int enteroArregloPares[N_PARES];
    
    // 2. Variables para la lógica del programa.
    int enteroIndice;           // Variable para el índice del ciclo (0 a 99).
    int enteroNumeroPar;        // Variable para generar el valor del par.

    printf("Programa para almacenar e imprimir los primeros %i numeros pares.\n", N_PARES);

    // Módulo de Procesamiento 1: Generar y Almacenar los 100 números pares.
    
    // Recorremos el arreglo usando el índice de 0 a 99.
    for (enteroIndice = 0; enteroIndice < N_PARES; enteroIndice++)
    {
        // Formula para obtener el enesimo número par: Par = 2 * (n + 1)
        // Ya que el índice empieza en 0 (n=0), el primer par es 2*(0+1) = 2.
        // El enésimo número par se calcula como 2 * (índice + 1)
        enteroNumeroPar = 2 * (enteroIndice + 1);
        
        // Almacenamiento: Asignamos el valor generado a la posición actual del arreglo.
        enteroArregloPares[enteroIndice] = enteroNumeroPar;
    }
    
    // Módulo de Procesamiento/Salida 2: Imprimir el contenido del arreglo.
    
    printf("\n--- Contenido del Arreglo (Primeros %i Pares) ---\n", N_PARES);
    
    // Estructura for: Se usa un nuevo ciclo para recorrer el arreglo e imprimir su contenido.
    for (enteroIndice = 0; enteroIndice < N_PARES; enteroIndice++)
    {
        // Imprimir el valor y un separador
        printf("%i%s", enteroArregloPares[enteroIndice], (enteroIndice < N_PARES - 1 ? ", " : ""));

        // Se usa una estructura condicional (if) simple para un salto de línea cada 10 números, para mejor visualización.
        if ((enteroIndice + 1) % 10 == 0) 
        {
            printf("\n");
        }
    }
    printf("----------------------------------------------------------------\n");

    return 0;
}
