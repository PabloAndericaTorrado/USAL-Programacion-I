#include <stdio.h>
#include <stdlib.h>
include <math.h> //falta un #

/* Prorgrama: raiz1.c */
/* Descripcion: Resolver la ecuacion de segundo grado a*x*x + b*x +c=0  */
 
main(void)
{
	float a, b, c, d, raiz1, raiz2;

	/* Leer los datos de entrada */

	printf("Teclea el valor de a:  ");
	scanf("%f",&a);
	printf("\n");
	printf("Teclea el valor de b:  ); //falta un "
	scanf("%f",&b);
	printf("\n");
	printf("Teclea el valor de c:  ");
	scanf("%f",&c) //falta un ;
	printf("\n");

	/* Realizar los calculos */

	d = sqrt(b*b-4*a*c);
	raiz1 = (-b+d)/(2*a);
	raiz2 = (-b-d)/(2*a);

	printf("Las raices son %f ", raiz1);
	printf("  y  %f", raiz2);
	system("pause");


	/* Ejecuta el programa para los siguientes datos:
	a = 1.0		b = -3.0	c = 2.0
	Interpreta los resultados.
	Volver a ejecutar el programa para:
	a = 1.0		b = 2.0	    c = 3.0 //falta un */
}
