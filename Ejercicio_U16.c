/*U16. Calcular el monto a pagar en una cabina de Internet si el costo por hora 
es de pesos 15. Por cada 5 horas te dan una hora de promoción gratis. El usuario 
ingresa cuántas horas desea contratar.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p=0,a=0,r=0;
        printf("\nCuantas horas desea contratar? ");scanf("%i",&p);fflush(stdin);
    r=(p/5);
    a=(p-r)*15;
        printf("\nEl monto a pagar es de %i pesos\n",a);fflush(stdin);
        printf("\n");
    system("pause");
    return 0;
}
