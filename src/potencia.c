#include <stdio.h>
#include <stdlib.h>

double potencia(double x,int y);
double potenciaRecursivo(double x,int y,double z);

int main(void)
{
    printf("%lf",potencia(2,3));
    return 0;
}

/**
 * potencia de un numero recursivo.
 * @param  x Base.
 * @param  y Exponente.
 * @return   potencia x^y
 */
double potencia(double x,int y)
{
    return potenciaRecursivo(x,y,1);
}

/**
 * Funcion para enmascarar el Acumulador
 * @param  x  Base.
 * @param  y  Exponente.
 * @param  z  Acumulador.
 * @return   potencia x^y
 */
double potenciaRecursivo(double x,int y,double z)
{
    return (y == 0) ? z : potenciaRecursivo(x,--y,z*x);
}
