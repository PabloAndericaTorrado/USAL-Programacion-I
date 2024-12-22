#include <stdio.h>

int main()
{
    int n, i, temp;
    int listapri[100];

    // Solicitar la cantidad de números
    printf("¿Cuántos números deseas introducir? (máximo 100): ");
    scanf("%d", &n);

    // Validar el rango de n
    if (n < 1 || n > 100)
    {
        printf("La cantidad de números debe estar entre 1 y 100.\n");
        return 1;
    }

    // Leer los números y almacenarlos en listapri
    for (i = 0; i < n; i++)
    {
        printf("Introduce el número %d: ", i + 1);
        scanf("%d", &listapri[i]);
    }

    // Invertir el vector en su lugar
    for (i = 0; i < n / 2; i++)
    {                                      // Itera solo hasta la mitad del array
        temp = listapri[i];                // Guarda el elemento actual en una variable temporal   
        listapri[i] = listapri[n - 1 - i]; // Asigna el elemento desde el final del array al inicio
        listapri[n - 1 - i] = temp;        // Coloca el valor guardado en la posición final correspondiente
    }

    // Mostrar el vector invertido
    printf("\nVector invertido:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", listapri[i]);
    }

    return 0;
}
