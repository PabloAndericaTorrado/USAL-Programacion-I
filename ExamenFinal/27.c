#include <stdio.h>

#define FIL 15
#define COL 15

int mat[FIL][COL];

void cargarMatriz(int matrizA[][COL], int nfil, int ncol, int num);
void verMatriz(int matrizA[][COL], int nfil, int ncol);
void verColumna(int vectorX[], int dim);
int extraeColumnaMaximo(int matrizA[][COL], int nfil, int ncol, int vectorX[]);

int main()
{
    int filas, columnas, num;
    int vec[FIL]; // Vector para almacenar la columna extraída.

    do
    {
        printf("Introduce el número de filas (1-%d): ", FIL);
        scanf("%d", &filas);
        printf("Introduce el número de columnas (1-%d): ", COL);
        scanf("%d", &columnas);
    } while (filas < 1 || filas > FIL || columnas < 1 || columnas > COL);

    do
    {
        printf("Introduce un número inicial (1-%d): ", FIL * COL);
        scanf("%d", &num);
    } while (num < 1 || num > FIL * COL);

    cargarMatriz(mat, filas, columnas, num);
    verMatriz(mat, filas, columnas);

    int colMax = extraeColumnaMaximo(mat, filas, columnas, vec);
    printf("La columna con el valor máximo es: %d\n", colMax + 1);
    printf("Valores de la columna:\n");
    verColumna(vec, filas);

    return 0;
}

void cargarMatriz(int matrizA[][COL], int nfil, int ncol, int num)
{
    int contador = 3;
    for (int i = 0; i < nfil; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            if (contador % 2 == 0)
                num -= contador;
            else
                num += contador;

            matrizA[i][j] = num;
            contador++;
        }
    }
}

void verMatriz(int matrizA[][COL], int nfil, int ncol)
{
    printf("Matriz generada:\n");
    for (int i = 0; i < nfil; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf("%4d ", matrizA[i][j]);
        }
        printf("\n");
    }
}

void verColumna(int vectorX[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%d ", vectorX[i]);
    }
    printf("\n");
}

int extraeColumnaMaximo(int matrizA[][COL], int nfil, int ncol, int vectorX[])
{
    int max = matrizA[0][0];
    int columnaMax = 0;

    // Encontrar la columna con el valor máximo.
    for (int j = 0; j < ncol; j++)
    {
        for (int i = 0; i < nfil; i++)
        {
            if (matrizA[i][j] > max)
            {
                max = matrizA[i][j];
                columnaMax = j;
            }
        }
    }

    // Extraer la columna máxima.
    for (int i = 0; i < nfil; i++)
    {
        vectorX[i] = matrizA[i][columnaMax];
    }

    return columnaMax; // Retorna el índice de la columna.
}
