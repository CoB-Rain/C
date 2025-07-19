#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <conio.h>
#include <math.h>

void MostrarProductos(int codigo_producto[], int precio_producto[], int cantidad_productos);
int BuscarProducto(int codigo_producto[], int codigo_buscado, int cantidad_productos);
void ActualizarTotal(int *total_puntero, int monto_venta);

int main()
{
    setlocale(LC_ALL,"spanish");
    //4 productos
    int cantidad_productos = 4;
    int codigo_producto[cantidad_productos];
    int precio_producto[cantidad_productos];
    int codigo,precio,numero_venta,monto_venta;
    
    int monto_diario = 0;
    int *total_puntero;

    total_puntero = &monto_diario;

    int i;

    MostrarProductos(codigo_producto,precio_producto,cantidad_productos);

    for(i=0;i<cantidad_productos;i++)
    {
        codigo_producto[i] = 0;
        precio_producto[i] = 0;
    }

    MostrarProductos(codigo_producto,precio_producto,cantidad_productos);

    for(i=0;i<cantidad_productos;i++)
    {
        printf("\nIngrese el codigo del producto: ");
        scanf("%d",&codigo);
        printf("\nIngrese el precio del producto: ");
        scanf("%d",&precio);

        codigo_producto[i] = codigo;
        precio_producto[i] = precio;
    }

    MostrarProductos(codigo_producto,precio_producto,cantidad_productos);

    printf("\nIngrese el numero de venta: ");
    scanf("%d",&numero_venta);

    while(numero_venta!=0)
    {
        printf("\nIngrese el codigo del producto que desea vender: ");
        scanf("%d",&codigo);

        int indice_buscado,cantidad_venta;
        indice_buscado = BuscarProducto(codigo_producto,codigo,cantidad_productos);

        if(indice_buscado == -1)
        {
            printf("\nEl producto es inexistente.");
        }
        else
        {
            printf("\nIngrese la cantidad del producto: ");
            scanf("%d",&cantidad_venta);

            monto_venta = cantidad_venta * precio_producto[indice_buscado];
            printf("\nEl monto de la venta es: %d",monto_venta);

            ActualizarTotal(total_puntero, monto_venta);
        }

        printf("\nIngrese el numero de venta: ");
        scanf("%d",&numero_venta);
    }

    printf("\nEn el dia se recaudo un total de: %d",monto_diario);
    printf("\nEn el dia se recaudo un total de: %d", *total_puntero);

    printf("\n\n");
    system("pause");
    return 0;
}

void MostrarProductos(int codigo_producto[], int precio_producto[], int cantidad_productos)
{
    int i;
    printf("\n");
    for(i=0;i<cantidad_productos;i++)
    {
        printf("\nEl valor es de: %i %i",codigo_producto[i],precio_producto[i]);
    }
    printf("\n");
}

int BuscarProducto(int codigo_producto[], int codigo_buscado, int cantidad_productos)
{
    int i;
    for(i=0;i<cantidad_productos;i++)
    {
        if(codigo_producto[i] == codigo_buscado);
        {
            return i;
        }
    }
    return -1;
}

void ActualizarTotal(int *total_puntero, int monto_venta)
{
    *total_puntero += monto_venta;
}