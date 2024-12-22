#include <stdio.h>
#define DIM 50

// int array[DIM];
int dimArray;

void purgarRepetidos(int vector[], int *dim);

int main()
{

    int array[] = {
        1,
        2,
        3,
        1,
        3,
        4,
        5,
    };
    dimArray = sizeof(array) / sizeof(array[0]);

    printf("Array original:\n");
    for (int i = 0; i < dimArray; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    purgarRepetidos(array, &dimArray);

    printf("Array sin repetidos:\n");
    for (int i = 0; i < dimArray; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void purgarRepetidos(int vector[], int *dim)
{

    for (int i = 0; i < *dim; i++)
    {
        for (int j = i+1; j < *dim; j++)
        {
            if (vector[i] == vector[j])
            {
                for (int z = j; z < *dim - 1; z++)
                {
                    vector[z] = vector[z + 1];
                }
                (*dim)--;
                j--;
            }
        }
    }
}