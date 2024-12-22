#include <stdio.h>
int main() {

int horas, minutos, segundos, horas2, minutos2, segundos2;

printf("Introduzca el timepo del primer corerdor:");
printf("\nHoras: ");
scanf("%d", &horas);
printf("Minutos: ");
scanf("%d", &minutos);
printf("Segundos: ");
scanf("%d", &segundos);

printf("Introduzca el timepo del segundo corerdor:");
printf("\nHoras: ");
scanf("%d", &horas2);
printf("Minutos: ");
scanf("%d", &minutos2);
printf("Segundos: ");
scanf("%d", &segundos2);

int horas3 = horas - horas2;
int minutos3 = minutos - minutos2;
int segundos3 = segundos - segundos2;

if (minutos3 || segundos3 < 0)
{
    if (minutos3 < 0)
    {
        minutos3 = 60 + minutos3;
        horas3 = horas3 - 1;
    }
    if (segundos3 < 0)
    {
        segundos3 = 60 + segundos3;
        minutos3 = minutos3 - 1;
    }
}
/* Pablo Andérica Torrado*/


printf("La distancia entre ambos corredores es de:");
printf("\nHoras: %d, minutos: %d, segundos: %d", horas3,minutos3, segundos3);

return 0;
}
