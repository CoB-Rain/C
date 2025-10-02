/*U40. Hacer un programa que halle el área de un círculo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int radio=0;
    float pi=0.0,area=0.0;
    printf("Ingrese el radio del circulo: ");fflush(stdin);scanf("%i",&radio);
    printf("-----------------------------\n");
    pi=3.14;
    area = pi*pow(radio,2);
    printf("El area del circulo es de: %.2f",area);
    printf("\n\n");
    system("pause");
    return 0;
}
