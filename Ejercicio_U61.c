/*U61. Desarrollar un programa que permita ingresar un string de 20 caracteres 
y lo muestre por pantalla*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    char string[21];
    printf("Ingrese un string de 20 caracteres: ");fflush(stdin);scanf(" %c",&string);
    printf("\n %c",string);
    printf("\n\n");
    system("pause");
    return 0;
}
