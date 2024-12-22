#include <stdio.h>

#define COL 40

// Prototipos
float leerMatriz(float (*m)[4], int filas);
float verMatriz(float (*m)[4], int filas);
float trazaMatriz(float (*m)[4], int filas);
int simetricaMatriz(float (*m)[4], int filas);

int main()
{
    float matriz[COL][COL];
    int filas;

    // Pedir el tamaño de la matriz cuadrada
    do
    {
        printf("Introduce el tamaño de la matriz cuadrada (n x n): ");
        scanf("%d", &filas);
    } while (filas <= 0 || filas > COL);

    float matriz1[4][4] = {
        {1.34, 2.45, 3.12, 4.56},
        {2.45, 3.78, -4.0, 5.92},
        {3.12, -4.0, 12.12, 6.34},
        {4.56, 5.92, 6.34, 7.56}};

    // Matriz 2
    float matriz2[4][4] = {
        {1.87, 1.34, 3.15, 3.06},
        {2.09, -3.45, -4.78, 5.33},
        {3.15, -4.78, -9.08, 6.56},
        {4.01, 5.33, 5.65, 7.77}};

    // leerMatriz(matriz, filas);

    // Mostrar la matriz en pantalla
    printf("\nMatriz ingresada:\n");
    verMatriz(matriz2, filas);

    printf("\nTraza Matriz:\n");
    printf("%0.2f\n", trazaMatriz(matriz2, filas)); 

    if (simetricaMatriz(matriz2,filas))
    {
        printf("Es simetrica");

    }else{
        printf("No es simetrica");
    }
    



    return 0;
}

// Implementación de leerMatriz
float leerMatriz(float (*m)[4], int filas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < filas; j++)
        { // Matriz cuadrada: filas = columnas
            printf("Introduce el valor [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &m[i][j]);
        }
    }
    return 0;
}

// Implementación de verMatriz
float verMatriz(float (*m)[4], int filas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            printf("%6.2f ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}

float trazaMatriz(float (*m)[4], int filas)
{

    float traza = 0;

    for (int i = 0; i < filas; i++)
    {
        traza = traza + m[i][i];
    }

    return traza;
}

int simetricaMatriz(float (*m)[4], int filas){
    
for (int i = 0; i < filas; i++)
{
    for (int j = 0; j < filas; j++)
    {
        if(m[i][j] != m[j][i]){
            return 0;
        }
    }
    return 1;
}


}