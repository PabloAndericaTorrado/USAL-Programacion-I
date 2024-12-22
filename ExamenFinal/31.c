#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototipo de la función
void inicializarArray(int *array, int longitud, int min, int max);

int main()
{
    int longitud = 10; // Tamaño del array
    int array[10];
    int min = 0, max = 100;

    // Inicializar la semilla de números aleatorios
    srand(time(NULL));

    // Llamar a la función para inicializar el array
    inicializarArray(array, longitud, min, max);

    // Mostrar el contenido del array
    printf("Array inicializado con números aleatorios:\n");
    for (int i = 0; i < longitud; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

// Función para inicializar un array con números aleatorios
void inicializarArray(int *array, int longitud, int min, int max)
{
    for (int i = 0; i < longitud; i++)
    {
        // Generar número aleatorio en el rango [min, max]
        array[i] = min + rand() % (max - min + 1);
    }
}
