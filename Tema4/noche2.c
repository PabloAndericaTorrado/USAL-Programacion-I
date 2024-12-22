#include <stdio.h>

int main()
{

    int num, cifra1, cifra2, cifra3, cifra4, cifra5, digito_control;

    printf("Ingrese un numero ");
    scanf("%d", &num);

    if (num > 99999 || num < 0)
    {
        printf("No tiene 5 digitos");
    }

    cifra1 = num / 10000;
    cifra2 = (num % 10000) / 1000;
    cifra3 = (num % 1000) / 100;
    cifra4 = (num % 100) / 10;
    cifra5 = num % 10;

    if (cifra1 % 2 == 0)
    {
        cifra1 *= 4;
        cifra2 *= 8;
        cifra3 *= 5;
        cifra4 *= 10;
    }
    else
    {
        cifra1 *= 9;
        cifra2 *= 7;
        cifra3 *= 3;
        cifra4 *= 6;
    }

    int suma = cifra1 + cifra2 + cifra3 + cifra4;
    int resto = suma % 11;
    digito_control = 11 - resto;
    if (digito_control > 10)
    {
        digito_control = 1;
    }
    printf("El digito de control es %d\n", cifra5);
    printf("El digito de control calculado es %d", digito_control);

    if (cifra5 == digito_control)
    {
        printf("El codigo es correcto");
    }
    else
    {
        printf("El codigo es incorrecto");
    }

    return 0;
}