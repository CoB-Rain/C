/*U69. Desarrollar un programa que permita ingresar un valor, si el valor es 
positivo, pedir un segundo valor y calcular la suma, resta y producto de ambos. 
Mostrar los resultados por pantalla.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int valor1=0,valor2=0,suma=0,resta=0,producto=0;
    printf("Ingrese un numero: ");fflush(stdin);scanf("%i",&valor1);
    if(valor1>0)
    {
        //verdadero
        printf("Ingrese un segundo numero: ");fflush(stdin);scanf("%i",&valor2);
        printf("------------------------------");
        suma=valor1+valor2;
        resta=valor1-valor2;
        producto=valor1*valor2;
        printf("\nLa suma de %i mas %i da como resultado: %i\n",valor1,valor2,suma);fflush(stdin);
        printf("\nLa resta de %i menos %i da como resultado: %i\n",valor1,valor2,resta);fflush(stdin);
        printf("\nEl producto de %i por %i da como resultado: %i",valor1,valor2,producto);fflush(stdin);
    }
    else
    {
        //falso
        printf("------------------------------------------");
        printf("\nEl numero que ha ingresado no es positivo!");
        printf("\nResultado final: %i",valor1);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
