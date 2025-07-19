#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int numeros[5];
    //inicializo el array
    int z=0;
    for(z=0;z<5;z++)
    {
        numeros[z]==0;
    }
    //cargamos el array
    for(z=0;z<5;z++)
    {
        printf("Ingrese un número en la posición %i del array: ",z);fflush(stdin);scanf("%i",&numeros[z]);
    }
    printf("\n\n\n");
    //mostramos los valores del array
    for(z=0;z<5;z++)
    {
        printf("En la posición %i del array hay un %i\n: ",z,numeros[z]);
    }
    printf("\n\n\n");
    system("pause");
    return 0;
}

