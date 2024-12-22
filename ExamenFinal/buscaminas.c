#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 5
#define COLUMNAS 5
#define MINAS 5
#define VACIO '.'
#define MINA '*'
char tablero[FILAS][COLUMNAS];
char tablero_visible[FILAS][COLUMNAS];
void inicializar_tablero()
{
    int i, j;
    for (i = 0; i < FILAS; i++)
    {
        for (j = 0; j < COLUMNAS; j++)
        {
            tablero[i][j] = VACIO;
            tablero_visible[i][j] = VACIO;
        }
    }
}
void imprimir_tablero()
{
    int i, j;
    for (i = 0; i < FILAS; i++)
    {
        for (j = 0; j < COLUMNAS; j++)
        {
            printf("%c ", tablero_visible[i][j]);
        }
        printf("\n");
    }
}
void colocar_minas()
{
    srand(time(NULL));
    int minas_colocadas = 0;
    while (minas_colocadas < MINAS)
    {
        int fila = rand() % FILAS;
        int columna = rand() % COLUMNAS;
        if (tablero[fila][columna] != MINA)
        {
            tablero[fila][columna] = MINA;
            minas_colocadas++;
        }
    }
}
void jugar()
{
    int fila, columna;

    while (1)
    {
        printf("Selecciona una fila y una columna (ejemplo: 1 2): ");
        scanf("%d %d", &fila, &columna);
        if (tablero[fila][columna] == MINA)
        {
            printf("¡Has perdido!\n");
            break;
        }
        else
        {
            // Lógica para revelar casillas adyacentes si están vacías
            // Aquí debes implementar la lógica para revelar casillas adyacentes
            // o marcarlas con un número que indica la cantidad de minas adyacentes
            tablero_visible[fila][columna] = 'o'; // Ejemplo, marca la casilla como seleccionada
            imprimir_tablero();
        }
    }
}
int main()
{
    inicializar_tablero();
    colocar_minas();
    imprimir_tablero();
    jugar();
    return 0;
}
