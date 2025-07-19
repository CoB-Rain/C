/*U68. Desarrollar un programa que permita ingresar un valor entero al usuario 
y determine si es positivo o negativo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int valor=0;
    printf("Ingrese un numero: ");fflush(stdin);scanf("%i",&valor);
    printf("--------------------");
    if(valor==0)
    {
        //verdadero
        printf("\nEl numero que ha ingresado no es positivo ni negativo\n\n");fflush(stdin);
    }
    else
    {
        //falso
        if(valor>0)
        {
        //verdadero
        printf("\nEl numero que ha ingresado es positivo\n\n");fflush(stdin);
        }
        else
        {
        //falso
        printf("\nEl numero que ha ingresado es negativo\n\n");fflush(stdin);
        }
    }
    system("pause");
    return 0;
}
