/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 9*/

/*Haga un diagrama de flujo para obtener la tabla de multiplicar de un
n ́umero entero N, comenzando desde el 1.*/

#include <stdio.h>

// El máximo de la tabla es 10
#define MAX_TABLA 10

int main()
{
    // Declaración de variables: se usan enteros.
    int enteroN;          // El número cuya tabla se calculará
    int enteroContador;   // El contador del ciclo (de 1 a 10)
    int enteroResultado;  // El resultado de la multiplicación

    // Módulo de Entrada: solicitar el número entero N.
    printf("Programa para obtener la tabla de multiplicar de un numero N.\n");
    printf("Ingrese el numero entero N:\n");
    // Se usa "%i" para leer un valor de tipo 'int'
    scanf("%i", &enteroN);

    // Módulo de Procesamiento y Salida: Usando la estructura for.
    printf("\n--- Tabla de Multiplicar del %i ---\n", enteroN);

    // Estructura for: (inicialización; condición_lógica; operaciones_por_iteración)
    // El ciclo empieza en 1 (el contador), se repite mientras el contador <= 10, y se incrementa el contador en 1 en cada paso.
    for (enteroContador = 1; enteroContador <= MAX_TABLA; enteroContador++)
    {
        // Cálculo secuencial dentro del ciclo
        enteroResultado = enteroN * enteroContador;

        // Módulo de Salida: Imprime la operación y el resultado en cada iteración
        printf("%i x %i = %i\n", enteroN, enteroContador, enteroResultado);
    }
    
    printf("--------------------------------------\n");

    return 0;
}
