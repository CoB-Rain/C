#include <stdio.h>
#include <stdlib.h>

//1- Declarar la funcion
int factorial(int n);
int main()
{
    //3- Invocar la funcion
    int n=4;
    //4! = 4 * 3 * 2 * 1 => 24
    int f=factorial(n);
    printf("El factorial de %i es %i\n",n,f);
    system("pause");
    return 0;
}
//2- Definir la funcion
int factorial(int n)
{
    if(n==0)
    {
        //verdadero
        return 1;
    }
    else
    {
        //falso
        return n * factorial(n-1);
    }
}
