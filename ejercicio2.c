// Leyendo archivos
// Escriba un programa que le un archivo de texto y lo imprima a la terminal.

#include "ejercicio2.h"

#include <stdio.h>
#include <stdlib.h>

int ejercicio2() {

    FILE *file = fopen("../archivo.txt", "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo\n");
        return 1;
    }

    char archivo;

    while ((archivo = fgetc(file)) != EOF) {
        printf("%c", archivo);
    }
}
