/*U24. Un constructor sabe que necesita 0,5 metros cúbicos de arena por metro 
cuadrado de revoque a realizar. Hacer un programa donde ingrese las medidas 
de una pared (largo y alto) expresada en metros y obtenga la cantidad de arena 
necesaria para revocarla.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    float arena=0.0,metros=0.0,largo=0.0,altura=0.0;
        printf("Ingrese la altura de la pared: ");fflush(stdin);scanf("%f",&altura);
        printf("Ingrese el largo de la pared: ");fflush(stdin);scanf("%f",&largo);
    metros=largo/altura;
    arena=metros*0.5;
        printf("\nLa cantidad de arena que se necesita para revocar la pared es de: %.2f mts\n",arena);fflush(stdin);
    system("pause");
    return 0;
}
