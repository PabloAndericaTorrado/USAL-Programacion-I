#include <stdio.h>

// Prototipo de la función
int comparaVectores(int dm);

int main()
{
   int a = 2;
   comparaVectores(a);

    return 0;
}

// Implementación de la función comparaVectores
int comparaVectores(int dm)
{
    for (int i = 0; i < dm; i++)
    {
       printf("SI\n")  ;    // Los vectores no son iguales
    }
}
