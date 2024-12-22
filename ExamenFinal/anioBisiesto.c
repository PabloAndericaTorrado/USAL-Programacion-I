#include <stdio.h>
#define DIM 250
int bisiestos[DIM]; // array para almacenar años bisiestos
int diml;           // dimension efectiva del array
int totalBisiestos; // cuantos años bisiestos hay en total
int primerosBisiestosXXI(int m[], int dim, int *totbisiestossiglo);
int esBisiesto(int anio);
int main()
{

    diml = 12;

    primerosBisiestosXXI(bisiestos, diml, &totalBisiestos);

    // Mostrar los resultados
    printf("Primeros %d años bisiestos del siglo XXI:\n", diml);
    for (int i = 0; i < diml; i++)
    {
        printf("%d ", bisiestos[i]);
    }
    printf("\nTotal de años bisiestos en el siglo XXI: %d\n", totalBisiestos);


    return 0;
}

int esBisiesto(int anio)
{

    if (anio % 4 == 0 && anio % 100 == 0 && anio % 400 == 0 || anio % 4 == 0 && anio % 100 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int primerosBisiestosXXI(int m[], int dim, int *totbisiestossiglo)
{
    int bis[dim];
    int num = 2001;
    int i = 0;
    while (num <= 2100 && i < dim)
    {
        if (esBisiesto(num))
        {
            m[i] = num;
            i++;
        }
        num++;
    }

    num = 2001;
    ;
    while (num <= 2100)
    {
        if (esBisiesto(num))
        {
            (*totbisiestossiglo)++;
        }
        num++;
    }
}