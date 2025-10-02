/*Crear un programa que piense en un numero aleatorio y que el usuario tenga que adivinarlo.
A su vez, armar un menu de opciones que contenga:
1- Volver a Jugar
2- Salir del Juego.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

void pos(short columna, short fila)
{
    //Creamos objeto de las coordenadas dentro de una estructura.
    COORD p;
    //Controlador para nuestra ventana y manipulacion de nuestra consola.
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    //redireccionamos las variables de la estructura a nuestras variables de la funcion.
    p.X=columna;
    p.Y=fila;
    //Posicionamos el mensaje dentro de nuestra consola, a nuestra ventana con las coordenadas dadas.
    SetConsoleCursorPosition(handle,p);
}

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int numeroAleatorio=0,x=0;
    char continuar;
    srand(time(NULL));
    pos(40,3);printf("Te damos la bienvenida a Adivina mi numero!");
    pos(40,4);printf("-------------------------------------------");
    pos(40,6);system("pause");
    do
    {
        system("cls");
        numeroAleatorio=(rand()%10)+1;
        pos(40,3);printf("Intente adivinar en que numero estoy pensando del 1 al 10: ");fflush(stdin);scanf("%i",&x);
        if(numeroAleatorio==x)
        {
            //verdadero
            pos(40,5);printf("Vaya... Como hiciste para adivinarlo?");
        }
        else
        {
            //falso
            pos(40,5);printf("Ja! suerte para la proxima, mi numero ha sido %i",numeroAleatorio);fflush(stdin);
        }
        pos(40,7);system("pause");
        do
        {
            system("cls");
            pos(40,3);printf("Desea volver a Jugar? (s/n): ");fflush(stdin);scanf(" %c", &continuar);
            if(continuar=='s' || continuar=='S')
            {
                //verdadero
                pos(40,5);printf("Cargando juego...");
                getch();
            }
            else 
            {
                //falso
                if(continuar=='n' || continuar=='N')
                {
                    //verdadero
                    pos(40,5);printf("Saliendo del juego...");
                    getch();
                }
                else
                {
                    //falso
                    pos(40,5);printf("Ingrese una opcion valida!!");
                    getch();
                }
            }
        }while (continuar!='n' && continuar!='N' && continuar!='s' && continuar!='S');
    }while(continuar=='s' || continuar=='S');
    return 0;
}
