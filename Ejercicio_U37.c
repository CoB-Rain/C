/*U37. Desplegar el peso dado en kilos de una persona en gramos, libras y 
toneladas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int kilos=0,gramos=0;
    float libras=0.0,toneladas=0.0;
    printf("Ingrese su peso en kilos: ");fflush(stdin);scanf("%i",&kilos);
    printf("-------------------------\n");
    gramos = kilos*1000;
    libras = kilos*2.20462262;
    toneladas = kilos*0.001;
    printf("Su peso de %i kilos equivale a %i gramos, %.2f libras y %.3f toneladas",kilos,gramos,libras,toneladas);
    printf("\n\n");
    system("pause");
    return 0;
}
