//U9. Desarrollar un programa que permita ingresar un número y muestre en 
//pantalla el resultado de calcular la raíz cuadrada de número ingresado.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int a=0;
    float R=0.0;
        printf("\nIngrese un número: ");fflush(stdin);scanf("%i",&a);
    R = sqrt (a);
        printf("\n\nLa raíz cuadrada de %i da como resultado: %.2f\n",a,R);fflush(stdin);
        printf("\n");
    system("pause");
    return 0;
}
