/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 14*/

/*construya un programa tal que dado como entrada un arreglo unidimen-
sional de enteros y un n ́umero entero, determine cu ́antas veces se encuentra
el n ́umero dentro del arreglo.*/

#include <stdio.h>

int main()
{
    // Módulo de Declaración: Declarar e inicializar el arreglo y variables.
    
    // 1. Declaración e inicialización del arreglo unidimensional de enteros.
    int enteroArregloNumeros[] = {10, 5, 2, 8, 15, 5, 10, 2, 5, 9};
    
    // 2. Variables para la lógica del programa.
    int enteroNumeroBuscado; // Número que el usuario desea encontrar.
    int enteroContador = 0;    // Contador para las veces que se encuentra el número, inicializado en 0.
    int enteroTamanio = sizeof(enteroArregloNumeros) / sizeof(enteroArregloNumeros[0]); 
    int enteroIndice;           // Variable para el índice del ciclo.

    // Módulo de Entrada 1: Mostrar el arreglo y su tamaño.
    printf("Programa para contar las ocurrencias de un numero en un arreglo.\n");
    printf("Arreglo a inspeccionar (Tamano %i):\n", enteroTamanio);
    // Imprimir el arreglo para referencia
    printf("{");
    for (enteroIndice = 0; enteroIndice < enteroTamanio; enteroIndice++) {
        printf("%i%s", enteroArregloNumeros[enteroIndice], (enteroIndice < enteroTamanio - 1 ? ", " : ""));
    }
    printf("}\n");

    // Módulo de Entrada 2: Solicitar el número a buscar.
    printf("\nIngrese el numero entero que desea buscar en el arreglo:\n");
    scanf("%i", &enteroNumeroBuscado);

    // Módulo de Procesamiento: Ciclo Repetitivo para buscar y contar.
    
    // Estructura for: Recorrer cada elemento del arreglo.
    for (enteroIndice = 0; enteroIndice < enteroTamanio; enteroIndice++)
    {
        // Estructura de Selección (if): Comparar el elemento actual con el número buscado.
        // Si el elemento del arreglo es IGUAL al número buscado.
        if (enteroArregloNumeros[enteroIndice] == enteroNumeroBuscado)
        {
            // Operación de Conteo (Incremento).
            enteroContador++; // Incrementa el contador por cada coincidencia.
        }
    }
    
    // Módulo de Salida: mostrar el resultado final.
    printf("\n--- Resultado Final ---\n");
    printf("El numero %i se encontro %i veces en el arreglo.\n", enteroNumeroBuscado, enteroContador);

    return 0;
}
