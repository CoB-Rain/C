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

int billetera=0,banco=0,total=0,t,r;
int item1,item2,item3;

int main()
{
    system("cls");setlocale(LC_ALL,"spanish");
    pos(50,1);
    printf("Simulador de dinero");
    pos(50,2);
    printf("-------------------");
    pos(40,4);
    system("pause");

    int opcion;
    do{
        system("cls");
        total=billetera+banco;
        pos(50,1);
        printf("Menú de Opciones");
        pos(50,2);
        printf("----------------");
        pos(50,4);
        printf("1. Ver Billetera");
        pos(50,5);
        printf("2. Trabajar");
        pos(50,6);
        printf("3. Robar");
        pos(50,7);
        printf("4. Depositar");
        pos(50,8);
        printf("5. Retirar dinero del banco");
        pos(50,9);
        printf("6. Abrir tienda");
        pos(50,10);
        printf("7. Abrir Inventario");
        pos(50,11);
        printf("0. Terminar el Juego");
        pos(50,13);
        printf("Ingrese una opcion: ");
        fflush(stdin);scanf("%i",&opcion);

        switch(opcion)
        {
            case 1: VerBilletera();
            break;
            case 2: Trabajo();
            break;
            case 3: Robar();
            break;
            case 4: Depositar();
            break;
            case 5: Retirar();
            break;
            case 6: Tienda();
            break;
            case 7: Inventario();
            break;
            case 0: FinDelJuego();
            break;
            default: pos(50,13);printf("Ingrese una opcion valida!!");getch();
            break;
        }
    }while(opcion!=0);

    getch();
    return 0;
}

void VerBilletera()
{
    system("cls");
    pos(50,1);
    printf("Dinero: $%i",billetera);
    pos(50,3);
    printf("Banco: $%i",banco);
    pos(50,5);
    printf("Total: $%i",total);
    pos(40,7);
    system("pause");
}

void Trabajo()
{
    system("cls");
    srand(time(NULL));
    t=1000+rand()%(2000-1000+1);
    pos(40,1);
    printf("Has trabajado durante 1hs y has obtenido: $%i",t);
    billetera+=t;
    pos(40,3);
    system("pause");
}

void Robar()
{
    system("cls");
    int resultado;
    srand(time(NULL));
    resultado=1+rand()%(2-1+1);
    if(resultado==1)
    {
        //verdadero
        r=500+rand()%(1000-500+1);
        pos(40,1);
        printf("Has intentado robar pero la policia te atrapo!");
        pos(50,2);
        printf("Has perdido: $%i",r);
        billetera-=r;
        pos(40,4);
        system("pause");
    }
    else
    {
        //falso
        r=500+rand()%(1000-500+1);
        pos(40,1);
        printf("Acabas de robar $%i en un local",r);
        billetera+=r;
        pos(40,3);
        system("pause");
    }

}

void Depositar()
{
    system("cls");
    if(billetera>=0)
    {
        //verdadero
        int testeo,v=0;
        do{
            system("cls");
            pos(40,1);
            printf("Ingrese la cantidad de dinero que desea depositar: ");
            fflush(stdin);scanf("%i",&testeo);

            if(testeo>=0)
            {
                //verdadero
                if(billetera>=testeo)
                {
                    //verdadero
                    banco+=testeo;
                    billetera-=testeo;
                    v++;
                    pos(50,3);
                    printf("Has depositado $%i en tu banco",testeo);
                    getch();
                }
                else
                {
                    if(billetera<testeo)
                    {
                        //falso
                        pos(50,3);
                        printf("No tienes ese dinero en tu billetera.");
                        pos(50,4);
                        printf("Por favor, Ingrese un monto valido");
                        getch();
                    }
                }
            }
            else
            {
                //falso
                pos(50,3);
                printf("El monto que ha ingresado no es valido");
                pos(50,4);
                printf("Por favor, ingresa un monto valido");
                getch();
            }
        }while(v!=1);
    }
    else
    {
        //falso
        pos(40,1);
        printf("No tienes dinero en tu billetera...");
        pos(30,2);
        printf("Podes trabajar usando la opcion (2) del menú de opciones");
        pos(60,3);
        getch();
    }
}

void Retirar()
{
    system("cls");
    int testeo,v=0;
    do{
        system("cls");
        pos(40,1);
        printf("Ingrese la cantidad de dinero que desea retirar: ");
        fflush(stdin);scanf("%i",&testeo);

        if(testeo>=0)
        {
            //verdadero
            if(banco>=testeo)
            {
                //verdadero
                banco-=testeo;
                billetera+=testeo;
                v++;
                pos(50,3);
                printf("Has retirado $%i de tu banco",testeo);
                getch();
            }
            else
            {
                if(banco<testeo)
                {
                    //falso
                    pos(40,3);
                    printf("No puedes retirar mas de lo que tienes guardado!");
                    getch();
                }
            }
        }
        else
        {
            //falso
            pos(50,3);
            printf("El monto que ha ingresado no es valido");
            pos(50,4);
            printf("Por favor, ingresa un monto valido");
            getch();
        }
    }while(v!=1);
}

void Tienda()
{
    int ID;
    int caramelos=50,gaseosa=100,navaja=1000;

    do
    {
        system("cls");
        pos(50,1);
        printf("Tiendita");
        pos(50,2);
        printf("--------");
        pos(50,4);
        printf("1. Caramelos ($50)");
        pos(50,5);
        printf("2. Gaseosa ($100)");
        pos(50,6);
        printf("3. Navaja ($1000)");
        pos(50,7);
        printf("0. Salir");
        pos(40,9);
        printf("Ingrese el ID del item que desea comprar: ");
        fflush(stdin);scanf("%i",&ID);

        switch(ID)
        {
        case 1:
            if(billetera>=caramelos)
            {
                //verdadero
                system("cls");
                billetera-=caramelos;
                item1++;
                pos(50,1);
                printf("Has comprado: Caramelos (x1).");
                getch();
            }
            else
            {
                //falso
                system("cls");
                pos(40,1);
                printf("No tienes el dinero suficiente en tu billetera.");
                pos(43,3);
                system("pause");
            }
        break;
        case 2:
            if(billetera>=gaseosa)
            {
                //verdadero
                system("cls");
                billetera-=gaseosa;
                item2++;
                pos(50,1);
                printf("Has comprado: Gaseosa (x1)");
                getch();
            }
            else
            {
                //falso
                system("cls");
                pos(40,1);
                printf("No tienes el dinero suficiente en tu billetera.");
                pos(43,3);
                system("pause");
            }
        break;
        case 3:
            if(billetera>=navaja)
            {
                //verdadero
                system("cls");
                billetera-=navaja;
                item3++;
                pos(50,1);
                printf("Has comprado: Navaja (x1)");
                getch();
            }
            else
            {
                //falso
                system("cls");
                pos(40,1);
                printf("No tienes el dinero suficiente en tu billetera.");
                pos(43,3);
                system("pause");
            }
        break;
        case 0:
        break;
        default:
            pos(50,11);
            printf("Ingrese una opcion valida!");
            getch();
        break;
        }
    }while(ID!=0);
}

void Inventario()
{
    system("cls");
    pos(50,1);
    printf("TU INVENTARIO");
    pos(50,2);
    printf("-------------");
    pos(50,3);
    printf("");

    if(item1!=0)
    {
        //verdadero
        pos(50,4);
        printf("Caramelos (x%i)",item1);
        if(item2!=0)
        {
            //verdadero
            pos(50,5);
            printf("Gaseosa (x%i)",item2);
            if(item3!=0)
            {
                //verdadero
                pos(50,6);
                printf("Navaja (x%i)",item3);
            }
        }
        else
        {
            //falso
            if(item3!=0)
            {
                //verdadero
                pos(50,5);
                printf("Navaja (x%i)",item3);
            }
        }
    }
    else
    {
        if(item2!=0)
        {
            //verdadero
            pos(50,4);
            printf("Gaseosa (x%i)",item2);
            if(item3!=0)
            {
                //verdadero
                pos(50,5);
                printf("Navaja (x%i)",item3);
            }
        }
        else
        {
            //falso
            if(item3!=0)
            {
                //verdadero
                pos(50,4);
                printf("Navaja (x%i)",item3);
            }
            else
            {
                //falso
                pos(43,4);
                printf("No tienes items en tu inventario!");
                pos(30,5);
                printf("Puedes comprar items en la tienda del menu de opciones.");
            }
        }
    }
    getch();
}

void FinDelJuego()
{
    system("cls");
    pos(52,10);
    printf("FIN DEL JUEGO");
    pos(52,11);
    printf("-------------");
}
