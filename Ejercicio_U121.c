/*U121. Desarrollar un programa que lea un vector de 10 elementos cargado por 
el usuario. Luego mostrar el mismo vector por pantalla, pero invertido. 
Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10 el programa debería mostrar 10 9 
8 7 6 5 4 3 2 1.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void invertido(int v[10]) //mi funcion para invertir las posiciones de los elementos del vector.
{
    int i=0;//integramos indice.
    for(i=9;i>-1;i--)//como hay que mostrar de manera invertida los elementos, vamos a invertir las condiciones del for.
    {
        printf("%i ",v[i]);//mostramos los numeros cargados de manera invertida.
    }
}


int main() 
{
    setlocale(LC_ALL,"spanish");system("cls");//configuramos el idioma y limpiamos la pantalla.
    int i=0,n=0;//integramos variables.
    int v[10];//integro mi vector.
    for(i=0;i<10;i++)//pedimos al usuario que cargue 10 numeros.
    {
        printf("Ingrese el numero que quiera guardar en la posicion %i: ",i+1);fflush(stdin);scanf("%i",&n);
        v[i]=n++;
    }
    printf("-----------------------------------------------------------");//decoracion.
    printf("\n");
    invertido(v);//invocamos la funcion invertido, trabajada arriba.
    printf("\n\n");
    system("pause");
    return 0;
}
