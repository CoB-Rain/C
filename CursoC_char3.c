/* Mostrar el abecedario de la 'A' a la 'Z' primero en mayúsculas y luego en minúsculas.
Utilizar una variable de tipo char dentro de un for.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char letra;
    for(letra='A'; letra<='Z'; letra++)
    {
        printf("%c ",letra);
    }
    printf("\n\n");
    for(letra='a'; letra<='z'; letra++)
    {
        printf("%c ",letra);
    }
    getch();
    return 0;
}
