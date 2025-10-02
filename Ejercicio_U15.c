//U15. Calcula el precio de un boleto de viaje, tomando en cuenta el número de 
//kilómetros que se van a recorrer, siendo el precio de pesos 10,50 por Km. El 
//usuario ingresa cuántos kilómetros va a recorrer.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int k = 0;
    float p = 0.0;
        printf("\nIngrese la cantidad de kilometros que va a recorrer: ");fflush(stdin);scanf("%i",&k);
        printf("km");
    p = k * 10.50;
        printf("\n\nEl boleto de tu viaje costara: $%.2f\n\n",p);fflush(stdin);
        printf("\n");
    system("pause");
    return 0;
}
