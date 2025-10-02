#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, *p1, *p2;
    p1=&a;
    *p1=1;

    p2=&b;
    *p2=2;

    p2=&c;
    *p2=3;

    printf("a-%i, b-%i, c-%i\n",a,b,c);
    system("pause");
    return 0;
}
