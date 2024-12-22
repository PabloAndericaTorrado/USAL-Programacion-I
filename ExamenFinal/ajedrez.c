#include <stdio.h>
#define FILAS 80
#define COLUMNAS 80
#define CABALLO_BLANCO 'B'
#define CABALLO_NEGRO 'N'
#define VACIO '.'
// Aquí estaría el prototipo de imprimirTablero, pero no te lo mostramos
// Vector de componente X de movimientos del caballo
char movimientosX[] = {2, 1, -1, -2, -2, -1, 1, 2};
// Vector de componente Y de movimientos del caballo
char movimientosY[] = {1, 2, 2, 1, -1, -2, -2, -1};
// Cantidad de movimientos posibles
int nMovimientos = sizeof(movimientosX) / sizeof(movimientosX[0]);
int getMovimientos(char tablero[FILAS][COLUMNAS], int fila, int columna, char matriz[FILAS][COLUMNAS], int *movimientos);
int main()
{
    char tablero[FILAS][COLUMNAS] = {
        {CABALLO_NEGRO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO},
        {VACIO, CABALLO_NEGRO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO},
        {VACIO, VACIO, VACIO, CABALLO_BLANCO, VACIO, VACIO, VACIO, VACIO},
        {VACIO, VACIO, VACIO, VACIO, VACIO, CABALLO_BLANCO, VACIO, VACIO},
        {VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO},
        {VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO},
        {VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO},
        {VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO}};

    // Tablero
    int fil = 8;
    int col = 8;
    // Para pruebas, colocamos unos caballos
    tablero[2][3] = CABALLO_BLANCO;
    tablero[0][0] = CABALLO_NEGRO;
    tablero[1][1] = CABALLO_NEGRO;
    tablero[3][5] = CABALLO_BLANCO;
    // imprimirTablero(tablero, fil, col);// Aquí llamamos a getMovimientos para uno de nuestros caballos, p.e. el que está en [2][3]
    char matrizRes[FILAS][COLUMNAS];
    int nCapsOPosibles = 0; // Contador de movimientos
    int estado = getMovimientos(tablero, 2, 3, matrizRes, &nCapsOPosibles);
    if (estado == 0)
    {
        printf("Tablero actualizado:\n");
        for (int i = 0; i < FILAS; i++)
        {
            for (int j = 0; j < COLUMNAS; j++)
            {
                printf("%c ", matrizRes[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        // Hubo error
        printf("Error: %d\n", estado);
    }

    return 0;
}
// Aquí estaría la definición de la función imprimirTablero, pero tampoco te la enseñamos.

int getMovimientos(char tablero[FILAS][COLUMNAS], int fila, int columna, char matriz[FILAS][COLUMNAS], int *movimientos)
{
    char caballo = matriz[fila][columna];
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            matriz[i][j] = tablero[i][j];
        }
    }

    if (fila >= FILAS || fila < 0 || columna >= COLUMNAS || columna < 0)
    {
        return -1;
    }

    if (tablero[fila][columna] != CABALLO_BLANCO && tablero[fila][columna] != CABALLO_NEGRO)
    {
        return -2;
    }
    else
    {
        matriz[fila][columna] = 'O';
    }

    for (int i = 0; i < nMovimientos; i++)
    {
        if (matriz[fila - movimientosX[i]][columna - movimientosY[i]] == '.')
        {
            matriz[fila - movimientosX[i]][columna - movimientosY[i]] = 'x';
            (*movimientos)++;
        }
        else if (caballo == CABALLO_BLANCO && matriz[fila - movimientosX[i]][columna - movimientosY[i]] == CABALLO_NEGRO || caballo == CABALLO_NEGRO && matriz[fila - movimientosX[i]][columna - movimientosY[i]] == CABALLO_BLANCO)
        {
            matriz[fila - movimientosX[i]][columna - movimientosY[i]] = '!';
            (*movimientos)++;
        }
    }

    return 0;
}