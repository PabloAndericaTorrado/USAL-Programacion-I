#include <stdio.h>

int main()
{

    int meses = 0, viviendas;
    float media;

    do
    {
        printf("Dime el número de meses que dura el estudio: ");
        scanf("%d", &meses);
        printf("Dime el número de viviendas que hay en el estudio: ");
        scanf("%d", &viviendas);
    } while (meses > 30 || meses <= 1 || viviendas > 50 || viviendas <= 1);

    // float consumos[meses][viviendas];

    float consumos[5][8] = {
        {3.6, 1.7, 2.8, 1.9, 2.5, 2.2, 3.1, 2.4},
        {3.2, 2.8, 2.7, 2.1, 2.6, 2.3, 3.2, 2.9},
        {2.9, 1.9, 2.6, 2.0, 3.1, 2.1, 3.1, 2.8},
        {2.8, 2.3, 2.9, 2.3, 2.8, 3.0, 3.0, 3.2},
        {2.9, 1.9, 3.0, 2.1, 2.8, 3.0, 2.8, 2.7}};

    /*
        for (int i = 0; i < meses; i++)
        {
            for (int j = 0; j < viviendas; j++)
            {
                printf("Dime el consumo de la vivienda %d en el mes %d: ", j + 1, i + 1);
                scanf("%f", &consumos[i][j]);
            }
        }
    */
    float suma = 0;

    // INFORME CONSUMO MEDIO POR VIVIENDA
    for (int j = 0; j < viviendas; j++)
    {
        suma = 0;
        media = 0;
        for (int i = 0; i < meses; i++)
        {
            suma += consumos[i][j];
        }
        media = suma / meses;
        printf("\nVivienda %d, Media: %0.1f: ", j + 1, media);
    }

    // INFORME CONSUMO MAXIMO POR MES
    float max_consumo = 0;
    for (int i = 0; i < meses; i++)
    {
        max_consumo = 0;
        for (int j = 0; j < viviendas; j++)
        {

            if (consumos[i][j] >= max_consumo)
            {
                max_consumo = consumos[i][j];
            }
        }
        printf("\nMes %d, Maximo: %0.1f, Viviendas: ", i + 1, max_consumo);
        for (int j = 0; j < viviendas; j++)
        {
            if (consumos[i][j] == max_consumo)
            {
                printf("%d ", j + 1);
            }
        }
    }
    max_consumo = 0;
    // Consumo máximo de todas las viviendas
    for (int i = 0; i < meses; i++)
    {
        for (int j = 0; j < viviendas; j++)
        {
            if (max_consumo < consumos[i][j])
            {
                max_consumo = consumos[i][j];
            }
        }
    }
    printf("\nConsumo máximo de todas las viviendas: %0.1f", max_consumo);

    float min_consumo = 100;
    // Consumo mínimo de todas las viviendas
    for (int i = 0; i < meses; i++)
    {
        for (int j = 0; j < viviendas; j++)
        {
            if (min_consumo > consumos[i][j])
            {
                min_consumo = consumos[i][j];
            }
        }
    }
    printf("\nConsumo mínimo de todas las viviendas: %0.1f", min_consumo);
    float suma = 0;
    // Consumo medio de todas las viviendas
    for (int i = 0; i < meses; i++)
    {
        for (int j = 0; j < viviendas; j++)
        {
            suma += consumos[i][j];
        }
    }
    media = suma / (meses * viviendas);
    printf("\nConsumo medio de todas las viviendas: %0.1f", media);

    return 0;
}