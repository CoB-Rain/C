/*U60. Dibujar en la consola un rectángulo de “*” utilizando las funciones de 
posicionamiento en pantalla*/

#include <stdio.h>
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
    pos(10,0);printf("*");
    pos(11,0);printf("*");
    pos(12,0);printf("*");
    pos(13,0);printf("*");
    pos(14,0);printf("*");
    pos(15,0);printf("*");
    pos(16,0);printf("*");
    pos(17,0);printf("*");
    pos(18,0);printf("*");
    pos(19,0);printf("*");
    pos(20,0);printf("*");
    pos(10,1);printf("*");
    pos(10,2);printf("*");
    pos(11,2);printf("*");
    pos(12,2);printf("*");
    pos(13,2);printf("*");
    pos(14,2);printf("*");
    pos(15,2);printf("*");
    pos(16,2);printf("*");
    pos(17,2);printf("*");
    pos(18,2);printf("*");
    pos(19,2);printf("*");
    pos(20,2);printf("*");
    pos(20,1);printf("*");
    pos(0,4);system("pause");
    return 0;
}
