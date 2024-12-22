#include <stdio.h>
#define DIM 250
int bisiestos[DIM]; // array para almacenar años bisiestos
int diml; // dimension efectiva del array
int totalBisiestos; // cuantos años bisiestos hay en total 


int esBisiesto(int anio);
void primerosBisiestosXXI(int anios[], int dim, int *totbisiestossiglo);

int main()
{
    diml = 12;

primerosBisiestosXXI(bisiestos,diml,&totalBisiestos);

printf("La cantidad de años bisiestos en el S:XXI es: %d\n",totalBisiestos);
printf("Los primeros %d años bisiestos son: ",diml);
for (int i = 0; i < diml; i++)
{
    printf("%d, ",bisiestos[i]);
}


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

void primerosBisiestosXXI(int anios[], int dim, int *totbisiestossiglo)
{

    int num = 2001, contador = 0;

    do
    {

        if (esBisiesto(num))
        {
            anios[contador] = num;
            contador++;
        }

        num++;

    } while (contador < dim);


    contador = 0;

    for (int i = 2001; i <= 2100; i++)
    {
        if (esBisiesto(i))
        {
            (*totbisiestossiglo)++;
        }
    }
    


}