/*U30. Suponga que un individuo desea invertir su capital en un banco y desea 
saber cuánto dinero ganará después de un año si el banco paga a razón de 5,5% 
mensual.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int capitalActual=0;
    float intereses=0.0,capitalFinal=0.0,nuevoCapital=0.0;
    printf("Ingrese el capital que desea invertir: $");fflush(stdin);scanf("%i",&capitalActual);
    printf("---------------------------------------------\n");
    intereses = capitalActual*5.5/100;
    printf("Progreso del capital en meses:");
    printf("\n-------------------------------\n");
    nuevoCapital = capitalActual + intereses;
    printf("1. $%.2f |",nuevoCapital);
    for(int i=0;i<11;i++)
    {
        intereses = nuevoCapital*5.5/100;
        nuevoCapital = nuevoCapital + intereses;
        printf("%i. $%.2f |",i+2,nuevoCapital);
    }
    capitalFinal = nuevoCapital;
    printf("\n\nEn un año usted ganara: $%.2f. (interes aplicado del 5,5 o/o mensual)",capitalFinal);
    printf("\n\n");
    system("pause");
    return 0;
}
