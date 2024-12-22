#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
double grados_a_radianes(double grados) {
    return grados * (PI / 180.0);
}

// Función para convertir radianes a grados
double radianes_a_grados(double radianes) {
    return radianes * (180.0 / PI);
}
int main()
{
    

    double theta1 = 0.0, n1, n2;

    printf("Introduce el índice de refracción n1: ");
    scanf("%lf", &n1);

    printf("Introduce el índice de refracción n2: ");
    scanf("%lf", &n2);

    printf("Introduce el ángulo theta1 en grados: ");
    scanf("%lf", &theta1);

    if (theta1 < 0 && theta1 > 90)
    {
        return 0;
    }
    else if (n1 < 1 || n2 < 1)
    {
        return 0;
    }
    theta1 = grados_a_radianes(theta1);

    double theta2 = asin((n1 / n2) * sin(theta1));

   theta2 = radianes_a_grados(theta2);

    printf("El ángulo theta2 es: %.2f grados\n", theta2);

    return 0;
}
