#include <stdio.h>


int main() {
    int filas, columnas;
    int matriz[25][25];
    int maximo, minimo;
    int i, j;

    printf("Introduce el número de filas (máximo 25): ");
    scanf("%d", &filas);
    printf("Introduce el número de columnas (máximo 25): ");
    scanf("%d", &columnas);

    if (filas > 25 || columnas > 25 || filas <= 0 || columnas <= 0) {
        printf("Error: las dimensiones deben estar entre 1 y 25.\n");
        return 1;
    }

    printf("Introduce los elementos de la matriz:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    maximo = minimo = matriz[0][0];

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            if (matriz[i][j] > maximo) {
                maximo = matriz[i][j];
            }
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
            }
        }
    }

    printf("El elemento máximo de la matriz es: %d\n", maximo);
    printf("El elemento mínimo de la matriz es: %d\n", minimo);

    printf("Posiciones de los elementos que coinciden con el máximo:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            if (matriz[i][j] == maximo) {
                printf("Fila %d, Columna %d\n", i, j);
            }
        }
    }

        // Mostrar la matriz
    printf("\nMatriz ingresada:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
