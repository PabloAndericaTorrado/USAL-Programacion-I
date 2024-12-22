#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num_1, num_2, resultado_suma = 0;

    printf("Introduce el primer número: ");
    scanf("%d", &num_1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num_2);

    if (num_1 <= num_2)
    {
        printf("El primer numero debe ser mayor que el segundo número.\n");
        return 0;
    }

    if (num_2 % 2 != 0)
    {
        num_2++; // Si num_2 no es par, incrementarlo en 1 para que sea par
    }

    for (size_t i = num_2; i <= num_1; i += 2)
    {
        resultado_suma += i;
    }

    printf("El resultado de la suma es %d\n", resultado_suma);
}
