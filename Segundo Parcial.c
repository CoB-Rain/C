/*Programa 1:
Realizar un programa que le permita ingresar una cantidad n de enteros informada por el usuario. Los
números se deben cargar en un vector en la funcion main() del programa. Luego de cargado presente
un menú que permita:

1. Buscar un número e informar si existe. (La función buscar debe estar en la función).
2. Mostrar el total de todos los números sumados.
3. Mostrar el número más grande.
4. Mostrar el número más chico.
5. Salir del Programa*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int x=0;
void buscar(int v[x])
{
    int i=0,d=0;
    printf("\nIngrese el numero que quiere buscar: ");fflush(stdin);scanf("%i",&d);
    for(i=0;i<x;i++)
    {
        if(v[i]==d)
        {
            //verdadero
            printf("\nEl numero %i se encuentra en la posicion %i\n\n",v[i],i+1);
            return i;
        }
    }
    printf("\nEl numero buscado no existe\n\n");
    return -1;
}


void suma(int v[x])
{
    int resultado=0,i=0;
    for(i=0;i<x;i++)
    {
        resultado=v[i]+resultado;
    }
    printf("\nEl resultado de la suma de todos los numeros es: %i\n\n",resultado);
}


void mayor(int v[x])
{
    int may=v[0];
    int p=0;
    for(int i=1;i<x;i++)
    {
        if (v[i]>may)
        {
            //verdadero
            may=v[i];
            p=i;
        }
    }
    printf("\nEl numero mas grande es: %i\n",may);fflush(stdin);
    printf("El numero se encuentra en la posicion %i\n\n",p+1);
}


void menor(int v[x])
{
    int men=v[0];
    int p=0;
    for(int i=1;i<x;i++)
    {
        if(v[i]<men)
        {
            //verdadero
            men=v[i];
            p=i;
        }
    }
    printf("\nEl numero mas chico es: %i\n",men);fflush(stdin);
    printf("El numero se encuentra en la posicion %i\n\n",p+1);
}


int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int i=0,opcion=0;
    printf("Ingrese la cantidad de posiciones del vector: ");fflush(stdin);scanf("%i",&x);
    int v[x];
    printf("\n");
    for(i=0;i<x;i++)
    {
        v[i]=0;
    }
    for(i=0;i<x;i++)
    {
        printf("Ingrese el numero que quiera guardar en la posicion %i: ",i+1);fflush(stdin);scanf("%i",&v[i]);
    }
    printf("\n");
    for(i=0;i<x;i++)
    {
        printf("En la posicion %i se guardo el numero %i\n",i+1,v[i]);
    }
    printf("\n");
    system("pause");
    do
    {
        system("cls");
        printf("Menu de opciones\n");
        printf("-----------------\n");
        printf("1- Buscar un numero\n");
        printf("2- Suma de todos los numeros\n");
        printf("3- El numero mas grande\n");
        printf("4- El numero mas chico\n");
        printf("5- Salir del Programa\n\n");
        printf("Elija una opcion: ");fflush(stdin);scanf("%i",&opcion);
        switch(opcion)
        {
            case 1: buscar(v);
            break;
            case 2: suma(v);
            break;
            case 3: mayor(v);
            break;
            case 4: menor(v);
            break;
            case 5: printf("\nSaliendo del programa...\n\n");
            break;
            default: printf("\nLa opcion ingresada no es valida\n\n");
        }
        system("pause");
    }while(opcion!=5);
    return 0;
}
