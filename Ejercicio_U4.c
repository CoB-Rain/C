//U4. Desarrollar un programa que permita ingresar dos números y muestre en 
//pantalla la suma de ambos.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int a=0,b=0,R=0;
        printf("\nIngrese el primer número: ");fflush(stdin);scanf("%i",&a);
        printf("\nIngrese el segundo número: ");fflush(stdin);scanf("%i",&b);
    R = a + b;
        printf("\n\nLa suma de %i mas %i da como resultado: %i\n",a,b,R);fflush(stdin);
        printf("\n");
    system("pause");
    return 0;
}
