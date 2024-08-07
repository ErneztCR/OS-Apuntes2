// Switch Case
// Reciba un número de la terminal, elija 3 números (el bueno, el malo y el feo), 
// en el switch debe utilizar estos tres números e imprimir los strings anteriores 
// de acuerdo a su preferencia. Añada un caso por defecto que imprima un "No sé".

#include <stdio.h>
#include <stdlib.h>
#include "ejercicio5.h"

void ejercicio5() {
    int numero;
    printf("Ingrese un número: \n");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("El bueno\n");
        break;
    case 2:
        printf("El malo\n");
        break;
    case 3:
        printf("El feo\n");
        break;
    default:
        printf("No sé\n");
        break;
    }
}
