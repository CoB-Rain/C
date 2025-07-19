/*U23. Desarrolle un programa que, dado el número de horas trabajadas por un 
empleado y el sueldo por hora, calcule el sueldo total de ese empleado. Tenga 
en cuenta que las horas extras se pagan el doble.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    
    setlocale(LC_ALL,"spanish");system("cls");
    int ht=0,sh=0,st=0,hx=0;
    //Primero pedimos la cantidad de horas trabajadas
    printf("Ingrese la cantidad de horas trabajadas: ");fflush(stdin);scanf("%i",&ht);
    //Luego pedimos las horas extra trabajadas
    printf("Ingrese la cantidad de horas extra trabajadas: ");fflush(stdin);scanf("%i",&hx);
    //Ahora pedimos el sueldo por hora
    printf("Ingrese el sueldo que gana por hora: $");fflush(stdin);scanf("%i",&sh);
    printf("----------------------------------------");fflush(stdin);
    //Ahora calculamos
    hx=(hx*sh)*2; //horas extra
    st=(ht*sh)+hx; //sueldo total
    //Y finalmente devolvemos el sueldo total
    printf("\nSu sueldo total es de: $%i\n\n",st);fflush(stdin);
    system("pause");
    return 0;
}
