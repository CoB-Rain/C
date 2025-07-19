//U10. Desarrollar un programa que permita ingresar una cantidad que represente 
//los kilos de pan comprados y muestre por pantalla cuál sería su equivalente en 
//gramos.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int g=0,k=0;
        printf("\nIngrese la cantidad de kilos de pan que quiera comprar: ");fflush(stdin);scanf("%i",&k);
    g = k*1000;
        printf("\n\nLa cantidad de %i kilo/s equivale a %i gramos\n",k,g);fflush(stdin);
        printf("\n");
    system("pause");
    return 0;
}
