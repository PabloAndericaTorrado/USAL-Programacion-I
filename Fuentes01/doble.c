#include <stdio.h>
#include <stdlib.h>

/*
 * Programa DOBLE. Este programa calcula el doble del
 *  valor entero que se introduzca por teclado.
 */

int main(void)
{
     int   numero;
     int   doble;

     printf("Introduzca un n£mero entero: ");
     scanf ("%d", &numero);
     doble = numero * 2;
     printf("\nEl doble de %d es %d.", numero, doble);
     system ("pause");
     return 0; 
}

