#include "ejercicio3.h"

#include <stdio.h>
#include <stdlib.h>

void ejercicio3() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    printf("El número ingresado es: %d\n", num);

    char *ejemplo;

    if (num == 0)
    {
        ejemplo = "Cero";
    }else if (num < 0)
    {
        ejemplo = "Negativo";
    }else if (num > 0)
    {
        ejemplo = "Positivo";
    }
    printf("El número ingresado fue: %d y es %s\n", num, ejemplo);
}
