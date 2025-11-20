/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 1*/

/*Escriba un diagrama de flujo tal que dado como datos dos n ́umeros y
calcular la suma, resta y multiplicaci ́on de dichos n ́umeros.*/

#include <stdio.h>

int main()
{
    // Declaración de variables: se usarán enteros para los números y sus resultados.
    int num1, num2;
    int suma, resta, multiplicacion;

    // Módulo de Entrada: solicitar los dos números al usuario.
    printf("Programa para calcular la suma, resta y multiplicacion de dos numeros.\n");
    printf("Por favor, ingrese el primer numero entero:\n");
    scanf("%i", &num1); // Lectura del primer número [cite: 2860]

    printf("Por favor, ingrese el segundo numero entero:\n");
    scanf("%i", &num2); // Lectura del segundo número [cite: 2860]

    // Módulo de Procesamiento: realizar las operaciones aritméticas.
    // Los operadores aritméticos son: + (suma), - (resta) y * (multiplicación) [cite: 2872]
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    // Módulo de Salida: mostrar los resultados.
    printf("\n--- Resultados ---\n");
    printf("El primer numero ingresado es: %i\n", num1);
    printf("El segundo numero ingresado es: %i\n", num2);
    printf("Suma (%i + %i) = %i\n", num1, num2, suma);
    printf("Resta (%i - %i) = %i\n", num1, num2, resta);
    printf("Multiplicacion (%i * %i) = %i\n", num1, num2, multiplicacion);

    return 0;
}
