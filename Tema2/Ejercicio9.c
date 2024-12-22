#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    const float PI = 3.14159;
    float radio;
    float altura;

    printf("Introduce el radio del cilindro: ");
    scanf("%f", &radio);
    printf("Introduce la altura del cilindro: ");
    scanf("%f", &altura);

    printf("El area lateral del cilindro es: %.4f\n", (2 * PI * radio * (altura)));
    printf("El volumen del cilindro es: %.4f\n", (PI * radio * radio * altura));

    return 0;
}
