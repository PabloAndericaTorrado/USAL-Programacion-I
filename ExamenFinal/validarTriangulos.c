#include <stdio.h>
#include <math.h>

// Prototipos de funciones
int esTriangulo(float lado1, float lado2, float lado3);
const char *tipoTriangulo(float lado1, float lado2, float lado3);
float areaTriangulo(float lado1, float lado2, float lado3);

int main()
{
    float lado1, lado2, lado3;

    // Entrada de datos
    printf("Introduce el lado 1 del triángulo: ");
    scanf("%f", &lado1);
    printf("Introduce el lado 2 del triángulo: ");
    scanf("%f", &lado2);
    printf("Introduce el lado 3 del triángulo: ");
    scanf("%f", &lado3);

    // Validar si es un triángulo
    if (esTriangulo(lado1, lado2, lado3))
    {
        printf("El triángulo es %s\n", tipoTriangulo(lado1, lado2, lado3));
        printf("El área del triángulo es %.2f\n", areaTriangulo(lado1, lado2, lado3));
    }
    else
    {
        printf("No es un triángulo válido\n");
    }

    return 0;
}

// Función para verificar si es un triángulo válido
int esTriangulo(float lado1, float lado2, float lado3)
{
    if ((lado1 + lado2) > lado3 && (lado1 + lado3) > lado2 && (lado2 + lado3) > lado1)
    {
        return 1; // Es un triángulo válido
    }
    else
    {
        return 0; // No es un triángulo válido
    }
}

// Función para determinar el tipo de triángulo
const char *tipoTriangulo(float lado1, float lado2, float lado3)
{
    if (lado1 == lado2 && lado1 == lado3)
    {
        return "Equilátero";
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
        return "Isósceles";
    }
    else
    {
        return "Escaleno";
    }
}

// Función para calcular el área del triángulo usando la fórmula de Herón
float areaTriangulo(float lado1, float lado2, float lado3)
{
    float s = (lado1 + lado2 + lado3) / 2.0; // Semiperímetro
    return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3)); // Fórmula de Herón
}
