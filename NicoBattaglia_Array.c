#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int i,cat;
    int n=3;
    int c[5];//declaran

    for(i=0;i<n;i++){//inicializan
        c[i]=0;//se acceden por un indice
    }

    for(i=0;i<=5;i++){
        printf("Ingrese el numero de categoria: ");
        scanf("%d",&cat);

        c[cat-1]++;
    }

    for(i=0;i<n;i++){
        printf("La cantidad de empleados de la categoria %d es de %d\n",i+1,c[i]);
    }
    system("pause");
    return 0;
}
