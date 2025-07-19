//U21. Ídem al anterior pero el usuario ingresa el porcentaje de cada área. 
//También nos solicitan que se observe en la pantalla los porcentajes ingresados.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int u=0,p=0,t=0,pa=0,pu=0,pp=0,pt=0;
        printf("\n\nIngrese el presupuesto anual del hospital: $");fflush(stdin);scanf("%i",&pa);
        printf("\nIngrese el porcentaje que se llevaria Urgencias: ");fflush(stdin);scanf("%i",&pu);
        printf("\nIngrese el porcentaje que se llevaria Pediatria: ");fflush(stdin);scanf("%i",&pp);
        printf("\nIngrese el porcentaje que se llevaria Traumatologia: ");fflush(stdin);scanf("%i",&pt);
    u = pa*pu/100;
    p = pa*pp/100;
    t = pa*pt/100;
        printf("\n\nAl area de Urgencias le corresponden $%i\nAl area de Pediatria le corresponden $%i\nAl area de Traumatologia le corresponden $%i\n\n",u,p,t);fflush(stdin);
    system("pause");
    return 0;
}
