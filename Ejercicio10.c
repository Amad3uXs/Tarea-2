/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 10*/

/*Construya un diagrama de flujo que lea 100 n ́umeros naturales y cuente
cu ́antos de ellos son positivos, negativos o nulos.*/

#include <stdio.h>

// Definimos el número de elementos a leer. Se usa 5 para una prueba rápida, 
// pero se podría cambiar a 100 fácilmente.
#define NUM_LECTURAS 5

int main()
{
    // Variables de control y contadores.
    int enteroContador;         // Contador del ciclo for
    int enteroNumeroLeido;    // El número ingresado por el usuario
    int enteroPositivos = 0;  // Contador de números positivos
    int enteroNegativos = 0;  // Contador de números negativos
    int enteroNulos = 0;      // Contador de números nulos (cero)

    // Módulo de Entrada y Procesamiento: ciclo repetitivo.
    printf("Programa para clasificar %i numeros en positivos, negativos o nulos.\n", NUM_LECTURAS);
    
    // Estructura for: Itera un número fijo de veces.
    for (enteroContador = 1; enteroContador <= NUM_LECTURAS; enteroContador++)
    {
        printf("\nIngrese el numero %i de %i:\n", enteroContador, NUM_LECTURAS);
        // Lectura del número
        scanf("%i", &enteroNumeroLeido);

        // Estructura de Selección Anidada (if-else if-else): clasificar el número.
        // Un número es Positivo si es mayor a 0.
        if (enteroNumeroLeido > 0)
        {
            enteroPositivos = enteroPositivos + 1;
        }
        // De lo contrario, un número es Negativo si es menor a 0.
        else if (enteroNumeroLeido < 0)
        {
            enteroNegativos = enteroNegativos + 1;
        }
        // De lo contrario (si no es mayor ni menor), es Nulo (cero).
        else 
        {
            enteroNulos = enteroNulos + 1;
        }
    }

    // Módulo de Salida: mostrar el conteo final.
    printf("\n--- Conteo Final ---\n");
    printf("Numeros leidos: %i\n", NUM_LECTURAS);
    printf("Numeros Positivos: %i\n", enteroPositivos);
    printf("Numeros Negativos: %i\n", enteroNegativos);
    printf("Numeros Nulos (Cero): %i\n", enteroNulos);

    return 0;
}
