#include <stdio.h>

void generarCuadradoMagico(int n)
{
    int cuadrado[n][n];

    // Inicializar la matriz con -1 para identificar celdas vacías
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cuadrado[i][j] = -1; // Todas las celdas se marcan como vacías
        }
    }

    // Algoritmo para llenar el cuadrado mágico
    int num = 1;          // Iniciar con el primer número a colocar
    int i = 0;            // Empezar en la primera fila
    int j = n / 2;        // Empezar en la columna del medio
    cuadrado[i][j] = num; // Colocar el número en la celda actual
    num++;                // Incrementar el número para la siguiente celda

    while (num <= n * n)
    { // Continuar hasta llenar todos los espacios

        // Calcular la nueva posición moviéndose una fila arriba y una columna a la derecha
        int nuevo_i = (i - 1 + n) % n; // Si se sale por arriba, vuelve a la última fila
        int nuevo_j = (j + 1) % n;     // Si se sale por la derecha, vuelve a la primera columna

        if (cuadrado[nuevo_i][nuevo_j] != -1)
        { // Verificar si la nueva celda ya está ocupada
            // La celda está ocupada, se mueve hacia abajo de la celda actual
            i = (i + 1) % n; // Moverse abajo
        }
        else
        {
            // La celda está libre, actualizar la posición actual
            i = nuevo_i;
            j = nuevo_j;
        }

        cuadrado[i][j] = num; // Colocar el número en la celda actual
        num++;                // Incrementar el número para la siguiente celda
    }

    // Imprimir el cuadrado mágico
    printf("Cuadrado Mágico de orden %d:\n", n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", cuadrado[i][j]); // Mostrar cada número con espacio de 4 caracteres
        }
        printf("\n"); // Nueva línea después de cada fila
    }

    // Calcular la suma mágica (la suma constante que debe aparecer en todas las filas, columnas y diagonales)
    int sumaMagica = n * (n * n + 1) / 2;
    printf("Número mágico: %d\n", sumaMagica);
}

int main()
{
    int n;
    printf("Introduce el orden del cuadrado mágico (impar y <= 15): ");
    scanf("%d", &n); // Leer el valor de N

    // Validar que el valor de N sea impar y esté en el rango permitido
    if (n % 2 == 0 || n < 1 || n > 15)
    {
        printf("El orden debe ser impar y mayor que 1, y menor o igual a 15.\n");
    }
    else
    {
        generarCuadradoMagico(n); // Llamar a la función para generar el cuadrado mágico
    }

    return 0;
}
