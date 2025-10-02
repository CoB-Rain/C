/*U32. Una tienda ofrece un descuento del 25% sobre el total de la compra y un 
cliente desea saber cuánto deberá pagar finalmente por su compra.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int totalCompra=0,descuento=0,totalFinal=0;
    printf("Ingrese el total de la compra del cliente: $");fflush(stdin);scanf("%i",&totalCompra);
    printf("-------------------------------------------\n");
    descuento = totalCompra*25/100;
    totalFinal = totalCompra - descuento;
    printf("Monto final a pagar: $%i\n(interes aplicado 25 o/o)",totalFinal);
    printf("\n\n");
    system("pause");
    return 0;
}
