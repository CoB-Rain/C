#include <stdio.h>
#include <stdlib.h>

//1- Declarar la funcion
void mostrar(int unNumero);
int main()
{
    //3- Invocar la funcion
    mostrar(10);
    mostrar(17);
    mostrar(23);
    system("pause");
    return 0;
}
//2- Definir la funcion
void mostrar(int unNumero)
{
    printf("El numero es: %i\n",unNumero);
}
