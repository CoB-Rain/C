/*U35. Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% 
sobre su salario anterior.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int salario=0,incremento=0,nuevoSalario=0;
    printf("Ingrese el salario del obrero: $");fflush(stdin);scanf("%i",&salario);
    printf("---------------------------------\n");
    incremento = salario*25/100;
    nuevoSalario = salario + incremento;
    printf("El nuevo salario sera de: $%i",nuevoSalario);fflush(stdin);
    printf("\n\n");
    system("pause");
    return 0;
}
