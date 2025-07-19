#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int caras[7];
    int cantidad;
    cantidad=0;
        srand (time(NULL));
      //Inicializo el array
   for(int z=0;z<7;z++)
   {
      caras[z]=0;
   }

    printf("Ingrese la cantidad de veces que desea tirar el dado: ");fflush(stdin);scanf("%d",&cantidad);
    for(int x=0;x<cantidad;x++)
    {
      caras[(rand()%6) + 1]++;
    }
     printf("\n");
     for(int x=1;x<7;x++)
    {
        printf("%10d",x);
    }
    printf("\n\n");
     for(int x=1;x<7;x++)
    {
        printf("%10d",caras[x]);
    }

    return 0;
}
