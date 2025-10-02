#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h> 

#define TAMANO 6

void ImprimeValores(int *pV, int pFila, int cambio, int itera);
void Pos(int fila,int columna)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){columna,fila});
}
int main()
{
      // Configura el idioma y limpia la pantalla
     setlocale(LC_ALL,"spanish");system("cls");system("mode con: cols=110 lines=135");
    int Valores[TAMANO]={1,2,3,4,6,5};
     int i, auxiliar,fila;
    //srand((unsigned int)time(NULL));
    //for(i = 0; i < TAMANO; i++) {Valores[i] = (int)(rand() % 100);}
     Pos(0,fila); printf("Valores antes de ordenar");
     ImprimeValores(Valores,2,0,0);
     //************* Inicio de ordenamiento burbuja
     //***************************************************
      fila=5;
      int itera=0;
      int cambio=0;
      for(int e = 0; e < TAMANO; e++)
      {
           int zz=0; // para poder poner una pausa. No se usa en el algoritmo.
           for(i = 0; i < TAMANO-1-e; i++)
           {
                 if(Valores[i] > Valores[i+1])
                    {
                         auxiliar = Valores[i+1];
                         Valores[i+1] = Valores[i];
                         Valores[i] = auxiliar;
                         cambio ++;
                    }
                     itera++;
                    ImprimeValores(Valores, fila,cambio,itera); fila++;
           }
      }
     //************* Fin de ordenamiento burbuja
     //***************************************************

    Pos(fila+5,0);
    return 0;
}


void ImprimeValores(int *pV, int pFila, int cambio, int itera)
{
     int fila=pFila;
     int columna=0;
     Pos(fila,columna);printf("Valores: ");
     Pos(fila,columna);
     printf("Itera: %3d -- Swap: %3d",itera,cambio);
      columna=30;
     for(int i = 0; i < TAMANO; i++)
        {
            Pos(fila,columna);  printf( "%5d ", pV[i]); columna+=5;
            if (columna>100){fila+=1;columna=9;}
        }
}
