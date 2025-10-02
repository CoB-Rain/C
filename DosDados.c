#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"spanish");
  int valores[13];
  int cantidad,dado1,dado2;
  cantidad=0;dado1=0;dado2=0;
  srand (time(NULL));
  //Inicializo el array
  for(int z=0;z<13;z++)
  {
    valores[z]=0;
  }
  printf("Ingrese la cantidad de veces que desea tirar el dado: ");fflush(stdin);scanf("%d",&cantidad);
  for(int x=0;x<cantidad;x++)
  {
    dado1=(rand()%6) + 1;
    dado2=(rand()%6) + 1;
    valores[dado1+dado2]++;
  }
  printf("\n");
  for(int x=2;x<13;x++)
  {
    printf("%8d",x);
  }
  printf("\n\n");
  for(int x=2;x<13;x++)
  {
    printf("%8d",valores[x]);
  }
  printf("\n\n");
  system("pause");
  return 0;
}
