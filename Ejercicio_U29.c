/*U29. Obtener la edad de una persona en meses, si se ingresa su edad en años y 
meses. Ejemplo: Ingresado 3 años 4 meses debe mostrar 40 meses.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int meses=0,anos=0,total=0;
    printf("Ingrese sus años: ");fflush(stdin);scanf("%i",&anos);
    printf("Ingrese sus meses: ");fflush(stdin);scanf("%i",&meses);
    printf("-------------------\n");
    anos = anos*12;
    total = meses + anos;
    printf("Su edad total en meses es: %i",total);fflush(stdin);
    printf("\n\n");
    system("pause");
    return 0;
}
