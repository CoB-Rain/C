#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int cantNumeros=0,n1=0,n2=0;

void sumar()
{
    int i=0,suma=0;
    do
    {
        system("cls");
        printf("Suma");
        printf("\n----");
        printf("\n\n");
        printf("Ingrese la cantidad de numeros que desea sumar: ");fflush(stdin);scanf("%i",&cantNumeros);
        if(cantNumeros<2)
        {
            //verdadero
            if(cantNumeros==1)
            {
                //verdadero
                printf("Ingrese un numero a sumar: ");fflush(stdin);scanf("%i",&suma);
                printf("\nResultado: %i",suma);
            }
            else
            {
                //falso
                printf("\nIngrese una cantidad valida!!");
                getch();
            }
        }
    } while (cantNumeros<1);
    //si desean sumar 1 solo numero, se devolvera el mismo, si ingresan otra opcion invalida, se vuelve a preguntar.
    if(cantNumeros>=2)
    {
        //verdadero
        int v[cantNumeros];
        for(i=0;i<cantNumeros;i++)
        {
            v[i]=0;
        }
        for(i=0;i<cantNumeros;i++)
        {
            printf("Ingrese un numero a sumar: ");fflush(stdin);scanf("%i",&v[i]);
            suma = suma + v[i];
        }
        printf("\nResultado: %i",suma);
        printf("\n\n");
        system("pause");
    }
    else
    {
        //falso
        printf("\n\n");
        system("pause");
    }
}

void restar()
{
    int i=0,resta=0;
    do
    {
        system("cls");
        printf("resta");
        printf("\n----");
        printf("\n\n");
        printf("Ingrese la cantidad de numeros que desea restar: ");fflush(stdin);scanf("%i",&cantNumeros);
        if(cantNumeros<2)
        {
            //verdadero
            if(cantNumeros==1)
            {
                //verdadero
                printf("Ingrese el numero a restar: ");fflush(stdin);scanf("%i",&resta);
                printf("\nResultado: %i",resta);
            }
            else
            {
                //falso
                printf("\nIngrese una cantidad valida!!");
                getch();
            }
        }
    } while (cantNumeros<1);
    //si desean restar 1 solo numero, se devolvera el mismo, si ingresan otra opcion invalida, se vuelve a preguntar.
    if(cantNumeros>=2)
    {
        //verdadero
        int v[cantNumeros];
        for(i=0;i<cantNumeros;i++);
        {
            v[i]=0;
        }
        for(i=0;i<cantNumeros;i++)
        {
            printf("Ingrese un numero a restar: ");fflush(stdin);scanf("%i",&v[i]);
            if(i==0)
            {
                //verdadero
                resta = v[i];   
            }
            else
            {
                //falso
                resta = resta - v[i];
            }
        }
        printf("\nResultado: %i",resta);
        printf("\n\n");
        system("pause");
    }
    else
    {
        //falso
        printf("\n\n");
        system("pause");
    }
}

void multiplicar()
{
    int i=0,multiplicacion=0;
    do
    {
        system("cls");
        printf("Multiplicacion");
        printf("\n--------------");
        printf("\n\n");
        printf("Ingrese la cantidad de numeros que desea multiplicar: ");fflush(stdin);scanf("%i",&cantNumeros);
        if(cantNumeros<2)
        {
            //verdadero
            if(cantNumeros==1)
            {
                //verdadero
                printf("Ingrese un numero a multiplicar: ");fflush(stdin);scanf("%i",&multiplicacion);
                printf("\nResultado: %i",multiplicacion);
            }
            else
            {
                //falso
                printf("\nIngrese una cantidad valida!!");
                getch();
            }
        }
    } while (cantNumeros<1);
    //si desean multiplicar 1 solo numero, se devolvera el mismo, si ingresan otra opcion invalida, se vuelve a preguntar.
    if(cantNumeros>=2)
    {
        //verdadero
        int v[cantNumeros];
        for(i=0;i<cantNumeros;i++)
        {
            v[i]=0;
        }
        for(i=0;i<cantNumeros;i++)
        {
            printf("Ingrese un numero a multiplicar: ");fflush(stdin);scanf("%i",&v[i]);
            if(i==0)
            {
                //verdadero
                multiplicacion = v[i];
            }
            else
            {
                //falso
                multiplicacion = multiplicacion * v[i];
            }
        }
        printf("Resultado: %i",multiplicacion);
        printf("\n\n");
        system("pause");
    }
    else
    {
        //falso
        printf("\n\n");
        system("pause");
    }
}

void dividir(float n1, float n2)
{
    float division=0.0;
    system("cls");
    printf("division");
    printf("\n--------");
    printf("\n\n");
    printf("Ingrese el numero a dividir: ");fflush(stdin);scanf("%f",&n1);
    printf("Ingrese el divisor: ");fflush(stdin);scanf("%f",&n2);
    division = n1/n2;
    printf("\nResultado: %.2f",division);
    printf("\n\n");
    system("pause");
}

void potenciar(int n1, int n2)
{
    
    int potencia=0;
    system("cls");
    printf("Potenciacion");
    printf("\n------------");
    printf("\n\n");
    printf("Ingrese el numero que desea potenciar: ");fflush(stdin);scanf("%i",&n1);
    printf("Ingrese la potencia: ");fflush(stdin);scanf("%i",&n2);
    potencia = pow(n1,n2);
    printf("\nResultado: %i",potencia);
    printf("\n\n");
    system("pause");
}

void raizCuadrada(int n1)
{
    float raiz=0.0;
    system("cls");
    printf("Raiz de un numero");
    printf("\n-----------------");
    printf("\n\n");
    printf("Ingrese el numero al que se le calculara la raiz: ");fflush(stdin);scanf("%i",&n1);
    raiz = sqrt(n1);
    printf("\nResultado: %.2f",raiz);
    printf("\n\n");
    system("pause");
}

int main()
{
    setlocale(LC_ALL,"spanish");system("cls");//traduce y limpia la pantalla
    int opcion=0;
    int v[cantNumeros];
    printf("Calculadora\n");//presentacion
    printf("-----------");
    printf("\n\n");
    system("pause");
    do //menú de opciones
    {
        system("cls");
        printf("Menu de opciones\n");
        printf("----------------\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Potenciar\n");
        printf("6. Raiz de un numero\n");
        printf("7. Salir");
        printf("\n\n");
        printf("Elija una opcion: ");fflush(stdin);scanf("%i",&opcion);
        switch(opcion)
        {
            case 1: sumar(v);
            break;
            case 2: restar(v);
            break;
            case 3: multiplicar(v);
            break;
            case 4: dividir(n1,n2);
            break;
            case 5: potenciar(n1,n2);
            break;
            case 6: raizCuadrada(n1);
            break;
            case 7: printf("\nApagando...");
            break;
            default: printf("\nLa opcion ingresada no es valida!!");
            printf("\n\n");
            system("pause");
            break;
        }
    } while (opcion!=7);//si la opcion es 7, sale del menú.
    printf("\n\n");
    getch();
    return 0;
}
