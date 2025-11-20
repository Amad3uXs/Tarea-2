/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 8*/

/*Construir un diagrama de flujo que pueda determinar, dados dos n ́umeros
enteros, si un n ́umero es divisor del otro.*/

#include <stdio.h>

int main()
{
    // Declaración de variables: se usan enteros para números y el residuo.
    int enteroNum1, enteroNum2;
    int enteroResiduo;

    // Módulo de Entrada: solicitar los dos números enteros.
    printf("Programa para determinar si un numero es divisor de otro.\n");
    printf("Ingrese el primer numero (Dividendo):\n");
    // Se usa "%i" o "%d" para leer un valor de tipo 'int'
    scanf("%i", &enteroNum1); 

    printf("Ingrese el segundo numero (Divisor):\n");
    scanf("%i", &enteroNum2);

    // Es importante evitar la división por cero. 
    // Usaremos una anidación o un if simple para esto, si el segundo número es 0.
    if (enteroNum2 == 0)
    {
        printf("\nERROR: No se puede dividir entre cero. El segundo numero no puede ser 0.\n");
        return 1; // Termina el programa con error.
    }

    // Módulo de Procesamiento: calcular el residuo usando el operador módulo (%).
    // El operador módulo (%) devuelve el resto de la división entera.
    enteroResiduo = enteroNum1 % enteroNum2;

    // Módulo de Procesamiento: Estructura Condicional (if-else).
    // Si el residuo es 0, el segundo número es divisor del primero.
    if (enteroResiduo == 0)
    {
        printf("\n--- Resultado ---\n");
        printf("SÍ: %i es divisor de %i.\n", enteroNum2, enteroNum1);
    }
    // Si el residuo no es 0, no es divisor.
    else 
    {
        printf("\n--- Resultado ---\n");
        printf("NO: %i NO es divisor de %i (El residuo es %i).\n", enteroNum2, enteroNum1, enteroResiduo);
    }
    
    return 0;
}
