/*U34. Un maestro desea saber qué porcentaje de hombres y que porcentaje de 
mujeres hay en un grupo de estudiantes.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int hombres=0,mujeres=0;
    float porcentajeh=0.0,porcentajem=0.0,porcentajet=0.0;
    printf("Ingrese la cantidad de hombres: ");fflush(stdin);scanf("%i",&hombres);
    printf("Ingrese la cantidad de mujeres: ");fflush(stdin);scanf("%i",&mujeres);
    printf("--------------------------------\n");
    int total;
    total = hombres + mujeres;
    porcentajet = 100/total;
    porcentajeh = porcentajet*hombres;
    porcentajem = porcentajet*mujeres;
    printf("\nPorcentaje de hombres: %.2f porciento",porcentajeh);
    printf("\nPorcentaje de mujeres: %.2f porciento",porcentajem);
    printf("\n\n");
    system("pause");
    return 0;
}
