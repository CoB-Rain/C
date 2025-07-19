/*U36. Convertir una distancia en metros a centímetros y pulgadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int metros=0,centimetros=0;
    float pulgadas=0.0;
    printf("Ingrese la distancia en metros: ");fflush(stdin);scanf("%i",&metros);
    printf("---------------------------------\n");
    centimetros = metros*100;
    pulgadas = metros*39.37;
    printf("La distancia de %i metros equivale a %i centimetros y %.2f pulgadas",metros,centimetros,pulgadas);
    printf("\n\n");
    system("pause");
    return 0;
}
