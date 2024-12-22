#include <stdio.h>

int main()
{
    /*Pablo Andérica Torrado*/

    float notas = 0.0;
    float sobresalientes = 0.0, notables = 0.0, aprobados = 0.0, suspensos = 0.0, muyDeficientes = 0;
    int contador = 0;
    float media = 0.0;

    do
    {
        printf("Ingrese la siguiente nota: ");
        scanf("%f", &notas);

        if (notas > 10)
        {
            continue;
        }
        else if (notas < 0)
        {
            break;
        }
        else if (notas >= 9)
        {
            sobresalientes++;
            contador++;
        }
        else if (7 <= notas && notas < 9)
        {
            notables++;
            contador++;
        }
        else if (5 <= notas && notas < 7)
        {
            aprobados++;
            contador++;
        }
        else if (2 <= notas && notas < 5)
        {
            suspensos++;
            contador++;
        }
        else if (notas < 2)
        {
            muyDeficientes++;
            contador++;
        }
        media = media + notas;

    } while (notas >= 0);

    int total = sobresalientes + notables + aprobados + suspensos + muyDeficientes;
    float notaMedia = media / contador;
    float psobresalientes = (sobresalientes / contador) * 100;
    float pnotables = (notables / contador) * 100;
    float paprobados = (aprobados / contador) * 100;
    float psuspensos = (suspensos / contador) * 100;
    float pdeficientes = (muyDeficientes / contador) * 100;

    // Imprimir los resultados
    printf("\nTotal alumnos presentados a examen: %d\n", contador);
    printf("Número de sobresalientes...........: %.0f ( %.2f%% )\n", sobresalientes, psobresalientes);
    printf("Número de notables.................: %.0f ( %.2f%% )\n", notables, pnotables);
    printf("Número de aprobados................: %.0f ( %.2f%% )\n", aprobados, paprobados);
    printf("Número de suspensos................: %.0f ( %.2f%% )\n", suspensos, psuspensos);
    printf("Número de muy deficientes..........: %.0f ( %.2f%% )\n", muyDeficientes, pdeficientes);
    printf("Nota media.........................: %.2f %s\n", notaMedia, (notaMedia >= 5) ? "(Aprobado)" : "(Suspenso)");

    return 0;
}