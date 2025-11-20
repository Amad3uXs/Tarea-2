/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 15*/

/*Escribir un diagrama de flujo tal que dado como entrada un arreglo unidi-
mensional de enteros, determinar cu ́antos de ellos son positivos, negativos
o nulos.*/

#include <stdio.h>

int main()
{
    // Módulo de Declaración: Declarar e inicializar el arreglo y variables.
    
    // 1. Declaración e inicialización del arreglo (contiene positivos, negativos y nulos).
    int enteroArregloNumeros[] = {10, -5, 0, 8, -15, 0, 10, -2, 5, 9};
    
    // 2. Variables contadoras, inicializadas en 0.
    int enteroPositivos = 0;
    int enteroNegativos = 0;
    int enteroNulos = 0;
    
    // 3. Variables de control del ciclo.
    int enteroTamanio = sizeof(enteroArregloNumeros) / sizeof(enteroArregloNumeros[0]);
    int enteroIndice;

    // Módulo de Entrada: Mostrar el arreglo a clasificar.
    printf("Programa para clasificar los elementos de un arreglo.\n");
    printf("Arreglo a inspeccionar (Tamano %i):\n", enteroTamanio);
    
    // Imprimir el arreglo para referencia
    printf("{");
    for (enteroIndice = 0; enteroIndice < enteroTamanio; enteroIndice++) {
        printf("%i%s", enteroArregloNumeros[enteroIndice], (enteroIndice < enteroTamanio - 1 ? ", " : ""));
    }
    printf("}\n");

    // Módulo de Procesamiento: Ciclo Repetitivo para clasificar y contar.
    
    // Estructura for: Recorrer cada elemento del arreglo.
    for (enteroIndice = 0; enteroIndice < enteroTamanio; enteroIndice++)
    {
        // Almacenar el elemento actual para claridad
        int enteroElementoActual = enteroArregloNumeros[enteroIndice];
        
        // Estructura de Selección Anidada (if-else if-else): clasificar el elemento.
        // Si el número es Positivo (mayor a 0).
        if (enteroElementoActual > 0)
        {
            enteroPositivos++;
        }
        // De lo contrario, si es Negativo (menor a 0).
        else if (enteroElementoActual < 0)
        {
            enteroNegativos++;
        }
        // De lo contrario (si no es mayor ni menor), es Nulo (cero).
        else 
        {
            enteroNulos++;
        }
    }
    
    // Módulo de Salida: mostrar el conteo final.
    printf("\n--- Conteo de Elementos ---\n");
    printf("Total de elementos: %i\n", enteroTamanio);
    printf("Elementos Positivos: %i\n", enteroPositivos);
    printf("Elementos Negativos: %i\n", enteroNegativos);
    printf("Elementos Nulos (Cero): %i\n", enteroNulos);

    return 0;
}
