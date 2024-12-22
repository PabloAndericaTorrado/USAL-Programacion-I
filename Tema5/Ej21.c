#include <stdio.h>

void dibujar_rombo(char interior, int altura)
{
    int i, j, espacio;

    for (i = 1; i <= altura; i++)
    {
        for (espacio = altura - i; espacio > 0; espacio--)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c", interior);
        }
        printf("\n");
    }

    /*Pablo Andérica Torrado*/

    for (i = altura - 1; i >= 1; i--)
    {
        for (espacio = altura - i; espacio > 0; espacio--)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c", interior);
        }
        printf("\n");
    }
}

void dibujar_marco(char exterior, int altura)
{
    int i, j, espacio;

    for (i = 1; i <= altura; i++)
    {
        for (espacio = altura - i; espacio > 0; espacio--)
        {
            printf("%c", exterior);
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                printf("%c", exterior);
            else
                printf(" ");
        }
        for (espacio = altura - i; espacio > 0; espacio--)
        {
            printf("%c", exterior);
        }
        printf("\n");
    }

    for (i = altura - 1; i >= 1; i--)
    {
        for (espacio = altura - i; espacio > 0; espacio--)
        {
            printf("%c", exterior);
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                printf("%c", exterior);
            else
                printf(" ");
        }
        for (espacio = altura - i; espacio > 0; espacio--)
        {
            printf("%c", exterior);
        }
        printf("\n");
    }
}

void dibujar_figura_combinada(char interior, char exterior, int altura)
{
    int i, j;

    for (i = 1; i <= 2 * altura - 1; i++)
    {
        for (j = 1; j <= 2 * altura - 1; j++)
        {
            if (i == 1 || i == 2 * altura - 1 || j == 1 || j == 2 * altura - 1)
            {
                printf("%c", exterior);
            }
            else if (i + j >= altura + 1 && j - i < altura && i - j < altura && i + j < 3 * altura)
            {
                printf("%c", interior);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    char interior, exterior;
    int altura;

    printf("Introduce el carácter interior: ");
    scanf(" %c", &interior);
    printf("Introduce el carácter exterior: ");
    scanf(" %c", &exterior);
    printf("Introduce la altura: ");
    scanf("%d", &altura);

    printf("\nPrimera figura:\n");
    dibujar_rombo(interior, altura);

    printf("\n");

    printf("\nSegunda figura:\n");
    dibujar_marco(exterior, altura);

    printf("\n");

    printf("\nTercera figura:\n");
    dibujar_figura_combinada(interior, exterior, altura);

    return 0;
}
