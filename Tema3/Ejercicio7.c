#include <stdio.h>

int main() {
    printf("Ocupación de los distintos tipos de datos en C\n");
    printf("=================================================\n");
    printf("tipo                 | ocupacion en bytes\n");
    printf("----------------------|------------------------\n");
    
    printf("CARACTERES\n");
    printf("unsigned char        | %zu\n", sizeof(unsigned char));
    printf("char                 | %zu\n", sizeof(char));
    
    printf("\nENTEROS\n");
    printf("int                  | %zu\n", sizeof(int));
    printf("unsigned int         | %zu\n", sizeof(unsigned int));
    printf("short                | %zu\n", sizeof(short));
    printf("unsigned short       | %zu\n", sizeof(unsigned short));
    printf("long                 | %zu\n", sizeof(long));
    printf("unsigned long        | %zu\n", sizeof(unsigned long));
    
    printf("\nREALES\n");
    printf("float                | %zu\n", sizeof(float));
    printf("double               | %zu\n", sizeof(double));
    printf("long double          | %zu\n", sizeof(long double));
    
    return 0;
}
