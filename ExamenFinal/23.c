#include <stdio.h>

void maxMinVector(int *vt, int dim, int *max, int *mim);

int main()
{
    int max, mim;

    int vector1[] = {-1, 7, 15, -5, 6, -5};
    int vector2[] = {34, -12, 56, 4, 0, 5, 12, 26, -58};
    int vector3[] = {2, -7, -9, -12, 0, -6, -8, -5, -1, -2, 0, -7};
    int vector4[] = {2, 7, 9, 2, 10, 6, 8, 5, 1, 14, 3, 7};

    int lengthVector1 = sizeof(vector1) / sizeof(vector1[0]);
    int lengthVector2 = sizeof(vector2) / sizeof(vector2[0]);
    int lengthVector3 = sizeof(vector3) / sizeof(vector3[0]);
    int lengthVector4 = sizeof(vector4) / sizeof(vector4[0]);

    // Llama a la función para el primer vector
    max = 0; // Inicializa con el primer elemento del vector
    mim = 100;
    maxMinVector(vector2, lengthVector2, &max, &mim);

    // Llama a la función para otros vectores si es necesario
    return 0;
}

void maxMinVector(int *vt, int dim, int *max, int *mim)
{
    for (int i = 0; i < dim; i++)
    {
        if (vt[i] > *max)
        {
            *max = vt[i];
        }
        if (vt[i] < *mim)
        {
            *mim = vt[i];
        }
    }

    printf("Max: %d\n", *max);
    printf("Min: %d\n", *mim);
}
