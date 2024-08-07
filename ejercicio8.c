// Pointer Arithmetic
// Cree un programa que recorra una lista utilizando aritmética de punteros.

#include <stdio.h>
#include <stdlib.h>
#include "ejercicio8.h"

void ejercicio8() {
    int lista[] = {1, 2, 3, 4, 5};
    int *puntero = lista;

    int n = sizeof(lista) / sizeof(lista[0]); // Tamaño de la lista

    for (int i = 0; i < n; i++) {
        printf("Elemento %d: %d\n", i, *puntero);
        puntero++;
    }
}
