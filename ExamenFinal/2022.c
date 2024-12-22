#include <stdio.h>

void unionVectores(int *v1, int dim1, int *v2, int dim2, int *vsal, int *dimsal);

int main()
{
    int V1[] = {1, 2, 3, 4, 5};
    int V2[] = {4, 5, 3, 7, 8};
    int Vsal[20]; // Array suficientemente grande para contener la unión
    int dimsal = 0; // Dimensión efectiva del array de salida

    int lenght1 = sizeof(V1) / sizeof(V1[0]);
    int lenght2 = sizeof(V2) / sizeof(V2[0]);

    // Llamada a la función
    unionVectores(V1, lenght1, V2, lenght2, Vsal, &dimsal);

    // Mostrar el resultado
    printf("Vector unión: ");
    for (int i = 0; i < dimsal; i++)
    {
        printf("%d ", Vsal[i]);
    }
    printf("\n");

    return 0;
}

void unionVectores(int *v1, int dim1, int *v2, int dim2, int *vsal, int *dimsal)
{
    int i, j;
    int repetido;

    // Copiar los elementos de v1 al vector de salida
    for (i = 0; i < dim1; i++)
    {
        vsal[*dimsal] = v1[i];
        (*dimsal)++;
    }

    // Añadir los elementos de v2 al vector de salida, evitando duplicados
    for (i = 0; i < dim2; i++)
    {
        repetido = 0;
        for (j = 0; j < *dimsal; j++)
        {
            if (v2[i] == vsal[j])
            {
                repetido = 1;
                break;
            }
        }
    
        if (!repetido)
        {
            vsal[*dimsal] = v2[i];
            (*dimsal)++;
        }
    }
}
