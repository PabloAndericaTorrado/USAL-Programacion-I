#include <stdio.h>

int main()
{

    int semanas, muestras;

    float matriz[5][8] = {
        {207.4, 301.2, 222.1, 302.3, 198.3, 167.1, 170.9, 192.0},
        {106.3, 302.3, 201.3, 325.2, 103.2, 111.0, 302.2, 205.2},
        {205.1, 111.4, 304.5, 192.5, 183.3, 125.7, 195.4, 207.2},
        {178.9, 198.1, 222.7, 158.4, 207.8, 199.3, 302.1, 174.3},
        {205.3, 192.0, 248.9, 142.5, 125.8, 111.2, 192.1, 155.9}};

    do
    {
        printf("Dime el número de filas: ");
        scanf("%d", &semanas);
        printf("Dime el número de columnas: ");
        scanf("%d", &muestras);
    } while (semanas < 1 || semanas > 30 || muestras < 1 || muestras > 50);

    /*

    for (int i = 0; i < semanas; i++)
    {
        for (int j = 0; j < muestras; j++)
        {
            printf("Semana %d, Muestra %d: \n", semanas + 1, muestras + 1);
            scanf("%f", matriz[i][j]);
        }
    }
*/

    // MEDIA
    float suma = 0, media = 0;
    for (int j = 0; j < muestras; j++)
    {
        suma = 0;
        for (int i = 0; i < semanas; i++)
        {
            suma = suma + matriz[i][j];
        }
        printf("Muestra %d, Media: %0.1f\n", j + 1, suma / semanas);
    }
    printf("INFORME CONSUMO MAXIMO POR SEMANA\n");
    printf("=================================\n");
    printf("SEMANA   MAXIMO\n");
    float maxSemana = 0;

    for (int i = 0; i < semanas; i++)
    {
        maxSemana = 0;
        for (int j = 0; j < muestras; j++)
        {

            if (maxSemana < matriz[i][j])
            {
                maxSemana = matriz[i][j];
            }
        }

        printf("  %d   %0.1f\n", i + 1, maxSemana);
    }

    // maximo general
    for (int i = 0; i < semanas; i++)
    {

        for (int j = 0; j < muestras; j++)
        {

            if (maxSemana < matriz[i][j])
            {
                maxSemana = matriz[i][j];
            }
        }
    }
    printf("Máximo: %0.1f\n", maxSemana);

    // minimo general
    for (int i = 0; i < semanas; i++)
    {

        for (int j = 0; j < muestras; j++)
        {

            if (maxSemana > matriz[i][j])
            {
                maxSemana = matriz[i][j];
            }
        }
    }
    printf("Mínimo: %0.1f\n", maxSemana);
    suma = 0;
    // media general
    for (int i = 0; i < semanas; i++)
    {

        for (int j = 0; j < muestras; j++)
        {
            suma = suma + matriz[i][j];
        }
    }
    printf("Media Global: %0.1f\n", suma / (semanas * muestras));

    return 0;
}