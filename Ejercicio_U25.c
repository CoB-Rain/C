/*U25. Escriba un programa donde se ingrese el tiempo necesario para un cierto 
proceso en horas, minutos y segundos. Se calcule el costo total del proceso 
sabiendo que el costo por segundo es 0,25 pesos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    float segundos=0.0,minutos=0.0,horas=0.0,costo=0.0;
    printf("Ingrese la duracion de su proceso en horas: ");fflush(stdin);scanf("%f",&horas);
    printf("Ingrese la duracion de su proceso en minutos: ");fflush(stdin);scanf("%f",&minutos);
    printf("Ingrese la duracion de su proceso en segundos: ");fflush(stdin);scanf("%f",&segundos);
    printf("------------------------------------------------");fflush(stdin);
    costo=((horas*60*60)+(minutos*60)+segundos)*0.25;
    printf("\nEl costo total de su proceso es de: $%.2f\n\n",costo);fflush(stdin);
    system("pause");
    return 0;
}
