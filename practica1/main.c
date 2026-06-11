#include "miCabecera1.h"

/*Desarrollar un programa que posea una estructura de datos denominada persona
posee los siguientes datos:
-nombre (char 20)
-apellido (char 20)
-edad (int)
-direccion (char 40)
A traves de funciones por parametro de referencia cargar los valores a las
variables del tipo estructura persona y permitir modificarlo
y mostrar en pantalla*/

//Estructura de Persona
struct Persona
{
    char nombre[20];
    char apellido[20];
    int edad;
    char direccion[40];
};

//Metodos que usare en el sistema
void CargarPersona(struct Persona *p);
void ModificarPersona(struct Persona *p);
void MostrarPersona(struct Persona p);

int main()
{
    struct Persona p = {"", "", 0, ""}; //Inicializo vacio
    pos(50, 1);
    printf("Pantalla de inicio");
    pos(50, 2);
    printf("------------------");
    pos(50, 4);
    system("pause");

    short opcion = 0;
    do{
        system("cls");
        pos(50, 1);
        printf("Menu de opciones");
        pos(50, 2);
        printf("----------------");
        pos(50, 4);
        printf("1. Cargar persona");
        pos(50, 5);
        printf("2. Modificar persona");
        pos(50, 6);
        printf("3. Mostrar persona");
        pos(50, 7);
        printf("0. Salir");
        pos(40, 9);
        printf("Seleccione una opcion: ");
        scanf("%hi", &opcion);
        system("cls");

        switch(opcion)
        {
            case 0:
                pos(50, 1);
                printf("Saliendo del sistema...");
                getch();
                break;
            case 1:
                CargarPersona(&p);
                pos(50, 14);
                system("pause");
                break;
            case 2:
                ModificarPersona(&p);
                pos(50, 14);
                system("pause");
                break;
            case 3:
                MostrarPersona(p);
                pos(50, 14);
                system("pause");
                break;
            default:
                pos(50, 1);
                printf("Opcion incorrecta.");
                pos(50, 3);
                system("pause");
                break;
        }

    }while(opcion != 0);
    return 0;
}

void CargarPersona(struct Persona *p)
{
    pos(50, 5);  printf("=== FORMULARIO DE REGISTRO ===");
    pos(50, 7);  printf("Nombre: ");
    pos(50, 8);  printf("Apellido: ");
    pos(50, 9);  printf("Edad: ");
    pos(50, 10); printf("Direccion: ");

    // Ahora movemos el cursor justo al lado de cada etiqueta para leer los datos

    // 1. Leer Nombre
    pos(58, 7);
    fflush(stdin);
    fgets(p->nombre, sizeof(p->nombre), stdin);
    p->nombre[strcspn(p->nombre, "\n")] = '\0';

    // 2. Leer Apellido
    pos(60, 8);
    fgets(p->apellido, sizeof(p->apellido), stdin);
    p->apellido[strcspn(p->apellido, "\n")] = '\0';

    // 3. Leer Edad
    pos(56, 9);
    scanf("%d", &(p->edad));
    fflush(stdin); // Limpiamos buffer post-scanf

    // 4. Leer Dirección
    pos(61, 10);
    fgets(p->direccion, sizeof(p->direccion), stdin);
    p->direccion[strcspn(p->direccion, "\n")] = '\0';

    pos(50, 12); printf("Persona cargada con exito!");
}

void ModificarPersona(struct Persona *p)
{
    // Variables para calcular las columnas de escritura dinámicamente
    short colNombre, colApellido, colEdad, colDireccion;

    pos(50, 4);  printf("=== MODIFICAR DATOS ACTUALES ===");
    // 1. Mostrar Nombre
    pos(50, 6);
    printf("Nombre actual: %s -> Nuevo: ", p->nombre);
    colNombre = 50 + 15 + strlen(p->nombre) + 11;

    // 2. Mostrar Apellido
    pos(50, 7);
    printf("Apellido actual: %s -> Nuevo: ", p->apellido);
    colApellido = 50 + 17 + strlen(p->apellido) + 11;

    // 3. Mostrar Eda
    pos(50, 8);
    printf("Edad actual: %d -> Nueva: ", p->edad);
    colEdad = 50 + 13 + 2 + 10;

    // 4. Mostrar Dirección
    pos(50, 9);
    printf("Direccion actual: %s -> Nueva: ", p->direccion);
    colDireccion = 50 + 18 + strlen(p->direccion) + 10;

    // Leer Nuevo Nombre
    pos(colNombre, 6);
    fflush(stdin);
    fgets(p->nombre, sizeof(p->nombre), stdin);
    p->nombre[strcspn(p->nombre, "\n")] = '\0';

    // Leer Nuevo Apellido
    pos(colApellido, 7);
    fgets(p->apellido, sizeof(p->apellido), stdin);
    p->apellido[strcspn(p->apellido, "\n")] = '\0';

    // Leer Nueva Edad
    pos(colEdad, 8);
    scanf("%d", &(p->edad));
    fflush(stdin);

    // Leer Nueva Dirección
    pos(colDireccion, 9);
    fgets(p->direccion, sizeof(p->direccion), stdin);
    p->direccion[strcspn(p->direccion, "\n")] = '\0';

    pos(50, 12); printf("Persona modificada con exito!");
}

void MostrarPersona(struct Persona p)
{
    pos(50, 5);  printf("=== FICHA DE LA PERSONA ===");
    pos(50, 7);  printf("Nombre completo: %s %s", p.nombre, p.apellido);
    pos(50, 8);  printf("Edad:            %d anos", p.edad);
    pos(50, 9);  printf("Direccion:       %s", p.direccion);
    pos(50, 11); printf("---------------------------");
}
