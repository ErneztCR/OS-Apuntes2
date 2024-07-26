// For loop
// Escriba un programa que imprima los primeros 10 números naturales.
// El programa los tiene que imprimir en orden ascendente y descendente.

#include "ejercicio4.h"

#include <stdio.h>
#include <stdlib.h>

void ejercicio4() {
    
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    printf("\n\n");

    for (int i = 10; i >= 0; i--)
    {
        printf("%d\n", i);
    }
}
