//U2. Desarrollar un programa que permita ingresar un caracter y visualizarla por pantalla.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char _c=0;
        printf("\nIngrese un caracter: ");fflush(stdin);scanf("%c",&_c);
        printf("\n\nEl caracter ingresado es: %c\n",_c);fflush(stdin);
        printf("\n");
    system("pause");
    return 0;
}
