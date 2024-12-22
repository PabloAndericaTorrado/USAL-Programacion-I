#include <stdio.h>

#define FILAS 3
#define COLUMNAS 4

int main() {
    int mat[FILAS][COLUMNAS] = {
        {0, 1, 2, 3},  // Fila 0
        {10, 11, 12, 13}, // Fila 1
        {20, 21, 22, 23}  // Fila 2
    };

    // Mostrar la matriz
    printf("Matriz completa:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    // Acceso usando notación de punteros
    printf("\nEjemplo de acceso:\n");
    printf("mat[2][0] = %d\n", mat[2][0]);        // Acceso tradicional
    printf("*(*(mat + 2)) = %d\n", *(*(mat + 2))); // Equivalente con punteros

    printf("mat[2][2] = %d\n", mat[2][2]);        // Acceso tradicional
    printf("*(*(mat + 2) + 2) = %d\n", *(*(mat + 2) + 2)); // Equivalente con punteros

    printf("mat[0][2] = %d\n", mat[0][2]);        // Acceso tradicional
    printf("*(*(mat) + 2) = %d\n", *(*(mat) + 2)); // Equivalente con punteros

    return 0;
}
