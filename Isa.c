/*Una empresa desea procesar las ventas que efectúa conociendo los siguientes datos:
		1 - Número de factura
		2 - Código de articulo
		3 - Cantidad vendida
		4 - Precio unitario

	en cada factura sólo se vende un tipo de artículo, los artículos son 6 y los datos finalizan con número de factura = 0

	Se pide :

		A.   cantidad de facturas emitidas

		B.    monto de cada factura

		C.    suma de las facturas (caja diaria)

		D.   cantidad total de artículos vendidos

		E.    cantidad vendida de cada artículo

		F.     cantidad de facturas emitidas para cada artículo

		G.   promedio de importe de las facturas

		H.   porcentual que representa el monto total de cada artículo sobre el total*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <conio.h>
#include <math.h>
/*--------------------------------------------------------------------------------------------------------------------------------*/
char ca1[5] = "0001",ca2[5] = "0010",ca3[5] = "0011",ca4[5] = "0100",ca5[5] = "0101",ca6[5] = "0110";
/*
struct Ventas
{
    int numeroFactura;
    int codigoArticulo;
    int cantidadVendida;
    float precioUnitario;
};
*/
int main()
{
	system("cls");
    setlocale(LC_ALL,"spanish");
	printf("Procesamiento de Ventas\n");
	printf("-----------------------");
	printf("\n\n");
	system("pause");

	int opcion;
	do
	{
		system("cls");
		printf("Menú de opciones");
		printf("\n----------------");
		printf("\n1. Ver codigos de articulos");
		printf("\n2. Emitir una factura");
		printf("\n3. Total de facturas emitidas");
		printf("\n4. Monto x Factura");
		printf("\n5. Caja diaria");
		printf("\n6. Total de articulos vendidos");
		printf("\n7. Ventas x Articulos");
		printf("\n8. Facturas emitidas x articulo");
		printf("\n9. Promedio de importe de facturas");
		printf("\n10. Porcentaje del monto total de cada articulo sobre el total");
		printf("\n0. Salir del Programa");
		printf("\n\n");
		printf("Elija una opcion: ");
		fflush(stdin);scanf("%i",&opcion);
		switch (opcion)
		{
		case 1:
			VerCodigosArticulos();
			break;
		case 2:
			EmitirFactura();
			break;
		default:
			printf("\nSaliendo del programa...");
			break;
		}
	} while (opcion != 0);

	printf("\n\n");
    system("pause");
    return 0;
}

void VerCodigosArticulos()
{
	system("cls");//limpiamos pantalla
	printf("Articulo (1): %s\n",ca1);//codigo de articulo 1
	printf("Articulo (2): %s\n",ca2);//codigo de articulo 2
	printf("Articulo (3): %s\n",ca3);//codigo de articulo 3
	printf("Articulo (4): %s\n",ca4);//codigo de articulo 4
	printf("Articulo (5): %s\n",ca5);//codigo de articulo 5
	printf("Articulo (6): %s",ca6);//codigo de articulo 6
	printf("\n\n");
	system("pause");//termina funcion
}

void EmitirFactura()
{
	system("cls");//limpiamos pantalla
	char ca[5];//creamos un string de 5 caracteres para verificar el codigo de articulo que se usara para emitir la factura

	printf("Ingrese el codigo de articulo: ");//pedimos al usuario que ingrese el codigo de articulo
	fflush(stdin);scanf("%s",&ca);//almacenamos el valor en nuestro string
	printf("\n");
	//ahora que tenemos el codigo de articulo que nos paso el usuario, validamos si es alguno de los existentes.
	if(ca!=ca1)
	{
		//verdadero
		if(ca!=ca2)
		{
			//verdadero
			if(ca!=ca3)
			{
				//verdadero
				if(ca!=ca4)
				{
					//verdadero
					if(ca!=ca5)
					{
						//verdadero
						if(ca!=ca6)
						{
							//verdadero
							printf("El codigo de articulo que ha ingresado es invalido!");
							printf("\nPuede consultar los codigos de articulos en el menu de opciones.");
						}
						else
						{
							//falso
							printf("Ha seleccionado el articulo 6");
						}
					}
					else
					{
						//falso
						printf("Ha seleccionado el articulo 5");
					}
				}
				else
				{
					//falso
					printf("Ha seleccionado el articulo 4");
				}
			}
			else
			{
				//falso
				printf("Ha seleccionado el articulo 3");
			}
		}
		else
		{
			//falso
			printf("Ha seleccionado el articulo 2");
		}
	}
	else
	{
		//falso
		printf("Ha seleccionado el articulo 1");
	}
	printf("\n\n");
	system("pause");
}
