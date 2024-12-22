#include <stdio.h>

int main()
{
    int m, i;
    int a = 1, b = 1, siguiente;

    printf("Sucesión de Fibonacci.\n");
    printf("Introduce el número de términos a representar (Entre 1 y 50): ");
    scanf("%d", &m);
    /*Pablo Andérica Torrado*/

    if (m < 1 || m > 50)
    {
        printf("El número debe estar entre 1 y 50.\n");
        return 1;
    }

    printf("Los %d primeros términos de la sucesión de Fibonacci son:\n", m);

    for (i = 1; i <= m; i++)
    {
        if (i == 1 || i == 2)
        {
            printf("1 ");
        }
        else
        {
            siguiente = a + b;
            a = b;
            b = siguiente;
            printf("%d ", siguiente);
        }
    }

    printf("\n");
    return 0;
}
