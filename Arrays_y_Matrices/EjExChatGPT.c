#include <stdio.h>

int main()
{
    int dias, oficinas;

    do
    {
        printf("Dime el numero de días que dura el estudio: ");
        scanf("%d", &dias);
        printf("Dime el numero de oficinas que hay en el estudio: ");
        scanf("%d", &oficinas);

    } while (dias < 1 || dias > 60 || oficinas < 1 || oficinas > 100);

    // float consumos[dias][oficinas];

    float consumos[5][8] = {
        {3.6, 1.7, 2.8, 1.9, 2.5, 2.2, 3.1, 2.4},
        {3.2, 2.8, 2.7, 2.1, 2.6, 2.3, 3.2, 2.9},
        {2.9, 1.9, 2.6, 2.0, 3.1, 2.1, 3.1, 2.8},
        {2.8, 2.3, 2.9, 2.3, 2.8, 3.0, 3.0, 3.2},
        {2.9, 1.9, 3.0, 2.1, 2.8, 3.0, 2.8, 2.7}};

    // Calcular el consumo total
    float suma = 0;
    for (int j = 0; j < oficinas; j++)
    {
        suma = 0;
        for (int i = 0; i < dias; i++)
        {
            suma = suma + consumos[i][j];
        }

        printf("El Consumo total de la Oficina %d ha sido de %0.2f KWh\n", j + 1, suma);
    }

    // día con el mayor consumo total
    float max = 0;
    for (int i = 0; i < dias; i++)
    {
        suma = 0;
        for (int j = 0; j < oficinas; j++)
        {
            suma = suma + consumos[i][j];
        }
        if (suma > max)
        {
            max = suma;
        }
    }
    int numOfi = 0;
    for (int i = 0; i < dias; i++)
    {
        suma = 0;
        for (int j = 0; j < oficinas; j++)
        {
            suma = suma + consumos[i][j];
        }
        if (suma == max)
        {
            printf("El dia con mayor consumo ha sido el %d con una cantidad de %0.2f KWh y la oficina con mas consumo ese dia ha sido la numero ", i + 1, max);
            numOfi = i;
        }
    }
    int diaMAX = 0;
    float cantidadMAX = 0;
    for (int j = 0; j < oficinas; j++)
    {
        if (consumos[numOfi][j] > cantidadMAX)
        {
            cantidadMAX = consumos[numOfi][j];
            diaMAX = j;
        }
    }
    printf("%d con una cantidad de %0.2f KWh\n", diaMAX + 1, cantidadMAX);

    // consumo medio
    suma = 0;
    for (int j = 0; j < oficinas; j++)
    {
        suma = 0;
        for (int i = 0; i < dias; i++)
        {
            suma = suma + consumos[i][j];
        }

        printf("El Consumo medio de la Oficina %d ha sido de %0.2f KWh\n", j + 1, suma / dias);
    }

    // consumo máximo de una oficina en un día
    cantidadMAX = 0;
    for (int i = 0; i < dias; i++)
    {
        for (int j = 0; j < oficinas; j++)
        {
            if (consumos[i][j] > cantidadMAX)
            {
                cantidadMAX = consumos[i][j];
            }
            
        }
    }
    printf("El consumo maximo de una oficina en un dia ha sido de %0.2f KWh\n", cantidadMAX);

    //Consumo medio de Todas las Oficinas
    suma = 0;
    for (int i = 0; i < dias; i++)
    {
        for (int j = 0; j < oficinas; j++)
        {
            suma = suma + consumos[i][j]; 
        }
    }

    printf("Consumo medio de Todas las Oficinas es de %0.2f KWh\n",suma/(oficinas));

    return 0;
}