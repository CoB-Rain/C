//U11. Desarrollar un programa que permita ingresar una cantidad que represente 
//la temperatura en grados centígrados (Celsius) y muestre por pantalla cuál sería 
//su equivalente en grados Kelvin. (Pista: investigar la relación entre las dos 
//escalas de temperatura)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float c=0.0,k=0.0;
        printf("\nIngrese la cantidad de grados Celsius: ");fflush(stdin);scanf("%f",&c);
    k = c + 273.15;
        printf("\n\nLa cantidad de %.1f grados Celsius equivale a %.2f grados Kelvin\n",c,k);fflush(stdin);
        printf("\n");
    system("pause");
    return 0;
}
