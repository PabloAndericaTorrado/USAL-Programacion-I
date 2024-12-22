#include <stdio.h>
#include <stdlib.h>
#define filas 4
#define columnas 5

int main()
{
    float tabla[filas][columnas] = {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35},
        {41, 42, 43, 44, 45}};
    float matriz[filas][columnas];
    float matriz2[columnas][filas];
    float matriz3[columnas][filas];

    for (size_t i = 0; i < filas; i++)
    {
        for (size_t j = 0; j < columnas; j++)
        {
            matriz3[j][i] = tabla[i][j]; //i=0 y j=1 en i=1 j=0 
        }
        
    }
    

    printf("Matriz original:\n\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%3.0f ", tabla[i][j]);
        }
        printf("\n");
    }
    printf("\n");



    // Matriz invertida por filas
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[filas - 1 - i][j] = tabla[i][j];
        }
    }
    printf("Matriz invertida por filas:\n\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%3.0f ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

      for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)  //i = 0 j = 1 en i = 3 y j = 3
        {
            matriz2[columnas -1 - j][filas - 1 -i] = tabla[i][j];
        }
    }

    printf("Matriz invertida completamente:\n\n");
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            printf("%3.0f ", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\n");


      printf("a:\n\n");
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            printf("%3.0f ", matriz3[i][j]);
        }
        printf("\n");
    }
    printf("\n");

   

    return 0;
}
