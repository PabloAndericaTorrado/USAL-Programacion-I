#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num, resto;
    int es_primo = 1;  // Variable para verificar si es primo

    printf("Dime un número: ");
    scanf("%d", &num);

    if (num < 2)  // Cambiado de 1 a 2, ya que el 1 no es primo
    {
        printf("El número tiene que ser mayor que uno.\n");
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            resto = num % i;
            if (resto == 0)  // Si es divisible por algún número, no es primo
            {
                es_primo = 0;
                break;  // Si encontramos un divisor, salimos del bucle
            }
        }

        if (es_primo)
        {
            printf("Es primo.\n");
        }
        else
        {
            printf("No es primo.\n");
        }
    }

    return 0;
}
