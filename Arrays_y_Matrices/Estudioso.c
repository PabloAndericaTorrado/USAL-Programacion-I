#include <stdio.h>

int main(){

int matriz[4][5] = {
    {11,12,13,14,15},
    {21,22,23,24,25},
    {31,32,33,34,35},
    {41,42,43,44,45},
};
int matriz2[5][4];
int nueva[4][5];


for (int j = 0; j < 5; j++)
{
    for (int i = 3; i >= 0; i--)
    {
       // nueva[3-i][j] = matriz[i][j];
    }
    
}

for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 5; j++){

        //matriz2[4-j][3-i]=matriz[i][j];
        matriz2[j][i]=matriz[i][j];



    }

}


// Imprimir la matriz original
   printf("\nMatriz transpuesta:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }







    return 0;
}