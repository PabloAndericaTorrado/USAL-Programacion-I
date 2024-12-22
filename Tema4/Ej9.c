#include <stdio.h>

int main()
{

    int a, b, c;
    int num_menor = 0;

    printf("Introduce 3 numeros diferentes:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a != b && a != c && b != c)
    {
        if (a < b)
        {
            num_menor = a;
        }
        else
            num_menor = b;

        if (c < num_menor)
        {
            num_menor = c;
        }
    }
    else
    {
        printf("No son diferentes");
        return 0;
    }

    printf("Numero menor es: %d", num_menor);

    return 0;
}