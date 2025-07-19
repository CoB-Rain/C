#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sueldo=500.0,plus=0.1,precio_vehiculo=0.0,fijo=50.0;
    int vehiculos_vendidos=0;

    printf("Ingrese el valor del vehiculo principal: $");
    scanf("%f",&precio_vehiculo);
    printf("Ingrese la cantidad de vehiculos que vendió en el mes: ");
    scanf("%d", &vehiculos_vendidos);

    if(vehiculos_vendidos>0)
    {
        //verdadero
        sueldo = sueldo+ (vehiculos_vendidos*precio_vehiculo*plus) + vehiculos_vendidos*precio_vehiculo + fijo*vehiculos_vendidos;
        printf("\nHas vendido un total de %d vehiculos.. por lo tanto te corresponde un sueldo de: $%.2f\n",vehiculos_vendidos,sueldo);
    }
    else
    {
        printf("\nNo has vendido vehiculos este mes.. por lo tanto te corresponde un sueldo de: $%.2f\n",sueldo);
    }

    return 0;
}
