/*U119. Desarrollar un programa que cargue un vector con 10 números enteros 
y que muestre por pantalla: 
§ Cuántos números son pares. 
§ Cuantos números son impares.
§ Cuál es el valor del número máximo. 
§ Cuál es el valor del número mínimo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int vector[10];
    int i=0,n=10,min=0,max=0;
    int par=0,impar=0;
    for(i=0;i<10;i++)
    {
        printf("Ingrese que numero se cargara en la posicion %i: ",i+1);fflush(stdin);scanf("%i",&vector[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("pos %i: %i\n",i+1,vector[i]);fflush(stdin);
    }
    for(i=0;i<n;i++)
    {
        if(vector[i]%2==0)
        {
            //verdadero
            par=par+1;
        }
        else
        {
            //falso
            impar=impar+1;
        }
    }
    max=vector[0];
    for(i=1;i<n;i++)
    {
        
        if(vector[i]>max)
        {
            max=vector[i];
        }
    }
    min=vector[0];
    for(i=1;i<n;i++)
    {
        if(vector[i]<min)
        {
            min=vector[i];
        }
    }
    printf("\nLa cantidad de numeros pares es de: %i",par);
    printf("\nLa cantidad de numeros impares es de: %i",impar);
    printf("\nEl numero maximo es: %i",max);
    printf("\nEl numero minimo es: %i",min);
    printf("\n\n");
    system("pause");
    return 0;
}
