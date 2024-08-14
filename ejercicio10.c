// IPC
// Escriba un programa con forks donde el padre le comunique a sus hijos
// su pid mediante un pipe.

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include "ejercicio10.h"

int ejercicio10() {
    
    int pipe_fd [2];

    if (pipe(pipe_fd) == -1)
    {
        printf("Error al crear el pipe\n");
        return -1;
    }

    pid_t pid = fork();

    if (pid == -1) {
        perror("Error al crear el proceso hijo");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {
        pid_t mensajeRecibido;
        close(pipe_fd[1]);
        read(pipe_fd[0], &mensajeRecibido, sizeof(mensajeRecibido));
        close(pipe_fd[0]);
        printf("Soy el proceso hijo\n");
        return 0;
    } else {
        close(pipe_fd[0]);
        write(pipe_fd[1], &pid, sizeof(pid));
        close(pipe_fd[1]);
        wait(NULL);
        printf("Soy el proceso padre\n");
        return 0;
    }
    
}