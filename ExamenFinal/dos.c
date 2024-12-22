#include <stdio.h>

#define FILAS 8
#define COLUMNAS 8
#define CABALLO_BLANCO 'B'
#define CABALLO_NEGRO 'N'
#define VACIO '.'

// Vectores de movimientos del caballo
char movimientosX[] = {2, 1, -1, -2, -2, -1, 1, 2};
char movimientosY[] = {1, 2, 2, 1, -1, -2, -2, -1};
int nMovimientos = sizeof(movimientosX) / sizeof(movimientosX[0]);
int getMovimientos(char tablero[FILAS][COLUMNAS], int fila, int columna, char resultado[FILAS][COLUMNAS], int *totalMovimientos);

// Implementación del main
int main()
{
    // Tablero inicializado con casillas vacías
    char tablero[FILAS][COLUMNAS] = {
        {CABALLO_NEGRO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO},
        {VACIO, CABALLO_NEGRO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO},
        {VACIO, VACIO, VACIO, CABALLO_BLANCO, VACIO, VACIO, VACIO, VACIO},
        {VACIO, VACIO, VACIO, VACIO, VACIO, CABALLO_BLANCO, VACIO, VACIO},
        {VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO},
        {VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO},
        {VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO},
        {VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO, VACIO}};

    char resultado[FILAS][COLUMNAS];
    int totalMovimientos;

    // Coordenadas del caballo a mover (fila 2, columna 3)
    int fila = 2;
    int columna = 3;

    // Llamada a la función
    int resultadoFuncion = getMovimientos(tablero, fila, columna, resultado, &totalMovimientos);

    // Mostrar resultado
    if (resultadoFuncion == 0)
    {
        printf("Tablero actualizado:\n");
        for (int i = 0; i < FILAS; i++)
        {
            for (int j = 0; j < COLUMNAS; j++)
            {
                printf("%c ", resultado[i][j]);
            }
            printf("\n");
        }
        printf("Total de movimientos posibles: %d\n", totalMovimientos);
    }
    else if (resultadoFuncion == -1)
    {
        printf("Error: Coordenadas fuera del tablero.\n");
    }
    else if (resultadoFuncion == -2)
    {
        printf("Error: No hay un caballo en las coordenadas indicadas.\n");
    }

    return 0;
}

int getMovimientos(char m[FILAS][COLUMNAS], int fila, int columna, char resultado[FILAS][COLUMNAS], int *movimientos)
{

    if (fila < 0 || fila > FILAS || columna < 0 || columna > COLUMNAS)
    {
        return -1;
    }

    char caballo = m[fila][columna];
    if (caballo != CABALLO_BLANCO && caballo != CABALLO_NEGRO)
    {
        return -2;
    }

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            resultado[i][j] = m[i][j];
        }
    }

    resultado[fila][columna] = 'O';

    int mov = 0;

    for (int i = 0; i < nMovimientos; i++)
    {
        int nuevaFila = fila + movimientosX[i];
        int nuevaColumna = columna + movimientosY[i];

        char destino = resultado[nuevaFila][nuevaColumna];

        if (destino == VACIO)
        {
            resultado[nuevaFila][nuevaColumna] = 'x';
        }
        else if (destino == CABALLO_BLANCO && caballo == CABALLO_NEGRO || destino == CABALLO_NEGRO && caballo == CABALLO_BLANCO)
        {
            resultado[nuevaFila][nuevaColumna] = '!';
            mov++;
        }
    }

    *movimientos = mov;
    return 0;
}