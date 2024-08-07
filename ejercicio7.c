// Punteros
// Escriba un programa que defina un número entero y un puntero a ese número entero. 
// Imprima ambos valores.

#include <stdio.h>
#include <stdlib.h>
#include "ejercicio7.h"

void ejercicio7() {
    int numero = 10;
    int *puntero = &numero;

    printf("Número: %d\n", numero);
    printf("Puntero: %p\n", puntero);
    printf("La direccion de memoria del puntero es: %p\n", &puntero);
}
