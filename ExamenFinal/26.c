#include <stdio.h>
#define FIL 50
#define COL 30

float mat[FIL][COL];
void iniciar(float (*m) [COL], int filas, int columnas, float valor_ini);



int main(){

iniciar(mat, FIL,COL, 77.7);


    return 0;
}

void iniciar(float (*m) [COL], int filas, int columnas, float valor_ini){


for (int i = 0; i < filas; i++)
{
    for (int j = 0; j < columnas; j++)
    {
        m[i][j] = valor_ini;
    }
    
}

for (int i = 0; i < filas; i++)
{
    for (int j = 0; j < columnas; j++)
    {
        printf("%0.1f  ",m[i][j]);
    }
    printf("\n");
}


    
}