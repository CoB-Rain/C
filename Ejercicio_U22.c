//U22. Desarrolle un programa que dada la cantidad de billetes de 2-5-10-20-50-
//100-200 y 500 indique la cantidad de dinero que se tiene en total.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int b2=0,b5=0,b10=0,b20=0,b50=0,b100=0,b200=0,b500=0,total=0;
    printf("Ingrese la cantidad de billetes de ($2): ");fflush(stdin);scanf("%i",&b2);
    printf("Ingrese la cantidad de billetes de ($5): ");fflush(stdin);scanf("%i",&b5);
    printf("Ingrese la cantidad de billetes de ($10): ");fflush(stdin);scanf("%i",&b10);
    printf("Ingrese la cantidad de billetes de ($20): ");fflush(stdin);scanf("%i",&b20);
    printf("Ingrese la cantidad de billetes de ($50): ");fflush(stdin);scanf("%i",&b50);
    printf("Ingrese la cantidad de billetes de ($100): ");fflush(stdin);scanf("%i",&b100);
    printf("Ingrese la cantidad de billetes de ($200): ");fflush(stdin);scanf("%i",&b200);
    printf("Ingrese la cantidad de billetes de ($500): ");fflush(stdin);scanf("%i",&b500);
    printf("-------------------------------------------");fflush(stdin);
    printf("\n\n");fflush(stdin);
    b2=b2*2;
    b5=b5*5;
    b10=b10*10;
    b20=b20*20;
    b50=b50*50;
    b100=b100*100;
    b200=b200*200;
    b500=b500*500;
    total=b2+b5+b10+b20+b50+b100+b200+b500;
    printf("El total es de: $%i\n\n",total);fflush(stdin);
    system("pause");
    return 0;
}
