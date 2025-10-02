#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;

    printf("Ingrese el valor:");fflush(stdin);scanf("%i",&n);
    while(n>0)
    {
        if(n%2==0) printf("%d\n",n);
        n--;
    }
    return 0;
}
