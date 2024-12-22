#include <stdio.h>

int main()
{

    int num, cifra1 = 0, cifra2 = 0, cifra3 = 0, cifra4 = 0, cifra5 = 0, temp = 0;

    printf("Pasame un Nº de 5 cifras: ");
    scanf("%d", &num);

    // num = 85673
    printf("%d\n", num);

    if (num < 10000 || num > 99999)
    {
        printf("El numero no tiene 5 cifras");
        return 0;
    }

    cifra1 = num % 10000; // 8
    temp = num / 10000;   // 5673
    cifra2 = temp % 1000; // 5
    temp = temp / 1000;   // 673
    cifra3 = temp % 100;  // 6
    temp = temp / 100;    // 73
    cifra4 = temp % 10;   // 7
    temp = temp / 10;     // 3
    cifra5 = temp;

    printf("Cifra 1: %d\n", cifra1);
    printf("Cifra 2: %d\n", cifra2);
    printf("Cifra 3: %d\n", cifra3);
    printf("Cifra 4: %d\n", cifra4);
    printf("Cifra 5: %d\n", cifra5);

    return 0;
}