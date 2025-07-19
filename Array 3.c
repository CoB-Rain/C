#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL,"spanish");
    char nombres[5][2][20];
    char nombrecompleto[39]="";
    //inicializo la matriz
    for(int x=0;x<5;x++)
    {
        strcpy(nombres[x][0],"");
        strcpy(nombres[x][1],"");
    }
    //El usuario carga los nombres
    for(int x=0;x<5;x++)
    {
        printf("Ingrese el nombre de la posición %d: ",x);fflush(stdin);scanf("%s",&nombres[x][0]);
        printf("Ingrese el apellido de %s: ",nombres[x][0]);fflush(stdin);scanf("%s",&nombres[x][1]);
    }

    printf("\n\n");
     //El usuario carga los nombres
    for(int x=0;x<5;x++)
    {
        strcpy(nombrecompleto,nombres[x][0]);
        strcat(nombrecompleto, " ");
        strcat(nombrecompleto,nombres[x][1]);
        printf("El nombre y apellido de la posición %d es: %s\n",x,nombrecompleto);
    }
     printf("\n\n");
    return 0;
}
