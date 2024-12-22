#include <stdio.h>

void simplificarFraccion(long *nume,long *deno);

int main(){

long num1, num2;

    printf("Introduce el primer número: ");
    scanf("%ld", &num1);

    printf("Introduce el segundo número: ");
    scanf("%ld", &num2);


//10 5

simplificarFraccion(&num1,&num2);


    printf("Fracción simplificada: %ld/%ld\n", num1, num2);



    return 0;
}


void simplificarFraccion(long *nume,long *deno){

    long a = *nume;
    long b = *deno;
    long temp;
    

// Algoritmo de Euclides para encontrar el máximo común divisor (MCD)
    while (b != 0) {
        temp = b; //5
        b = a % b; //0
        a = temp; // 5
    }

    // Dividir numerador y denominador por el MCD
    *nume /= a;
    *deno /= a;


}