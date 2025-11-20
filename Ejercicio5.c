/*David Alejandro Martínez Vega L´Englisse
tarea 2 ejercicio 5*/

/*En un negocio de productos electrodom ́esticos aplican un descuento del
8% a todos aquellos clientes cuya compra es superior a $2,500. Dado como
dato el monto de la compra del cliente, calcule lo que el cliente debe pagar.
Hacer el diagrama de flujo correspondiente.*/

#include <stdio.h>

// Definimos las constantes para el monto mínimo y el descuento.
#define MONTO_MINIMO 2500.00
#define DESCUENTO 0.08  // 8% en formato decimal

int main()
{
    // Declaración de variables: usamos 'double' para precisión monetaria.
    double realMontoCompra;
    double realMontoAPagar;
    double realMontoDescontado = 0.0; // Inicializamos a 0.0

    // Módulo de Entrada: solicitar el monto total de la compra.
    printf("Programa de calculo de descuento en compras (si es > $%.2lf, aplica %.0f%%).\n", MONTO_MINIMO, DESCUENTO * 100.0);
    printf("Ingrese el monto total de la compra: $");
    // Se usa "%lf" para leer un valor de tipo 'double'
    scanf("%lf", &realMontoCompra);

    // Inicializamos el monto a pagar con el monto total (caso por defecto sin descuento)
    realMontoAPagar = realMontoCompra;

    // Módulo de Procesamiento: aplicar la estructura condicional (if).
    // Estructura if: Si la condición se cumple (verdadera), se ejecuta el bloque de código.
    if (realMontoCompra > MONTO_MINIMO) 
    {
        // Calcular el monto del descuento
        realMontoDescontado = realMontoCompra * DESCUENTO;
        
        // Recalcular el monto a pagar
        realMontoAPagar = realMontoCompra - realMontoDescontado;
        
        printf("\n¡FELICIDADES! Su compra supera los $%.2lf.\n", MONTO_MINIMO);
        printf("Se aplica un descuento del %.0f%%.\n", DESCUENTO * 100.0);
    }
    else // Este 'else' es opcional, pero ayuda a informar al usuario que no hubo descuento.
    {
        printf("\nLa compra no supera los $%.2lf, por lo tanto, no aplica descuento.\n", MONTO_MINIMO);
    }
    
    // Módulo de Salida: mostrar el resultado.
    printf("\n--- Resumen de la Compra ---\n");
    printf("Monto de la compra: $%.2lf\n", realMontoCompra);
    printf("Monto descontado:  -$%.2lf\n", realMontoDescontado);
    printf("------------------------------\n");
    printf("Monto FINAL a pagar: $%.2lf\n", realMontoAPagar);

    return 0;
}
