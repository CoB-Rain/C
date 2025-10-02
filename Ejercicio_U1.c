//U1. Desarrollar un programa que permita ingresar un número y visualizarlo por pantalla.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"spanish");
    int a=0;
        printf("\nIngrese un número: ");fflush(stdin);scanf("%i",&a);
        printf("\n\nEl número ingresado es: %i\n",a);fflush(stdin);
    printf("\n");
    system("pause");
    return 0;
}
