#include <stdio.h>
#include <stdlib.h>

//1- Declarar la funcion
int sumar(int valor1, int valor2);
int main()
{
    //3- Invocar la funcion
    int r = sumar(10, 15);
    printf("El resultado es: %i\n",r);
    printf("El resultado es: %i\n",sumar(7,9));
    system("pause");
    return 0;
}
//2- Definir la funcion
int sumar(int valor1, int valor2)
{
    int resultado=valor1+valor2;
    return resultado;
}
