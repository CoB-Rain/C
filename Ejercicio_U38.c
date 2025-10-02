/*U38. Elabore un programa que permita ingresar el precio y la cantidad de un 
artículo a comprar. Calcular el total a pagar. (Considerar el IVA 21%).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int precio=0,cantidad=0,iva=0,producto=0;
    float total=0.0;
    printf("Ingrese el precio del producto: $");fflush(stdin);scanf("%i",&precio);
    printf("Ingrese la cantidad del producto: ");fflush(stdin);scanf("%i",&cantidad);
    printf("---------------------------------\n");
    producto = precio*cantidad;
    iva = producto*21/100;
    total = producto + iva;
    printf("El total a pagar es: $%.2f",total);
    printf("\n\n");
    system("pause");
    return 0;
}
