/*U33. Un alumno desea saber cuál será su calificación promedio final en la 
materia Programación Estructurada. Dicha calificación se compone de tres 
exámenes parciales.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    float p1=0.0,p2=0.0,p3=0.0,promedio=0.0;
    printf("Nota primer parcial: ");fflush(stdin);scanf("%f",&p1);
    printf("Nota segundo parcial: ");fflush(stdin);scanf("%f",&p2);
    printf("Nota tercer parcial: ");fflush(stdin);scanf("%f",&p3);
    printf("---------------------\n");
    promedio = (p1+p2+p3)/3;
    printf("Su promedio final en Programacion Estructurada es: %.1f",promedio);
    printf("\n\n");
    system("pause");
    return 0;
}
