#include <stdio.h>
#include <stdlib.h>
#define min 3
#define max 25

void salida(float *m, int fil, int col)
{
    printf("Salida de la Matriz:\n\n");
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3.0f", *(m + i * col + j)); // Usar aritmética de punteros para acceder a los elementos
        }
        printf("\n");
    }
}

int main()
{

    int fil, col;
    printf("Introduzca el nº de filas ==> ");
    scanf("%d", &fil);
    printf("Introduzca el nº de columnas ==> ");
    scanf("%d", &col);

if (fil < 3 || fil > 25 || col < 3 || col > 25) {
    return 0;
}


    float m[fil][col];
    int num = 0;

    for (size_t i = 0; i < fil; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            printf("Introduzca el Nº de la posicion: %d %d ", i + 1, j + 1);
            scanf("%d", &num);
            m[i][j] = num;
        }
    }

    salida(m, fil, col);

    int sumaMarco = 0, sumaMedio = 0;

    // Sumar la primera fila
    for (int j = 0; j < col; j++)
    {
        sumaMarco += m[0][j];
    }

    // Sumar la última fila
    for (int j = 0; j < col; j++)
    {
        sumaMarco += m[fil - 1][j];
    }

    // Sumar la primera y última columna (excluyendo las esquinas que ya se sumaron)
    for (int i = 1; i < fil - 1; i++)
    {
        sumaMarco += m[i][0];       // Primera columna
        sumaMarco += m[i][col - 1]; // Última columna
    }

    printf("La suma de los elementos del marco es: %d\n", sumaMarco);



  for (size_t i = 1; i < fil - 1; i++)
    {
        for (size_t j = 1; j < col- 1; j++)
        {
           sumaMedio += m[i][j];
        }
    }

        printf("La suma de los elementos del medio es: %d\n", sumaMedio);






    if (sumaMarco > sumaMedio)
    {
        printf("ES UNA MATRIZ MARCOOO");
    }
    else
    {
        printf("NOOOOOOOOOOOOOOOO ES UNA MATRIZ MARCOOO");
    }

    return 0;
}