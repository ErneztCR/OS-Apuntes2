// Thread & Mutex
// Escriba un programa con threads y mutex, cree dos hilos, estos dos hilos
// compartirán una variable global y deben escribir de forma sincronizada
// en ella. Utilice un mutex para resolver este problema.

# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include "ejercicio11.h"

#define NUM_THREADS_2 2
#define ITERATIONS_2 1000000

int contador = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *incrementar(void *arg) {
    int id = *((int *) arg);

    for (int i = 0; i < ITERATIONS_2; i++) {
        pthread_mutex_lock(&mutex);
        contador++; // Sección crítica
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);
}

void ejercicio11() {
    pthread_t threads[NUM_THREADS_2];
    int ids[NUM_THREADS_2];

    for (int i = 0; i < NUM_THREADS_2; i++) {
        ids[i] = i;
        pthread_create(&threads[i], NULL, incrementar, &ids[i]); 
    }

    for (int i = 0; i < NUM_THREADS_2; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("El valor del contador es: %d\n", contador);
}
