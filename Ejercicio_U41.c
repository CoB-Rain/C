/*U41. Elabore un programa que realice la conversión de cm. a pulgadas.
1cm = 0.39737 pulgadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int cm=0;
    float pulgadas=0.0;
    printf("Ingrese cm: ");fflush(stdin);scanf("%i",&cm);
    printf("-----------\n");
    pulgadas=cm*0.39737;
    printf("\n%icm equivalen a %.5f pulgadas",cm,pulgadas);
    printf("\n\n");
    system("pause");
    return 0;
}
