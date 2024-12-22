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
    int max_filas = 0;
    int max_columnas = 0;

    for (size_t i = 0; i < filas; i++)
    {
        for (size_t j = 0; j < columnas; j++)
        {
            if (max_filas < tabla[i][j]){
                    max_filas = tabla[i][j];
            }

        }
            //printf("%d\n",max_filas);
            max_filas = 0;
        
    }

        for (size_t i = 0; i < columnas; i++)
    {
        for (size_t j = 0; j < filas; j++)
        {
            if (max_columnas < tabla[j][i]){
                    max_columnas = tabla[j][i];
            }

        }
            //printf("%d\n",max_columnas);
            max_columnas = 0;
        
    }

    

    

    return 0;
}
