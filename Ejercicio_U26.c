/*U26. Calcular el nuevo salario de un empleado si se le descuenta el 20% de su 
salario actual.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    float sa=0.0,sn=0.0,descuento=0.0;
    printf("Ingrese su salario actual: $");fflush(stdin);scanf("%f",&sa);
    printf("-------------------------------\n");
    descuento=sa*20/100;
    sn=sa-descuento;
    printf("Su nuevo salario sera de &%.1f\n",sn);fflush(stdin);
    printf("Se le ha descontado: $%.1f\n\n",descuento);
    system("pause");
    return 0;
}
