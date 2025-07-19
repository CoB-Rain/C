/*U31. Un vendedor recibe un sueldo base más un 10% extra por comisión de sus 
ventas, el vendedor desea saber cuánto dinero obtendrá por concepto de 
comisiones por las ventas que realiza en el mes y el total que recibirá en el mes 
tomando en cuenta su sueldo base y comisiones.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int sueldoBase=0,comision=0,total=0;
    printf("Ingrese el sueldo base que recibe: $");fflush(stdin);scanf("%i",&sueldoBase);
    printf("--------------------------------------\n");
    comision = sueldoBase*10/100;
    total = sueldoBase + comision;
    printf("Por concepto de comisiones de venta que realiza por mes, recibira: $%i",comision);fflush(stdin);
    printf("\nEl sueldo total que recibira en el mes es de: $%i",total);
    printf("\n\n");
    system("pause");
    return 0;
}
