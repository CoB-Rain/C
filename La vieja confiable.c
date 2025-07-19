#include <stdio.h>
#include <stdlib.h>
//DESARROLLAR UN PROGRAMA QUE ADMINISTRE LA NOTA DEL EXAMEN
// DE PROGRAMACION DE UNA CLASE DE 15 ALUMNOS DE LOS CUALES
// SABEMOS EL LEGAJO.
// 1)BUSCAR ALUMNO POR LEGAJO.
// 2)BUSCAR ALUMNOS POR APELLIDO.
// (SI HAY MAS DE UNO MOSTRARLOS A TODOS ORDENADOS ALFABETICAMENTE)
// 3)MODIFICAR LA NOTA DE UN ALUMNO.
// 4)CALCULAR EL PROMEDIO DE TODAS LAS NOTAS.
// 5)CALCULAR EL PROMEDIO DE LAS NOTAS MENORES A 5.
// 6)MOSTRAR EL ALUMNO CON MEJOR NOTA.
// 7)MOSTRAR EL ALUMNO CON PEOR NOTA.
// 8)ORDENAR POR APELLIDO (ALFABETICAMENTE).
int main()
{
    struct alumno{
        int legajo;
        int nota;
        char nombre[22];
        char apellido[22]; //no tocar
    };
    int i,j,q,opcion,r,p,c;
    int buscarlegajo;
    int nuevanota;
    struct alumno aux;
    char buscarapellido[22];
    int flag=0;
    printf("Ingrese la cantidad de alumnos: "); fflush(stdin);scanf("%i",&q);
    struct alumno v[q];
    for(i=0;i<q;i++){
        printf("\nIngrese el legajo del alumno: "); fflush(stdin); scanf("%i",&v[i].legajo);
        printf("\nIngrese la nota del alumno: "); fflush(stdin); scanf("%i",&v[i].nota);
        printf("\nIngrese el nombre del alumno: "); fflush(stdin); gets(v[i].nombre);
        printf("\nIngrese el apellido del alumno: "); fflush(stdin); gets(v[i].apellido);
    }
    do{
        system("cls");
        printf("\n\n---------------------------------------------\n");
        printf("---------------------MENU--------------------\n");
        printf("----------------------------------------------\n\n");
        printf("1.Buscar el legajo del alumno\n");
        printf("2.Buscar el apellido del alumno\n");
        printf("3.Modificar nota del alumno\n");
        printf("4.Calcular el promedio de las notas de los alumnos\n");
        printf("5.Calcular el promedio de las notas menores de 5\n");
        printf("6.Mostrar el alumno que mejores notas ha sacado\n");
        printf("7.Mostrar el alumno que peores notas ha sacado\n");
        printf("8.Ordenar por apellido\n");
        printf("9.Cerrar programa\n");
        printf("\n\nEscoja una opcion: "); fflush(stdin); scanf("%i",&opcion);

        switch(opcion){
        case 1: printf("Ingrese el legajo del alumno: "); scanf("%i",&buscarlegajo);
                for(i=0;i<q;i++){
                if(v[i].legajo==buscarlegajo){
                    printf("%s %s nota:%i, legajo: %i\n",v[i].nombre,v[i].apellido,v[i].nota,v[i].legajo);
                    flag = 1;
                    }
                }
                if(flag==0){
                    printf("El alumno no existe!!");
                }break;
        case 2: printf("Ingrese el apellido del alumno: "); fflush(stdin);gets(buscarapellido);
                for(i=0;i<q;i++){
                if(strcmp(v[i].apellido,buscarapellido)==0){
                    printf("%s %s nota:%i, legajo: %i\n",v[i].nombre,v[i].apellido,v[i].nota,v[i].legajo);
                    flag=1;
                    }

                } if(flag==0){
                        printf("El alumno no existe!!");
                        } break;
        case 3: printf("Ingrese el legajo del alumno: "); scanf("%i",&buscarlegajo);
                for(i=0;i<q;i++){
                    if(v[i].legajo==buscarlegajo){
                        printf("%s %s nota:%i, legajo: %i\n",v[i].nombre,v[i].apellido,v[i].nota,v[i].legajo);
                        flag=1;
                        printf("\n\nIngrese la nueva nota: ");fflush(stdin);scanf("%i",&nuevanota);
                        v[i].nota=nuevanota;
                    }
                } if(flag==0){
                    printf("El alumno no existe");
                    } break;
        case 4: for(i=0;i<q;i++){
                r+=v[i].nota;
                p=r/q;
                } printf("El promedio de todas las notas es de %i\n\n",p); break;
        case 5: for(i=0;i<q;i++){
                if(v[i].nota<5){
                    r+=v[i].nota;
                    c++;
                    p=r/c;
                    }
                } printf("El promedio de las notas menores a 5 es: %i",p); break;
        case 6: for(i=0;i<q;i++){
                for(j=i+1;j<q;j++){
                    if(v[i].nota<v[j].nota){
                        aux=v[i];
                        v[i]=v[j];
                        v[j]=aux;
                        }
                    }
                } printf("%s %s nota:%i, legajo: %i\n",v[0].nombre,v[0].apellido,v[0].nota,v[0].legajo); break;
        case 7: for(i=0;i<q-1;i++){
                for(j=i+1;j<q;j++){
                    if(v[i].nota>v[j].nota){
                        aux=v[i];
                        v[i]=v[j];
                        v[j]=aux;
                        }
                    }
                } printf("%s %s nota:%i, legajo: %i\n",v[0].nombre,v[0].apellido,v[0].nota,v[0].legajo); break;
        case 8: for(i=0;i<q-1;i++){
                for(j=i+1;j<q;j++){
                    if(strcmp(v[i].apellido,v[j].apellido)>0){
                        aux=v[i];
                        v[i]=v[j];
                        v[j]=aux;
                        }
                    }
                }for(i=0;i<q;i++){
                    printf("\n\n%s %s nota:%i, legajo: %i\n",v[i].nombre,v[i].apellido,v[i].nota,v[i].legajo);
                    } break;
        case 9: printf("\n\nFIN DEL PROGRAMA\n\n"); break;
         default: printf("\nERROR!! Ingrese una opcion valida"); break;
        }

    system("pause");
    }while(opcion!=9);

    return 0;
}
