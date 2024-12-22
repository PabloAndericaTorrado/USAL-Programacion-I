#include <stdio.h>
#include <math.h>

void Polaresacartesianas(float r, float ang, float *x, float *y);
void mostrarMenu();

int main()
{

    char opcion;
    float x, y;
    float ang, r;
    do
    {
        // Mostrar menú
        mostrarMenu();
        printf("Seleccione una opción: ");
        scanf(" %c", &opcion); // Leer la opción
        switch (opcion)
        {
        case 'A':

            printf("Introduce el valor de r: ");
            scanf("%f", &r);
            printf("Introduce el valor de theta (en radianes): ");
            scanf("%f", &ang);

            // Conversión
            Polaresacartesianas(r, ang, &x, &y);
            printf("Coordenadas cartesianas: x = %.2f, y = %.2f\n", x, y);
            system("pause"); // Pausa antes de regresar al menú
            break;
        case 'B':
            /* code */
            break;
        case 'S':
        case 's':
            printf("Saliendo del programa...\n");
            break;

        default:
            printf("Opción no válida. Intente de nuevo.\n");
            system("pause"); // Pausa antes de regresar al menú
        }
    } while (opcion != 'S' && opcion != 's');

    return 0;
}

void Polaresacartesianas(float r, float ang, float *x, float *y)
{

    *x = r * cos(ang);
    *y = r * sin(ang);
}
void mostrarMenu()
{
    system("cls"); // Limpia la pantalla (en sistemas compatibles con Windows)
    printf("=== Menú ===\n");
    printf("A) Convertir de coordenadas polares a cartesianas\n");
    printf("B) Convertir de coordenadas cartesianas a polares\n");
    printf("S) Salir\n");
}