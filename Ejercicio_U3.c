//U3. Desarrollar un programa que permita ingresar su nombre y visualizar por 
//pantalla un saludo que exprese “Buen día” más el nombre ingresado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    char nombre [51];
        printf("\nIngrese su nombre: ");fflush(stdin);
    //scanf("%s",&nombre);
    gets(nombre);
        printf("\n\nBuen dia %s!\n",nombre);fflush(stdin);
        printf("\n");
    system("pause");
    return 0;
}
