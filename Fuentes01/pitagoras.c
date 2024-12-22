#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Programa para calcular la hipotenusa de un tri�ngulo.
   Implementa el algoritmo de Pit�goras
   Entradas: los catetos de un tri�ngulo rect�ngulo lado1, lado2.
   Salidas:  La hipotenusa, calculada como hip = RaizCuad(lado1^2 + lado2^2)
*/

int main(void){               
   double lado1, lado2, hip; 

   printf("Introduzca la longitud del primer cateto: ");
   scanf ("%lg", &lado1);
   printf("Introduzca la longitud del segundo cateto: ");;
   scanf ("%lg", &lado2);

   hip = sqrt(lado1*lado1 + lado2*lado2); // sqrt es la funci�n ra�z cuadrada

   printf ("\nLa hipotenusa vale %lg\n\n", hip);
   
   system("pause");
   return 0;
}
