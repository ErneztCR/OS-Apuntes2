// While Loop
// Escriba un programa que calcule el factorial de un número utilizando un while.

#include <stdio.h>
#include <stdlib.h>
#include "ejercicio6.h"

unsigned long long ejercicio6() {
    unsigned long long numero;
    int resultado = 1;

    printf("Ingrese un número: \n");
    scanf("%d", &numero);

    while (numero > 0)
    {
        resultado = resultado * numero;
        numero--;
    }
    return resultado;
}
