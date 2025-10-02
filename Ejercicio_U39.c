/*U39. Hacer un programa que me muestre la raíz cuadrada de cualquier número 
ingresado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int n=0;
    float raiz=0.0;
    printf("Calculadora de Raiz cuadrada");
    printf("\n-----------------------------\n");
    printf("Ingrese un numero: ");fflush(stdin);scanf("%i",&n);
    raiz = sqrt(n);
    printf("\nLa raiz cuadrada de %i es %.2f",n,raiz);
    printf("\n\n");
    system("pause");
    return 0;
}
