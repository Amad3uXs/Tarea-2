/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 11*/

/*Hacer un diagrama de flujo que calcule la suma de los n ́umeros pares
comprendidos entre el 10 y 50.*/

#include <stdio.h>

// Definimos los límites del rango a sumar
#define INICIO 10
#define FIN 50
#define DIVISOR_PAR 2

int main()
{
    // Variables de control y acumulador.
    int enteroContador; // Variable que recorre el rango de 10 a 50
    int enteroSumaPares = 0; // Acumulador de la suma, inicializado en 0

    // Módulo de Procesamiento: Ciclo Repetitivo.
    printf("Programa que calcula la suma de los numeros pares entre %i y %i.\n", INICIO, FIN);
    
    // Estructura for: Itera desde 10 hasta 50, incrementando de 1 en 1.
    for (enteroContador = INICIO; enteroContador <= FIN; enteroContador++)
    {
        // Estructura de Selección (if): verificar si el número es par.
        // Si el residuo de dividir el número entre 2 es 0, es par.
        if (enteroContador % DIVISOR_PAR == 0)
        {
            // Operación de Acumulación.
            // Se usa el operador de asignación compuesta (+=) que equivale a: 
            // enteroSumaPares = enteroSumaPares + enteroContador;
            enteroSumaPares += enteroContador;
        }
    }

    // Módulo de Salida: mostrar el resultado final.
    printf("\n--- Resultado Final ---\n");
    printf("La suma de los numeros pares comprendidos entre %i y %i es: %i\n", 
           INICIO, FIN, enteroSumaPares);

    return 0;
}
