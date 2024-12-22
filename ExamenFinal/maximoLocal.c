#include <stdio.h>
#define COL 3 // Cambiamos el tamaño máximo de columnas a 3

int primerMaximoLocal(int (*m)[COL], int fil, int col, int *ifilpml, int *icolpml);

int main(void)
{
    int matrizA[][3] = { // Matriz de prueba
                        {1, 2, 3},
                        {5, 16, 7},
                        {9, 10, 15}};
    int filas = 3, columnas = 3; // Dimensiones de la matriz
    int filMaxLoc, colMaxLoc;    // Coordenadas del máximo local

    // Mostrar la matriz de entrada
    printf("\nMatriz de estudio:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("\t%d", matrizA[i][j]);
        }
        printf("\n");
    }

    // Llamar a la función para buscar el máximo local
    if (primerMaximoLocal(matrizA, filas, columnas, &filMaxLoc, &colMaxLoc))
    {
        printf("\nTiene un máximo local en el elemento con fila %d y columna %d\n\n", filMaxLoc, colMaxLoc);
    }
    else
    {
        printf("\nNo se encontró un máximo local en la matriz\n\n");
    }

    return 0;
}

int primerMaximoLocal(int (*m)[COL], int fil, int col, int *ifilpml, int *icolpml)
{
    // Recorremos la matriz, ignorando los bordes
    for (int i = 1; i < fil - 1; i++)
    {
        for (int j = 1; j < col - 1; j++)
        {
            int esMaximoLocal = 1; // Suponemos que el elemento es un máximo local

            // Verificar los 8 vecinos
            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    if (!(di == 0 && dj == 0)) // Ignoramos el propio elemento
                    {
                        if (m[i][j] <= m[i + di][j + dj])
                        {
                            esMaximoLocal = 0; // No es mayor que algún vecino
                            break;
                        }
                    }
                }
                if (!esMaximoLocal)
                    break; // Salimos si no es máximo local
            }

            // Si es un máximo local, almacenamos las coordenadas y salimos
            if (esMaximoLocal)
            {
                *ifilpml = i;
                *icolpml = j;
                return 1;
            }
        }
    }

    // Si no encontramos un máximo local
    return 0;
}
