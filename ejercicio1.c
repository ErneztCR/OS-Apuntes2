// Input y Output básico
// Escriba un programa que reciba un número entero del usuario y lo imprima de nuevo a la terminal.

#include "ejercicio1.h"

#include <stdio.h>
#include <stdlib.h>

void ejercicio1() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    printf("El número ingresado es: %d\n", num);
}
