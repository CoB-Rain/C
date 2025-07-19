#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Introducción a la estructura secuencial.

    printf("Hola mundo!\n");

    //variables, tipos de datos y operaciones aritméticas.

    int numero1=0;//declaramos dos variable tipo entero y les guardamos el valor cero
    int numero2=0;

    printf("Ingrese número 1: ");//pedimos al usuario que ingrese su primer numero
    scanf("%d",&numero1);//guardamos ese valor en la variable "numero1"

    printf("Ingrese número 2: ");//pedimos al usuario que ingrese su segundo numero
    scanf("%d",&numero2);//guardamos ese valor en la variable "numero2"

    int suma = numero1 + numero2;//hacemos la suma de mis dos variables y guardamos el resultado en una nueva variable "suma".
    printf("El resultado de la suma de %d mas %d da como resultado %d\n",numero1,numero2,suma);//mostramos por pantalla la operacion y el resultado.

    system("pause");//pausa
    return 0;//termina programa
}