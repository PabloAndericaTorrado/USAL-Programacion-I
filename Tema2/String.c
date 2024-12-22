#include <stdio.h>

int main() {
    /*Pablo Andérica Torrado*/

    char nombre[50];

    printf("Introduce tu nombre: ");
    fgets(nombre,sizeof(nombre),stdin);

    printf("Hola %s\n", nombre);

    main2();

    return 0;
}

int main2() {
    /*Pablo Andérica Torrado*/

    float numero = 5.0/2.0;
    char saludo[50];
    printf("Introduce un saludo: ");
    scanf("%s", saludo);
    // Imprimir la cadena
    printf("%s\n", saludo);
    printf("El resultado de 5/2 es: %f\n", numero);

    return 0;
}