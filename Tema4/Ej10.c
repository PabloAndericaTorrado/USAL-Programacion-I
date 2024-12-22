#include <stdio.h>

int main()
{
    /*Pablo Andérica Torrado*/
    int num;

    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        for (int y = 1; y <= i; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = num - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}