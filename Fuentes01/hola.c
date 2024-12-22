#include <stdio.h>
#include <stdlib.h>

/* HOLA.C es un programa C.
   Imprime un mensaje en la pantalla del ordenador */


int main(void)
{
   printf("Bienvenidos a Laboratorio de programacion.\n");
   system("pause");
   return 0;
}





// COMENTARIOS: Todas estas lineas son tambien comentarios.
//
// Todo programa debe tener una funcion main(), desde donde, se llamara 
// a otras funciones, bien de la libreria estandar o bien codificadas por
// el programador u otras librerias.
//
// Vamos a comentar un poco mas en detalle el anterior codigo, para ir
// aclarando ideas. La primera linea corresponde a sentencias del
// preprocesador. En realidad, no son lineas que se compilan,
// sino que son ordenes que se le dan compilador para que las ejecute
// previamente a la compilacion del codigo. En este caso #include <stdio.h>
// se refiere a que debe incluir la informacion correspondiente a la
// libreria estandar de entrada/salida, stdio.h.
// Realmente esta orden del preprocesador se utiliza para decirle al
// compilador que debe leer e incluir el archivo de texto correspondiente,
// que, en general, contiene lo que mas adelante conoceremos como
// prototipos de las funciones, definiciones tipos de datos e, incluso,
// variables globales.
// Todas las ordenes del preprocesador deben comenzar con el simbolo #.
// Existen mas ordenes de este tipo que ya iremos viendo, aunque esta es la
// mas importante.
//
// La siguiente linea es un comentario. Estos pueden ocupar tantas lineas
// como el programador desee y la unica condicion que deben cumplir es
// que empiecen y terminen como en el ejemplo /*.....*/.
//
// Seguidamente se encuentra la funcion main, que muestra dos caracteristicas
// de toda funcion en C. Por un lado, los parentesis entre los que van
// encerrados los argumentos que se le pasan a la funcion. En el caso de la
// funcion que no recibe argumentos, no se especificaran, colocando en este
// espacio el nombre de tipo void, que significa nulo o ninguno, como
// sucede con main.
// Por otro lado el valor del tipo de dato que devolvera la funcion. En
// este caso como la funcion no devuelve ningun valor, ya que se limita a
// imprimir un mensaje en pantalla, tambien se coloca void.
// Por ultimo, el codigo encerrado entre llaves, que describe la accion
// que va a ejecutar la funcion.


















