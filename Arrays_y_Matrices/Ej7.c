#include <stdio.h>

int main() {
    int n, i,avanzar = 0;
    

    // Solicitar la cantidad de números
    printf("¿Cuántos números deseas introducir? (máximo 100): ");
    scanf("%d", &n);

    // Validar el rango de n
    if (n < 1 || n > 100) {
        printf("La cantidad de números debe estar entre 1 y 100.\n");
        return 1;
    }

    int listapri[n], listainv[n];

    // Leer los números y almacenarlos en listapri
    for (i = 0; i < n; i++) {
        printf("Introduce el número %d: ", i + 1);
        scanf("%d", &listapri[i]);
    }

    // Copiar los números en orden inverso a listainv
    for (i = n-1; i >= 0; i--) {
        listainv[avanzar] = listapri[i];
        avanzar++;
    }

    // Mostrar el vector original
    printf("\nVector original:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", listapri[i]);
    }

    // Mostrar el vector invertido
    printf("\nVector invertido:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", listainv[i]);
    }

    return 0;
}
