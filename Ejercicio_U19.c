//U19. Calcular el nuevo salario de un empleado si obtuvo un incremento del 8% 
//sobre su salario actual y un descuento de 2,5% por servicios. El usuario ingresa 
//el salario del empleado.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int s1=0;
    float s2=0.0,i=0.0,d=0.0;
        printf("\n\nIngrese su salario: $");fflush(stdin);scanf("%i",&s1);
    i = s1*8/100;
    d = s1*2.5/100;
    s2 = s1 - d + i;
        printf("\n\nSu salario final es: $%.2f\n\n",s2);fflush(stdin);
    system("pause");
    return 0;
}
