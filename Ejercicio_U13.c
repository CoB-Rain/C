//U13. Desarrollar un programa que permita ingresar una cantidad que represente 
//la temperatura en grados centígrados (Celsius) y muestre por pantalla cuál sería 
//su equivalente en grados Rankine. (Pista: investigar la relación entre las dos 
//escalas de temperatura)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float c=0.0,r=0.0;
        printf("\nIngrese la cantidad de grados Celsius: ");fflush(stdin);scanf("%f",&c);
    r = (c + 273.15) * 1.8;
        printf("\n\nLa cantidad de %.1f grados Celsius equivale a %.2f grados Rankine\n\n",c,r);fflush(stdin);
        printf("\n");
    system("pause");
    return 0;
}
