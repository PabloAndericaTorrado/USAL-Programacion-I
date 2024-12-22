#include <stdio.h>

int main()
{
    int x = 5;
    int y = 10;
    int ayuda;

   printf("Las variables x=%d e y=%d\n",x,y);

    ayuda = x;
    x = y;
    y = ayuda;
   printf("Las variables x=%d e y=%d",x,y);


    return 0;
}