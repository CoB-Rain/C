#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /*admite comando booolean*/
#include <windows.h>
#include <locale.h>

int main()
{
    int opcion=0,n1=0,n2=0;
    setlocale (LC_ALL,"spanish");
    COORD p; /*posicionamiento*/
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    do
    {
        int opcion=0;
        system("cls");
        p.X=20;p.Y=5;SetConsoleCursorPosition(handle,p);printf("Menú de Opciones");
        p.X=20;p.Y=6;SetConsoleCursorPosition(handle,p);printf("________________");
        p.X=20;p.Y=8;SetConsoleCursorPosition(handle,p);printf("1. Sumar");
        p.X=20;p.Y=9;SetConsoleCursorPosition(handle,p);printf("2. Restar");
        p.X=20;p.Y=10;SetConsoleCursorPosition(handle,p);printf("3. Multiplicar");
        p.X=20;p.Y=11;SetConsoleCursorPosition(handle,p);printf("4. Dividir");
        p.X=20;p.Y=12;SetConsoleCursorPosition(handle,p);printf("0. Salir");
        p.X=20;p.Y=14;SetConsoleCursorPosition(handle,p);printf("Ingrese su Opción: ");fflush(stdin);scanf("%i",&opcion);
        //Evaluamos si el usuario desea salir
        if(opcion==0) break;
        //Validamos por opción inválida
        if(opcion<0 || opcion>4)
        {
        p.X=20;p.Y=16;SetConsoleCursorPosition(handle,p);printf("La opción ingresada es inválida");
        p.X=20;p.Y=17;SetConsoleCursorPosition(handle,p);system("pause");
        continue;
        }
        p.X=20;p.Y=16; SetConsoleCursorPosition(handle,p);printf("Ingrese el primer número");fflush(stdin);scanf("%i",&n1);
        //Nos aseguramos que si es una división no se ingrese cero en n2
        do
        {
            p.X=20;p.Y=17; SetConsoleCursorPosition(handle,p);printf("Ingrese el segundo número");fflush(stdin);scanf("%i",&n2);
        } while (opcion == 4 && n2==0);
        switch(opcion)
        {
            case 1:
                {
                    p.X=20;p.Y=19; SetConsoleCursorPosition(handle,p);printf("%i más %i = %i",n1,n2,n1+n2);fflush(stdin);
                }
            case 2:
                {
                    p.X=20;p.Y=19; SetConsoleCursorPosition(handle,p);printf("%i menos %i = %i",n1,n2,n1-n2);fflush(stdin);
                }
            case 3:
                {
                    p.X=20;p.Y=19; SetConsoleCursorPosition(handle,p);printf("%i por %i = %i",n1,n2,n1*n2);fflush(stdin);
                }
            case 4:
                {
                    p.X=20;p.Y=19; SetConsoleCursorPosition(handle,p);printf("%i dividido %i = %i",n1,n2,n1/n2);fflush(stdin);
                }
        }
        p.X=20;p.Y=21; SetConsoleCursorPosition(handle,p);system("pause");

    } while (true);
    system("pause");
    return 0;
}
