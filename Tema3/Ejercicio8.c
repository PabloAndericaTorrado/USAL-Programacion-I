#include <stdio.h>

int main()
{

    int unidades, decenas, centenas, millares, num, num2;

    printf("Introduce un número entero (0 - 9999): ");
    scanf("%d", &num);

    // num = 1234

    if (num > 999) // 1000 o mas
    {
        num2 = num;
        millares = num2 / 1000;
        printf("millares: %d\n", millares);
        num2 = num2 % 1000;
        centenas = num2 / 100;
        printf("centenas: %d\n", centenas);
        num2 = num2 % 100;
        decenas = num2 / 10;
        printf("decenas: %d\n", decenas);
        num2 = num2 % 10;
        unidades = num2;
        printf("unidades: %d\n", unidades);
    }else if (num <= 999 && num >= 100) // 999 o menos
    {
         num2 = num;
         num2 = num2 % 1000;
        centenas = num2 / 100;
        printf("centenas: %d\n", centenas);
        num2 = num2 % 100;
        decenas = num2 / 10;
        printf("decenas: %d\n", decenas);
        num2 = num2 % 10;
        unidades = num2;
        printf("unidades: %d\n", unidades);
    }else if (num <= 99 && num >= 10) // 99 o menos
    {
        num2 = num;
        num2 = num2 % 100;
        decenas = num2 / 10;
        printf("decenas: %d\n", decenas);
        num2 = num2 % 10;
        unidades = num2;
        printf("unidades: %d\n", unidades);
    }else if (num <= 9) // 9 o menos
    {
        num2 = num;
        num2 = num2 % 10;
        unidades = num2;
        printf("unidades: %d\n", unidades);


    }

    int num_invertido;

    num_invertido = (unidades * 1000) + (decenas * 100) + (centenas * 10) + millares;
    printf("El número invertido es: %d\n", num_invertido);
    
    int suma = num + num_invertido;
    printf("La suma de %d + %d es: %d\n", num, num_invertido, suma);

    

    return 0;
}
