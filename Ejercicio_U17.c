//U17. Calcular el cambio en dólares y euros al ingresar cierta cantidad en pesos. 
//La cotización del dólar, la del euro y la cantidad en pesos a cambiar las ingresa 
//el usuario.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int p=0;
    float d=0.0,e=0.0;
        printf("\n\nIngrese la cantidad de pesos que desea cambiar: ");fflush(stdin);scanf("%i",&p);
    d = p*0.0083;
    e = p*0.0077;
        printf("\n\nLa cantidad de %i pesos se cotiza a %.2f dolares o %.2f euros\n\n",p,d,e);fflush(stdin);
    return 0;
}
