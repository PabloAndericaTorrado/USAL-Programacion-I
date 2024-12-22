#include <stdio.h>
#define FIL 4
#define COL 5
int simetricaPorColumnas(int matriz[FIL][COL], int *filas, int *columnas);
int main()
{
    int filas = 0, columnas = 0;

    // Llenar la matriz manualmente según los valores de la imagen
    int valores[FIL][COL] = {
        {7, 4, 5, 4, 7},
        {12, 1, 3, 1, 12},
        {-3, 12, 0, 12, -3},
        {5, -7, 1, -7, 5}};

          int matriz[FIL][COL] = {
        {7, 4, 5, 4, 7},
        {12, 1, 3, 6, 12},
        {-3, 12, 0, 12, -3},
        {9, -7, 1, -7, 5}};

    int esSimetricaCol = simetricaPorColumnas(matriz, &filas, &columnas);

    if (esSimetricaCol)
    {
        printf("No es simetrica por %d numeros en la fila: %d y columna %d:", esSimetricaCol, filas, columnas);
    }
    else
    {
        printf("Es simétrica");
    }

    return 0;
}

int simetricaPorColumnas(int matriz[FIL][COL], int *filas, int *columnas)
{
    int simetrica = 0;
    *filas = 100;
    *columnas = 100;

    for (int j = 0; j < COL; j++)
    {
        for (int i = 0; i < FIL; i++)
        {
            if (matriz[i][j] != matriz[i][COL-1-j])
            {
                if (i < *filas)
                {
                    *filas = i;
                    *columnas = j;
                }

                simetrica++;
            }
        }
    }

    if (simetrica)
    {
        return simetrica;
    }
    else
    {
        *filas = -1;
        *columnas = -1;
        return 0;
    }
}
