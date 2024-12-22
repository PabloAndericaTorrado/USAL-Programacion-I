#include <stdio.h>

float Euros_a_Bitcoin(float euros)
{
    float bitcoin = euros / 7203.96;
    return bitcoin;
}

float Euros_a_Etherum(float euros)
{
    float etherum = euros / 157.18;
    return etherum;
}
float Bitcoin_a_Euros(float bitcoin)
{
    float euros = bitcoin * 7203.96;
    return euros;
}

float Etherum_a_Euros(float etherum)
{
    float euros = etherum * 157.18;
    return euros;
}
float Bitcoin_a_Etherum(float bitcoin)
{
    float etherum = bitcoin * 45.87;
    return etherum;
}

float Etherum_a_Bitcoin(float etherum)
{
    float bitcoin = etherum / 45.87;
    return bitcoin;
}

int main()
{

    char menu;
    float euros, etherum, bitcoin;

    printf("Seleccione una opción del menú:\n");
    printf("a. Convertir Euro a Bitcoin  y Etherum\n");
    printf("b. Convertir Bitcoin a Euro y Etherum\n");
    printf("c. Convertir Etherum a Euro y Bitcoin\n");
    printf("s. Salir\n");
    printf("Ingrese su opción: ");
    scanf(" %c", &menu);

    switch (menu)
    {
    case 'a':
        printf("Importe en Euros?: ");
        scanf(" %f", &euros);
        printf("Importe equivlanete en Bitcoin: %0.6f\n", Euros_a_Bitcoin(euros));
        printf("Importe equivlanete en Etherum: %0.6f\n", Euros_a_Etherum(euros));
        break;
    case 'b':
        printf("Importe en Bitcoin?: ");
        scanf(" %f", &bitcoin);
        printf("Importe equivlanete en Euros: %0.2f\n", Bitcoin_a_Euros(bitcoin));
        printf("Importe equivlanete en Etherum: %0.2f\n", Bitcoin_a_Etherum(bitcoin));
        break;
    case 'c':
        printf("Importe en Etherum?: ");
        scanf(" %f", &etherum);
        printf("Importe equivlanete en Euros: %0.2f\n", Etherum_a_Euros(etherum));
        printf("Importe equivlanete en Bitcoin: %0.6f\n", Etherum_a_Bitcoin(etherum));

        break;
    case 's':
        printf("Saliendo...\n");

        break;

    default:
        break;
    }

    return 0;
}