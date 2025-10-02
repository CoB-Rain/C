//U20. En un hospital existen 3 áreas: Urgencias, Pediatría y Traumatología. El 
//presupuesto anual del hospital se reparte de la siguiente manera:
//Urgencias 37%
//Pediatría 42%
//Traumatología 21%
//Si el usuario ingresa el presupuesto anual, mostrar cuánto dinero le corresponde 
//a cada área.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int u=0,p=0,t=0,pa=0;
        printf("\n\nIngrese el presupuesto anual del hospital: $");fflush(stdin);scanf("%i",&pa);
    u = pa*37/100;
    p = pa*42/100;
    t = pa*21/100;
        printf("\nAl area de Urgencias le corresponden $%i\nAl area de Pediatria le corresponden $%i\nAl area de Traumatología le corresponden $%i\n\n",u,p,t);fflush(stdin);
    system("pause");
    return 0;
}
