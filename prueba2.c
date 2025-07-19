#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int punto,*datoPtr,dato;
    punto=10;
    dato=5;
    datoPtr=&punto;

    printf("%i\n",*datoPtr);
    system("pause");
    return 0;
}
