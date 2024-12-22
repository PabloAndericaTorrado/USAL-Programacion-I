#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char cadena_original[MAX_LEN];
    char cadena_invertida[MAX_LEN];
    int longitud, i;

    while (1) {
        // Leer la cadena de texto del usuario
        printf("Introduce una línea de texto (máximo %d caracteres): ", MAX_LEN - 1);
        fgets(cadena_original, MAX_LEN, stdin);

        // Remover el salto de línea al final, si existe
        cadena_original[strcspn(cadena_original, "\n")] = '\0';

        // Calcular la longitud de la cadena
        longitud = strlen(cadena_original);

        // Invertir la cadena en cadena_invertida
        for (i = 0; i < longitud; i++) {
            cadena_invertida[i] = cadena_original[longitud - i - 1];
        }
        cadena_invertida[longitud] = '\0'; // Agregar el carácter nulo al final

        // Mostrar la cadena original e invertida
        printf("Cadena original: %s\n", cadena_original);
        printf("Cadena invertida: %s\n", cadena_invertida);

        // Preguntar al usuario si desea continuar
        char opcion;
        printf("¿Deseas invertir otra línea de texto? (s/n): ");
        scanf(" %c", &opcion);
        getchar();  // Limpiar el salto de línea residual

        if (opcion == 'n' || opcion == 'N') {
            break;
        }
    }

    return 0;
}
