#include <stdio.h>

int main() {
    int n, i, max_dif = 0;
    int numeros[100];

    // Solicitar la cantidad de números a introducir
    printf("¿Cuántos números deseas introducir? (máximo 100): ");
    scanf("%d", &n);

    // Validar el rango de n
    if (n < 1 || n > 100) {
        printf("La cantidad de números debe estar entre 1 y 100.\n");
        return 1;
    }

    // Leer el primer número
    printf("Introduce el número 1: ");
    scanf("%d", &numeros[0]);

    // Leer los siguientes números y verificar que sean mayores que el anterior
    for (i = 1; i < n; i++) {
        int num;
        printf("Introduce el número %d: ", i + 1);
        scanf("%d", &num);

        if (num > numeros[i - 1]) {
            numeros[i] = num;
        } else {
            printf("El número debe ser mayor que el anterior (%d). Intenta de nuevo.\n", numeros[i - 1]);
            i--; // Reintentar el mismo índice
        }
    }

    // Calcular la máxima diferencia entre números consecutivos
    for (i = 1; i < n; i++) {
        int dif = numeros[i] - numeros[i - 1];
        if (dif > max_dif) {
            max_dif = dif;
        }
    }

    // Mostrar el vector y la máxima diferencia
    printf("\nNúmeros introducidos:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nLa máxima diferencia entre números consecutivos es: %d\n", max_dif);

    return 0;
}
