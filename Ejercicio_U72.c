/*U72. Desarrollar un programa que permita ingresar tres números enteros y 
mostrarlos por pantalla de mayor a menor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int valor1=0,valor2=0,valor3=0;
    printf("Ingrese el primer valor: ");fflush(stdin);scanf("%i",&valor1);
    printf("Ingrese el segundo valor: ");fflush(stdin);scanf("%i",&valor2);
    printf("Ingrese el tercer valor: ");fflush(stdin);scanf("%i",&valor3);
    printf("--------------------------");
    if (valor1>valor2)
    {
        //verdadero
        if(valor2>valor3)
        {
            //verdadero
            printf("\nEl orden es:\n%i\n%i\n%i\n\n",valor1,valor2,valor3);fflush(stdin);//caso 1
        }
        else
        {
            //falso
            if(valor1>valor3)
            {
                //verdadero
                printf("\nEl orden es:\n%i\n%i\n%i\n\n",valor1,valor3,valor2);fflush(stdin);//caso 2
            }
            else
            {
                //falso
                printf("\nEl orden es:\n%i\n%i\n%i\n\n",valor3,valor1,valor2);fflush(stdin);//caso 3
            }
        }
    }
    else 
    {
        //falso
        if (valor1>valor3)
        {
            //verdadero
            printf("\nEl orden es:\n%i\n%i\n%i\n\n",valor2,valor1,valor3);fflush(stdin);//caso 4
        }
        else 
        {
            //falso
            if(valor2>valor3)
            {
                //verdadero
                printf("\nEl orden es:\n%i\n%i\n%i\n\n",valor2,valor3,valor1);fflush(stdin);//caso 5
            }
            else
            {
                //falso
                printf("\nEl orden es:\n%i\n%i\n%i\n\n",valor3,valor2,valor1);fflush(stdin);//caso 6
            }
        }
    }
    system("pause");
    return 0;
}
