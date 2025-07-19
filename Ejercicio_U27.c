/*U27. Leer dos números y encontrar:
La suma del doble del primero más el cuadrado del segundo. 
El promedio de sus cubos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int n1=0,n2=0,p1=0;
    float promedio=0.0;
        printf("Ingrese el primer número: ");fflush(stdin);scanf("%i",&n1);
        printf("Ingrese el segundo número: ");fflush(stdin);scanf("%i",&n2);
        printf("----------------------------\n");
    p1=(n1*2)+(n2*n2);
        printf("La suma del doble de %i más el cuadrado de %i da como resultado: %i\n",n1,n2,p1);fflush(stdin);
    promedio=(pow(n1,3)+pow(n2,3))/2;
        printf("El promedio de los cubos de %i y %i dan como resultado %.2f\n\n",n1,n2,promedio);fflush(stdin);
    system("pause");
    return 0;
}
