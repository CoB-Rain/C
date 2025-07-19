/*U70. Desarrollar un programa que permita ingresar dos números enteros y 
mostrarlos por pantalla de mayor a menor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int valor1=0,valor2=0;
    printf("Ingrese el primer numero: ");fflush(stdin);scanf("%i",&valor1);
    printf("Ingrese el segundo numero: ");fflush(stdin);scanf("%i",&valor2);
    printf("----------------------------");
    if(valor1>valor2)
    {
        //verdadero
        printf("\nEl orden es:\n%i\n%i\n\n",valor1,valor2);fflush(stdin);
    }
    else
    {
        //falso
        printf("\nEl orden es:\n%i\n%i\n\n",valor2,valor1);fflush(stdin);
    }
    system("pause");
    return 0;
}
