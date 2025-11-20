/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 12*/

/*Hacer un diagrama de flujo que calcule e imprima el producto de los N
primeros n ́umeros naturales.*/

#include <stdio.h>

int main()
{
    // Variables de control y acumulador.
    // enteroN: el número de entrada (hasta dónde multiplicar)
    int enteroN;
    // enteroContador: la variable de 1 hasta N
    int enteroContador = 1; 
    // realProducto: el acumulador multiplicativo. Se usa long long para manejar grandes resultados.
    // Se inicializa en 1, ya que cualquier producto por 0 es 0.
    long long realProducto = 1; 

    // Módulo de Entrada: solicitar el número entero N.
    printf("Programa para calcular el producto de los N primeros numeros naturales (Factorial N!).\n");
    printf("Ingrese el numero entero N:\n");
    // Se usa "%i" para leer un valor de tipo 'int'
    scanf("%i", &enteroN);

    // Módulo de Procesamiento: Validar la restricción del problema (natural o cero)
    // El factorial debe ser entero positivo o cero[cite: 1238].
    if (enteroN < 0)
    {
        printf("\nERROR: El numero debe ser positivo o cero (Factorial no definido para negativos).\n");
        return 1;
    }
    
    // Módulo de Procesamiento: Ciclo Repetitivo while.
    // Se ejecuta el bloque de código mientras la condición sea verdadera.
    while (enteroContador <= enteroN)
    {
        // Operación de Acumulación Multiplicativa.
        // realProducto = realProducto * enteroContador;
        realProducto *= enteroContador; 
        
        // Operación por iteración: incrementar el contador.
        enteroContador++; 
    }
    
    // Módulo de Salida: mostrar el resultado final.
    printf("\n--- Resultado Final ---\n");
    printf("El producto de los %i primeros numeros naturales (%i!) es: %lld\n", 
           enteroN, enteroN, realProducto);

    return 0;
}
