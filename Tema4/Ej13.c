#include <stdio.h>

int main()
{

    int num, cifra1 = 0, cifra2 = 0, cifra3 = 0, cifra4 = 0, cifra5 = 0, temp = 0, total = 0, resto = 0, digitoControl = 0;

    printf("Pasame un Nº de 5 cifras: ");
    scanf("%d", &num);

    if (num < 10000 || num > 99999)
    {
        printf("El numero no tiene 5 cifras");
        return 0;
    }

    cifra1 = num / 10000; // 8
    temp = num % 10000;   // 5673
    cifra2 = temp / 1000; // 5
    temp = temp % 1000;   // 673
    cifra3 = temp / 100;  // 6
    temp = temp % 100;    // 73
    cifra4 = temp / 10;   // 7
    temp = temp % 10;     // 3
    cifra5 = temp;

    printf("Cifra 1: %d\n", cifra1);
    printf("Cifra 2: %d\n", cifra2);
    printf("Cifra 3: %d\n", cifra3);
    printf("Cifra 4: %d\n", cifra4);
    printf("Cifra 5: %d\n", cifra5);

    if (cifra1 == 0)
    {
        printf("La cifra 1 siempre diferente de cero");

        return 0;
    }

    if (cifra1 % 2 == 0)
    {

        cifra1 = cifra1 * 4;
        cifra2 = cifra2 * 8;
        cifra3 = cifra3 * 5;
        cifra4 = cifra4 * 10;
    }
    else
    {
        cifra1 = cifra1 * 9;
        cifra2 = cifra2 * 7;
        cifra3 = cifra3 * 3;
        cifra4 = cifra4 * 6;
    }

    total = cifra1 + cifra2 + cifra3 + cifra4;

    resto = total % 11;

    digitoControl = 11 - resto;

    if (digitoControl == 10)
    {
        digitoControl = 1;
    }
    printf("\nDigito de control del codigo Dharma......: %d", cifra5);
    printf("\nDigito de control calculado para la entidad:%d", digitoControl);

    if (cifra5 == digitoControl)
    {
        printf("\nEl codigo Dharma es correcto");
    }
    else
    {
        printf("\nEl codigo Dharma No es correcto");
    }

    return 0;
}