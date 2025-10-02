//U14. Una persona recibe un préstamo en pesos de un banco y desea saber 
//cuánto pagará de interés, si el banco le cobra una tasa del 27% anual. El usuario 
//ingresa cuánto dinero desea solicitar y la cantidad de años que tardará en 
//retornarlo.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float dinero=0.0,interes=0.0,tasa=0.0,anos=0.0;
        printf("\nIngrese la cantidad de dinero que desea retirar: $");fflush(stdin);scanf("%f",&dinero);
        printf("\nIngrese la cantidad de años: ");fflush(stdin);scanf("%f",&anos);
    tasa = 0.27;
    interes = dinero * tasa * anos/1200;
        printf("\n\nLa cantidad de interes que debera pagar es: $%.2f\n\n",interes);fflush(stdin);
        printf("\n");
    system("pause");
    return 0;
}
