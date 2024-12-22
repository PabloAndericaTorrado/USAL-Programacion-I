#include <stdio.h>

// Prototipo de la función
int comparaVectores(double *v1, double *v2, int dm);

int main()
{
    // Declaración de vectores
    double vector1[] = {-1.3, 7.5, 15.67, -5.12, 6, -5, 12.34, 26.78, -58.90};
    double vector2[] = {-1.3, 7.5, 15.67, -5.12, 6, -5, 12.34, 26.78, -58.90};
    double vector3[] = {2.5, 7.2, 9.0, -12.45, 0, 6.1, 8.67, 5.23, 1.78, 14.0, 3.54, -7.3};
    double vector4[] = {2.5, 7.2, 9.0, 2.89, 0, 6.1, 8.67, 5.23, 1.78, 14.0, 3.54, 7.3};

    // Longitudes de los vectores
    int lengthVector1 = sizeof(vector1) / sizeof(vector1[0]);
    int lengthVector2 = sizeof(vector2) / sizeof(vector2[0]);
    int lengthVector3 = sizeof(vector3) / sizeof(vector3[0]);
    int lengthVector4 = sizeof(vector4) / sizeof(vector4[0]);

    // Comprobación entre vector1 y vector2
    if (comparaVectores(vector1, vector2, lengthVector1))
    {
        printf("Vector1 y Vector2 son iguales.\n");
    }
    else
    {
        printf("Vector1 y Vector2 son diferentes.\n");
    }

    // Comprobación entre vector3 y vector4
    if (comparaVectores(vector3, vector4, lengthVector3))
    {
        printf("Vector3 y Vector4 son iguales.\n");
    }
    else
    {
        printf("Vector3 y Vector4 son diferentes.\n");
    }

    return 0;
}

// Implementación de la función comparaVectores
int comparaVectores(double *v1, double *v2, int dm)
{
    for (int i = 0; i < dm; i++)
    {
        if (v1[i] != v2[i]) // Si algún elemento es diferente
        {
            return 0; // Los vectores no son iguales
        }
    }
    return 1; // Todos los elementos son iguales
}
