#include <stdio.h>
#include <stdlib.h>

double potencia(double x,int y);
double potenciaRecursivo(double x,int y,double z);

int main(void)
{
    printf("%lf",potencia(2,3));
    return 0;
}

double potencia(double x,int y)
{
    return potenciaRecursivo(x,y,1);
}

double potenciaRecursivo(double x,int y,double z)
{
    return (y == 0) ? z : potenciaRecursivo(x,--y,z*x);
}

