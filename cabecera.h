#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>

int NumeroAleatorio(int valmin, int valmax)
{
    srand(time(NULL));
    int na=0;

    na=valmin+rand()%(valmax-valmin+1);

    return na;
}

void pos(short columna, short fila)
{
    COORD p;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    p.X=columna;p.Y=fila;
    SetConsoleCursorPosition(handle,p);
}

void sl()
{
    setlocale(LC_ALL,"spanish");
}

void clean()
{
    system("cls");
}

void pause()
{
    system("pause");
}

/*int Burbujeo(int matriz[], int n)
{
    int x,y,aux;
    for(x=0;x<n-1;x++)
    {
        for(y=0;y<n-x-1;y++)
        {
            if(matriz[y]>matriz[y+1])
            {
                //verdadero
                aux=matriz[y];
                matriz[y]=matriz[y+1];
                matriz[y+1]=aux;
            }
        }
    }
    return matriz;
}
*/
int BusquedaSecuencial(int matriz[], int n, int numero_buscado)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(matriz[i]==numero_buscado)
        {
            //verdadero
            printf("Total de iteraciones: %d\n",i+1);
            return i;
        }
    }
    printf("Total de iteraciones: %d\n",i);
    return -1;
}

int BusquedaBinaria(int matriz[], int n, int numero_buscado)
{
    int centro,inf=0,sup=n-1;
    int iteraciones=0;
    while(inf<=sup)
    {
        iteraciones++;
        centro=((sup-inf)/2)+inf;
        if(matriz[centro]==numero_buscado)
        {
            //verdadero
            printf("Total de iteraciones: %d\n",iteraciones);
            return centro;
        }
        else if(numero_buscado<matriz[centro])
        {
            //verdadero
            sup=centro-1;
        }
        else
        {
            //falso
            inf=centro+1;
        }
    }
    printf("Total de iteraciones: %d\n",iteraciones);
    return -1;
}
