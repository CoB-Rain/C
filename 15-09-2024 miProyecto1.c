#include "./miLibreria.h"

struct usuario
{
    int ID_usuario;
    char nombre[20];
    char cs[30];
    float billetera;
    float banco;
};

void menu();

int main()
{
    sl();
    int opcion=0;
    do
    {
        menu();
        scanf("%d", &opcion);

        if(opcion>3)
        {
            //verdadero
            switch (opcion)
            {
                case 0:
                clean();
                pos(30,10);
                printf("Saliendo del juego...");
                pos(30,12);
                pause();
                break;
    
                default:
                break;
            }
        }
        else
        {
            //falso
            clean();
            pos(30,2);
            printf("Por favor.. seleccione una opcion valida!");
            pos(30,4);
            pause();
        }
    }while(opcion!=0);
    
    return 0;
}

void menu()
{
    pos(30,2);
    printf("Menu de opciones");
    pos(30,3);
    printf("----------------");
    pos(30,5);
    printf("1. Trabajar");
    pos(30,6);
    printf("2. Ver Billetera");
    pos(30,7);
    printf("0. Salir");
    pos(30,9);
    printf("Ingrese una opcion para continuar: ");
}

