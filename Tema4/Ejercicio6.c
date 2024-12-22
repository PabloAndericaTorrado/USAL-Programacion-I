#include <stdio.h>

int main()
{
    /*
    M = 9
    U = 8
    R = 7
    C = 6
    I = 5
    E = 4
    L = 3
    A = 2
    G = 1
    O = 0
    */

    int precio, unidad = 0, decena = 0, centena = 0, millar = 0, resto = 0;
    printf("Dime el precio del artículo: ");
    scanf("%d",&precio);
    // precio = 1234

    if (precio > 9999 || precio < 0)
    {
        printf("Se acabó");
        return 0;
    }
    if (precio > 999)
    {
        millar = precio / 1000; // 1
        resto = precio % 1000;  // 234
        centena = resto / 100;  // 2
        resto = resto % 100;    // 34
        decena = resto / 10;    // 3
        resto = resto % 10;     // 4
        unidad = resto;
    }

    else if (precio <= 999 && precio >= 100)
    {
        millar = 0;
        resto = precio % 1000; // 234
        centena = resto / 100; // 2
        resto = resto % 100;   // 34
        decena = resto / 10;   // 3
        resto = resto % 10;    // 4
        unidad = resto;
    }
    else if (precio <= 99 && precio >= 10){
        millar = 0;
        centena = 0;
        decena = precio / 10;   
        resto = precio % 10;    
        unidad = resto;
    }

    else if (precio < 10){
        millar = 0;
        centena = 0;
        decena = 0;
        unidad = precio;
    }
    
    traducir_a_murcielago(millar);
    traducir_a_murcielago(centena);
    traducir_a_murcielago(decena);
    traducir_a_murcielago(unidad);

    

    return 0;
}

void traducir_a_murcielago(int numero) {
    switch (numero) {
        case 9:
            printf("M");
            break;
        case 8:
            printf("U");
            break;
        case 7:
            printf("R");
            break;
        case 6:
            printf("C");
            break;
        case 5:
            printf("I");
            break;
        case 4:
            printf("E");
            break;
        case 3:
            printf("L");
            break;
        case 2:
            printf("A");
            break;
        case 1:
            printf("G");
            break;
        case 0:
            printf("O");
            break;
        default:
            printf("?");
            break;
    }
}


