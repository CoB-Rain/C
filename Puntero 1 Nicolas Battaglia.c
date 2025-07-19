#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *countPtr;//puntero a un entero
    int count;//es un entero, no un puntero

    count=5;//se asigna un valor a una variable
    countPtr=&count;

    printf("La direccion de memoria de count es: %p\n",&count);
    printf("El valor de countPtr es: %p\n",countPtr);
    printf("El valor de count es: %i\n",count);
    printf("El valor al que apunta *countPtr es: %i\n",*countPtr);
    system("pause");
    return 0;
}
