#include <stdio.h>
#include <stdlib.h>

int cifras(int x);
int cifrasRecursivo(int x,int y);

int main(void)
{
    printf("%d\n",cifras(-100));
    return 0;
}

int cifras(int x)
{
    return cifrasRecursivo(x,1);
}

int cifrasRecursivo(int x,int y)
{
    return ( abs(x) < 10) ? y : cifrasRecursivo(x/10,++y);
}

