/*U59. Desarrollar un programa que posea una variable global y cambiarle el 
valor desde dos funciones distintas. Mostrar los valores que adopta en cada 
función luego de cambiarlo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int x=0;

void funcion1(int x)
{
    printf("Ingrese el valor que va a poseer la variable global en funcion 1: ");
    fflush(stdin);scanf("%i",&x);
    printf("\nEl valor de x en funcion 1 es: %i",x);
}

void funcion2(int x)
{
    printf("Ingrese el valor que va a poseer la variable global en funcion 2: ");
    fflush(stdin);scanf("%i",&x);
    printf("\nEl valor de x en funcion 2 es: %i",x);
}

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    funcion1(x);
    printf("\n\n");
    funcion2(x);
    printf("\n\n");
    system("pause");
    return 0;
}
