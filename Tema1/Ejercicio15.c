#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num_teclado;
    int suma = 0;
    int contador = 0;

    while (1) //While true en C
    {
        
        printf("Introduce numeros positivos\n");
        scanf("%d", &num_teclado);
        // Verificar si el número es negativo o cero
        if (num_teclado <= 0)
        {
            printf("Has introducido un numero negativo o cero\n");
            printf("Se acabo el programa\n");
            printf("La media de los numeros introducidos es: %.2f\n", (float)suma / contador);
            return 0;
        }

        contador++;
        suma = suma + num_teclado;
    }

    return 0;
}

