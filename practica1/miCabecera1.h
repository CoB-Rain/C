#ifndef MICABECERA1_H_INCLUDED
#define MICABECERA1_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void pos(short fila,short columna)
{
    COORD p;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    p.X=fila;p.Y=columna;
    SetConsoleCursorPosition(handle,p);
}

#endif // MICABECERA1_H_INCLUDED
