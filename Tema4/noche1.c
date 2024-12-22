#include <stdio.h>

char traducir(int cifra)
{
    char letra;

    switch (cifra)
    {
    case 0:
        letra = 'O';
        return letra;
        break;
    case 1:
        letra = 'G';
        return letra;
        break;
    case 2:
        letra = 'A';
        return letra;
        break;
    case 3:
        letra = 'L';
        return letra;
        break;
    case 4:
        letra = 'E';
        return letra;
        break;
    case 5:
        letra = 'I';
        return letra;
        break;
    case 6:
        letra = 'C';
        return letra;
        break;
    case 7:
        letra = 'R';
        return letra;
        break;
    case 8:
        letra = 'U';
        return letra;
        break;
    case 9:
        letra = 'M';
        return letra;
        break;

    default:
        break;
    }

    return letra;
}

int main()
{

    int pvp = 0, cifra1, cifra2, cifra3, cifra4, temp = 0;
    char palabra[5];

    printf("Ingrese el precio: ");
    scanf("%d", &pvp);

    if (pvp > 9999 || pvp < 0)
    {
        return 0;
    }
//25
    cifra4 = pvp % 10; 
    cifra3 = (pvp % 100) / 10;
    cifra2 = (pvp % 1000) / 100;
    cifra1 = pvp / 1000;

    palabra[0] = traducir(cifra1);
    palabra[1] = traducir(cifra2);
    palabra[2] = traducir(cifra3);
    palabra[3] = traducir(cifra4);

    printf("El precio traducido es: %s\n", palabra);

    return 0;
}

/*
1684 % 10 = 4
1684 % 100 = 84 / 10 = 8
1684 % 1000 = 684 / 100 = 6
1684 / 1000 = 1
*/