/*U75. Desarrollar un programa que permita ingresar cuatro números enteros y 
mostrarlos por pantalla de menor a mayor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");
    int valor1=0,valor2=0,valor3=0,valor4=0;
    printf("Ingrese el primer valor: ");fflush(stdin);scanf("%i",&valor1);
    printf("Ingrese el segundo valor: ");fflush(stdin);scanf("%i",&valor2);
    printf("Ingrese el tercer valor: ");fflush(stdin);scanf("%i",&valor3);
    printf("Ingrese el cuarto valor: ");fflush(stdin);scanf("%i",&valor4);
    printf("--------------------------");
    if(valor1<valor2)
    {
        //verdadero (v1<v2) v3,v4
        if(valor1<valor3)
        {
            //verdadero (v1<v2)(v1<v3) v4
            if(valor1<valor4)
            {
                //verdadero (v1<v2)(v1<v3)(v1<v4) v2<v3?
                if(valor2<valor3)
                {
                    //verdadero (v1<v2<v3)(v1<v4) v2<v4?
                    if(valor2<valor4)
                    {
                        //verdadero (v1<v2<v3)(v1<v2<v4) v3<v4?
                        if(valor3<valor4)
                        {
                            //verdadero (v1<v2<v3<v4)
                            printf("\nEl orden es: %i %i %i %i\n\n",valor1,valor2,valor3,valor4);fflush(stdin);//caso 1
                        }
                        else
                        {
                            //falso (v1<v2<v4<v3)
                            printf("\nEl orden es: %i %i %i %i\n\n",valor1,valor2,valor4,valor3);fflush(stdin);//caso 2
                        }
                    }
                    else
                    {
                        //falso (v1<v4<v2<v3)
                        printf("\nEl orden es: %i %i %i %i\n\n",valor1,valor4,valor2,valor3);fflush(stdin);//caso 3
                    }
                }
                else
                {
                    //falso (v1<v3<v2)(v1<v4) v2<v4?
                    if (valor2<valor4)
                    {
                        //verdadero (v1<v3<v2<v4)
                        printf("\nEl orden es: %i %i %i %i\n\n",valor1,valor3,valor2,valor4);fflush(stdin);//caso 4
                    }
                    else
                    {
                        //falso (v1<v4<v2)(v1<v3<v2) v4<v3?
                        if(valor3<valor4)
                        {
                            //verdadero (v1<v3<v4<v2)
                            printf("\nEl orden es: %i %i %i %i\n\n",valor1,valor3,valor4,valor2);fflush(stdin);//caso 5
                        }
                        else
                        {
                            //falso (v1<v4<v3<v2)
                            printf("\nEl orden es: %i %i %i %i\n\n",valor1,valor4,valor3,valor2);fflush(stdin);//caso 6
                        }
                    }                    
                }
            }
            else
            {
                //falso (v4<v1<v2)(v4<v1<v3) v2<v3?
                if(valor2<valor3)
                {
                    //verdadero (v4<v1<v2<v3)
                   printf("\nEl orden es: %i %i %i %i\n\n",valor4,valor1,valor2,valor3);fflush(stdin);//caso 7 
                }
                else
                {
                    //falso (v4<v1<v3<v2)
                    printf("\nEl orden es: %i %i %i %i\n\n",valor4,valor1,valor3,valor2);fflush(stdin);//caso 8
                }
            }
        }
        else
        {
            //falso (v3<v1<v2) v4
            if(valor1<valor4)
            {
                //verdadero (v3<v1<v2)(v3<v1<v4) v2<v4?
                if(valor2<valor4)
                {
                    //verdadero (v3<v1<v2<v4)
                    printf("\nEl orden es: %i %i %i %i\n\n",valor3,valor1,valor2,valor4);fflush(stdin);//caso 9
                }
                else
                {
                    //falso (v3<v1<v4<v2)
                    printf("\nEl orden es: %i %i %i %i\n\n",valor3,valor1,valor4,valor2);fflush(stdin);//caso 10
                }
            }
            else
            {
                //falso (v3<v1<v2)(v4<v1<v2) v3<v4?
                if(valor3<valor4)
                {
                    //verdadero (v3<v4<v1<v2)
                    printf("\nEl orden es: %i %i %i %i\n\n",valor3,valor4,valor1,valor2);fflush(stdin);//caso 11
                }
                else
                {
                    //falso (v4<v3<v1<v2)
                    printf("\nEl orden es: %i %i %i %i\n\n",valor4,valor3,valor1,valor2);fflush(stdin);//caso 12
                }
            }
        }
    }
    else
    {
        //falso (v2<v1) v3,v4
        if(valor1<valor3)
        {
            //verdadero (v2<v1<v3) v4
            if(valor1<valor4)
            {
                //verdadero (v2<v1<v3)(v2<v1<v4) v3<v4?
                if(valor3<valor4)
                {
                    //verdadero (v2<v1<v3<v4)
                    printf("\nEl orden es: %i %i %i %i\n\n",valor2,valor1,valor3,valor4);fflush(stdin);//caso 13
                }
                else
                {
                    //falso (v2<v1<v4<v3)
                    printf("\nEl orden es: %i %i %i %i\n\n",valor2,valor1,valor4,valor3);fflush(stdin);//caso 14
                }
            }
            else
            {
                //falso (v2<v1<v3)(v4<v1<v3) v2<v4?
                if(valor2<valor4)
                {
                    //verdadero (v2<v4<v1<v3)
                    printf("\nEl orden es: %i %i %i %i\n\n",valor2,valor4,valor1,valor3);fflush(stdin);//caso 15
                }
                else
                {
                    //falso (v4<v2<v1<v3)
                    printf("\nEl orden es: %i %i %i %i\n\n",valor4,valor2,valor1,valor3);fflush(stdin);//caso 16
                }
            }
        }
        else
        {
            //falso (v2<v1)(v3<v1) v4
            if(valor1<valor4)
            {
                //verdadero (v2<v1<v4)(v3<v1<v4) v2<v3?
                if(valor2<valor3)
                {
                    //verdadero (v2<v3<v1<v4)
                    printf("\nEl orden es: %i %i %i %i\n\n",valor2,valor3,valor1,valor4);fflush(stdin);//caso 17
                }
                else
                {
                    //falso (v3<v2<v1<v4)
                    printf("\nEl orden es: %i %i %i %i\n\n",valor3,valor2,valor1,valor4);fflush(stdin);//caso 18
                }
            }
            else
            {
                //falso (v2<v1)(v3<v1)(v4<v1) v2<v3?
                if(valor2<valor3)
                {
                    //verdadero (v2<v3<v1)(v4<v1) v2<v4?
                    if(valor2<valor4)
                    {
                        //verdadero (v2<v3<v1)(v2<v4<v1) v3<v4?
                        if(valor3<valor4)
                        {
                            //verdadero (v2<v3<v4<v1)
                            printf("\nEl orden es: %i %i %i %i\n\n",valor2,valor3,valor4,valor1);fflush(stdin);//caso 19
                        }
                        else
                        {
                            //falso (v2<v4<v3<v1)
                            printf("\nEl orden es: %i %i %i %i\n\n",valor2,valor4,valor3,valor1);fflush(stdin);//caso 20
                        }
                        
                    }
                    else
                    {
                        //falso (v4<v2<v3<v1)
                        printf("\nEl orden es: %i %i %i %i\n\n",valor4,valor2,valor3,valor1);fflush(stdin);//caso 21
                    }
                }
                else
                {
                    //falso (v4<v1)(v3<v2<v1) v2<v4?
                    if(valor2<valor4)
                    {
                        //verdadero (v3<v2<v4<v1)
                        printf("\nEl orden es: %i %i %i %i\n\n",valor3,valor2,valor4,valor1);fflush(stdin);//caso 22
                    }
                    else
                    {
                        //falso (v3<v2<v1)(v4<v2<v1) v3<v4?
                        if(valor3<valor4)
                        {
                            //verdadero (v3<v4<v2<v1)
                            printf("\nEl orden es: %i %i %i %i\n\n",valor3,valor4,valor2,valor1);fflush(stdin);//caso 23
                        }
                        else
                        {
                            //falso (v4<v3<v2<v1)
                            printf("\nEl orden es: %i %i %i %i\n\n",valor4,valor3,valor2,valor1);fflush(stdin);//caso 24
                        }
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}
