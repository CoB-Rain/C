#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
//numero = rand () % 11 + 20;  // Este está entreo 20 y 30
//numero = rand () % (N-M+1) + M;   // Este está entre M y N
    srand (time(NULL));
    int menor,mayor,aux,cantidad;
    menor=0;mayor=0;aux=0,cantidad=0;
    printf("Ingrese el primer valor: ");fflush(stdin);scanf("%d",&menor);
    printf("Ingrese el segundo valor: ");fflush(stdin);scanf("%d",&mayor);
    printf("Ingrese la cantidad de números pseudoaleatorios que desea: ");fflush(stdin);scanf("%d",&cantidad);
    //nos garantizamos tener en la variable menor el más chico y en mayor el más grande
    if(menor>mayor)
    {
        aux=menor;
        menor=mayor;
        mayor=aux;
    }
    for(int x=0;x<cantidad;x++)
    {
        printf("%d\n",(rand()%(mayor-menor+1))+menor);
    }
    return 0;
}
