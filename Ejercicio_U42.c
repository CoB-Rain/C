/*U42. Elabore un programa que realice la conversión de libras a kilogramos
1 Kg. = 2.2046 libras.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int kilogramos=0;
    float libras=0.0;
    printf("Ingrese kg: ");fflush(stdin);scanf("%i",&kilogramos);
    printf("-----------\n");
    libras = kilogramos*2.2046;
    printf("\n%ikg equivalen a %.4f libras",kilogramos,libras);   
    printf("\n\n");
    system("pause");
    return 0;
}
