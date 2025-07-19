/*U28. Leer tres números enteros de un dígito y almacenarlos en una sola variable 
que contenga a esos tres dígitos Por ejemplo si A=8 y B=6 y C=1 entonces 
X=861.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int a=0,b=0,c=0,x=0;
    printf("Ingrese el primer digito: ");fflush(stdin);scanf("%i",&a);
    printf("Ingrese el segundo digito: ");fflush(stdin);scanf("%i",&b);
    printf("Ingrese el tercer digito: ");fflush(stdin);scanf("%i",&c);
    printf("---------------------------\n");
    a = a*100;
    b = b*10;
    x = a + b + c;
    printf("Su resultado es: %i",x);fflush(stdin);
    printf("\n\n");
    system("pause");
    return 0;
}
