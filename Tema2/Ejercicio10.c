#include <stdio.h>
#define PI 3.14159265358979323846 // Definir PI

int main()
{
    int grados;
    double radianes;

    /*Pablo Andérica Torrado*/

    printf("Introduce los grados: ");
    scanf("%d", &grados);
    // radianes = grados * M_PI/180
    radianes = (PI / 180) * grados;

    printf("\n+--------+-----------+\n");
    printf("| GRADOS | RADIANES  |\n");
    printf("+--------+-----------+\n");
    printf("| %6d | %9.6lf |\n", grados, radianes);
    printf("+--------+-----------+\n");



    return 0;
}