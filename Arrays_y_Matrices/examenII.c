#include <stdio.h>
#define MIN_VALUE 1
#define MAX_VALUE 99
int main()
{

    int filas, columnas;
    int filaEje, columnaEje;
    int num;

    do
    {
        printf("Dime el número de filas: ");
        scanf("%d", &filas);
        printf("Dime el número de columnas: ");
        scanf("%d", &columnas);
    } while (filas < 2 || filas > 20 || columnas < 5 || columnas > 50);

    // int matriz[filas][columnas];
    int matriz[7][5] = {
        {30, 39, 48, 1, 10},
        {38, 47, 7, 9, 18},
        {46, 6, 8, 17, 26},
        {5, 14, 16, 25, 34},
        {13, 15, 24, 33, 42},
        {21, 23, 32, 41, 43},
        {22, 31, 40, 49, 27}};

    do
    {
        printf("Dime el número de la fila del elemento eje: ");
        scanf("%d", &filaEje);
        printf("Dime el número de la columna del elemento eje: ");
        scanf("%d", &columnaEje);
    } while (filaEje < 1 || filaEje > filas || columnaEje < 1 || columnaEje > columnas);
    filaEje--;
    columnaEje--;

    /*
        printf("Ahora introduzca los valores de la matriz:\n");
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                printf("Introduzca el elemento (%d, %d) (entre %d y %d): ", i + 1, j + 1, MIN_VALUE, MAX_VALUE);
                do
                {
                    scanf("%d", &matriz[i][j]);
                    if (matriz[i][j] < MIN_VALUE || matriz[i][j] > MAX_VALUE)
                    {
                        printf("Valor inválido. Introduzca un valor entre %d y %d: ", MIN_VALUE, MAX_VALUE);
                    }
                } while (matriz[i][j] < MIN_VALUE || matriz[i][j] > MAX_VALUE);
            }
        }
    */
    float suma = 0, medio = 0, contador = 0;
    // valor medio
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            suma += matriz[i][j]; // Suma todos los valores
            printf("%d\n", matriz[i][j]);
            contador++;

            // Cuando se alcanza el elemento eje, detenemos el cálculo
            if (i == filaEje && j == columnaEje)
            {
                break;
            }
        }

        // Detenemos el bucle externo si ya hemos llegado al elemento eje
        if (i == filaEje)
        {
            break;
        }
    }
    printf("valor medio: %0.2f", suma / contador);

    // valor minimo
    int min = 100;
    for (int i = 3; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {   
            if (matriz[i][j] != matriz[filaEje][0] && matriz[i][j] != matriz[filaEje][1])
            {
                printf("\n%d",matriz[i][j]);
            if (min > matriz[i][j])
            {
                min = matriz[i][j];
            }
            }
        }
    }
    printf("\nvalor medio: %d", min);

    return 0;
}