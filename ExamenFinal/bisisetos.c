#include <stdio.h>
#define DIM 250

int esBisiesto(int anio);
void primerosBisiestosXXI(int m[], int dim, int *totbisiestossiglo);

int main()
{
    int bisiestos[DIM]; // array para almacenar años bisiestos
    int diml;           // dimension efectiva del array
    int totalBisiestos; // cuantos años bisiestos hay en total
    diml = 12;
    primerosBisiestosXXI(bisiestos,diml,&totalBisiestos);


    return 0;
}

int esBisiesto(int anio)
{

    if (anio % 4 == 0 && anio % 100 != 0 || anio % 4 == 0 && anio % 100 == 0 && anio % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void primerosBisiestosXXI(int m[], int dim, int *totbisiestossiglo)
{

    int anio = 2001;
    int contador = 0;

    while (contador < dim)
    {
        if (esBisiesto(anio))
        {
            m[contador] = anio;
            contador++;
        }
        anio++;
    }

    for (int i = 2001; i < 2101; i++)
    {
        if (esBisiesto(i))
        {
            (*totbisiestossiglo)++;
        }
    }
}