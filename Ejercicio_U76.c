//U76. Desarrollar un programa que permita ingresar la temperatura que posee el 
//agua y en función a esta mostrar en pantalla su estado. Si es negativa el estado
//será sólido, si es menor que 100 será líquido y si es mayor o igual que 100 será 
//gaseoso.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int a=0;
        printf("\n\nIngrese la temperatura: ");fflush(stdin);scanf("%i",&a);
    if(a<0)
    {
        printf("\nEl estado es solido\n");
    }
    else if(a<100)
    {
        printf("\nEl estado es liquido\n");
    }
    else
    {
        printf("\nEl estado es gaseoso\n");
    }
    system("pause");
    return 0;
}
