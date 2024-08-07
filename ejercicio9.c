// Forks
// Escriba un programa con forks que imprima un mensaje desde el padre y
// el hijo. Use el método wait para que el padre espere a que su hijo termine.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include "ejercicio9.h"

void ejercicio9() {
    pid_t pid = fork();

    if (pid == -1) {
        perror("Error al crear el proceso hijo");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {
        printf("Soy el proceso hijo\n");
    } else {
        wait(NULL);
        printf("Soy el proceso padre\n");
    }
}