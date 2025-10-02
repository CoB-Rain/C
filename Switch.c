#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    int n=0;
    system("cls");
    setlocale(LC_ALL,"spanish");
    printf("Ingrese el número de estación\n0 = Verano\n1 = Otoño\n2 = Invierno\n3 = Primavera\n--> : ");
    fflush(stdin);
    scanf("%i",&n);
    switch(n)
    {
        case 0: printf("Usted está en Verano"); break;
        case 1: printf("Usted está en Otoño"); break;
        case 2: printf("Usted está en Invierno"); break;
        case 3: printf("Usted está en Primavera"); break;
        default : printf("El valor ingresado es inválido !!!"); break;
    }

    return 0;
}
