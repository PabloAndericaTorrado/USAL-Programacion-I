#include <stdio.h>
#include <ctype.h>

int comparaCadenas(char *cad1, char *cad2, int diffMayMinus);

int main()
{

    char cadena1[] = "HOLA";
    char cadena2[] = "HOLa";

    if (comparaCadenas(cadena1, cadena2, 0))
    {
        printf("Son Iguales");
    }
    else
    {
        printf("No son Iguales");
    }

    return 0;
}

int comparaCadenas(char *cad1, char *cad2, int diffMayMinus)
{

    int size1 = sizeof(cad1) / sizeof(cad1[0]);
    int size2 = sizeof(cad2) / sizeof(cad2[0]);

    printf("%d",size1);

    if (size1 != size2)
    {
        return 0;
    }
    

    for (int i = 0; i < size1; i++)
    {
        if (cad1[i] != cad2[i])
        {
            return 0;
        }
    }

    return 1;
}