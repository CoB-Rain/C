//U18. Calcular el descuento y el monto a pagar por un medicamento cualquiera 
//en una farmacia si todos los medicamentos tienen un descuento del 35%. El 
//usuario ingresa el valor del medicamento.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int d=0,m=0,p=0;
    printf("\n\nIngrese el precio del medicamento: $");fflush(stdin);scanf("%i",&p);
    d = p*35/100;
    m = p - d;
    printf("\n\nSu medicamento le costara: $%i , Luego de un descuento del 35 porciento.\n\n",m);fflush(stdin);
    system("pause");
    return 0;
}
