#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>

int NumeroAleatorio(int vmin, int vmax)
{
    srand(time(NULL));
    int na=0;

    na=vmin+rand()%(vmax-vmin+1);

    return na;
}

void pos(int x, int y)
{
    COORD p;
    p.X=x;
    p.Y=y;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(h,p);
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

void WhiteSpace()
{
    getch();
}

