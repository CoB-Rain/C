#include <stdio.h>
#include <stdlib.h>

void suma(int a, int b, int *resultado);
int main()
{
    int res=0;
    printf("El valor de res es: %i\n",res);
    suma(10,15,&res);
    printf("El valor de res es: %i\n",res);
    system("pause");
    return 0;
}
void suma(int a, int b, int *resultado)
{
    *resultado=a+b;
}
