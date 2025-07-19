#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h> 
//inicializamos
int suma(int a, int b);
int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int a=0,b=0;
    printf("Ingrese el primer numero: ");fflush(stdin);scanf("%i",&a);
    printf("Ingrese el segundo numero: ");fflush(stdin);scanf("%i",&b);
    printf("----------------------------");
    int resultado=suma(a,b);
    printf("\nEl resultado de %i + %i es: %i\n\n",a,b,resultado);fflush(stdin);
    system("pause");
    return 0;
}
//definimos
int suma(int a,int b)
{
    int suma=a+b;
    return suma;
}
