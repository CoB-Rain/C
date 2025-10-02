/*U67. Desarrollar un programa que permita ingresar un valor entero y determine 
si es par o impar.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int valor=0;
        printf("Ingrese un numero: ");fflush(stdin);scanf("%i",&valor);
        printf("--------------------\n");fflush(stdin);
    valor = valor%2;
    if(valor == 0)
    {
        //verdadero
        printf("El numero es par");
    }
    else
    {
        //falso
        printf("El numero es impar");
    }
    printf("\n\n");
    system("pause");
    return 0;
}
