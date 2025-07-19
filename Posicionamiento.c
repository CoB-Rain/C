#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    COORD p;// Definir la variable de estructura p
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);// Obtener el identificador de funci�n actual (Consola)
	p.X=10;p.Y=12;// Transfiere la posici�n de movimiento objetivo del cursor a la estructura
	SetConsoleCursorPosition(handle,p);// Mueve el cursor
    printf("Hello world One!\n");
    p.X=10;p.Y=14;// Transfiere la posici�n de movimiento objetivo del cursor a la estructura
	SetConsoleCursorPosition(handle,p);// Mueve el cursor
    printf("Hello world Two!\n");
    system("pause");
    return 0;
}
