#include <stdio.h>
#include <stdlib.h>


int cifras(int x);
int cifrasRecursivo(int x,int y);

double potencia(double x,int y);
double potenciaRecursivo(double x,int y,double z);

int parejasvector(const int* v,int tam);
int parejasvectorRecursivo(const int* v,int tam,int cont);


int main(void)
{
    printf("%d\n",cifras(-100));
    //printf("%lf",potencia(2,3));
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

double potencia(double x,int y)
{
    return potenciaRecursivo(x,y,1);
}

double potenciaRecursivo(double x,int y,double z)
{
    return (y == 0) ? z : potenciaRecursivo(x,--y,z*x);
}

int parejasvector(const int* v,int tam)
{
    return parejasvectorRecursivo(v,tam,0);
}
int parejasvectorRecursivo(const int* v,int tam,int cont)
{
    return 1;
}
