#include <stdio.h>

// Función para calcular la suma de los dígitos de un número
int suma_de_digitos(int num) {
    int suma = 0;
    while (num > 0) {
        suma += num % 10;  // Añadir el dígito más a la derecha a la suma
        num /= 10;         // Eliminar el dígito más a la derecha
    }
    return suma;         
}

int main() {
    long long fecha;  

/* Pablo Andérica Torrado*/

    printf("Introduce tu fecha de nacimiento en formato AAAAMMDD (por ejemplo, 20241001): ");
    scanf("%lld", &fecha);  

    int anio = (int)(fecha / 10000);          
    int mes = (int)((fecha / 100) % 100);     
    int dia = (int)(fecha % 100);             

    // Calcular la suma inicial de los dígitos del año, mes y día
    int suma_total = suma_de_digitos(anio) + suma_de_digitos(mes) + suma_de_digitos(dia);

    // Reducir la suma total hasta que sea un solo dígito o un valor estable
    while (suma_total >= 10) {
        suma_total = suma_de_digitos(suma_total);  // Repetir la suma de los dígitos del resultado hasta que sea menor que 10
    }

    printf("Tu numero del Tarot es: %d\n", suma_total);

    return 0; 
}
