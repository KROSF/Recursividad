#include <stdio.h>
#include <stdlib.h>

int cifras(int x);
int cifrasRecursivo(int x,int y);

int main(void)
{
    printf("%d",cifras(-100));
    return 0;
}

/**
 * Cuenta las cifras de Un numero entero.
 * @param  x Numero a contar.
 * @return   Numero de cifras.
 */
int cifras(int x)
{
    return cifrasRecursivo(x,1);
}

/**
 * Funcion para enmascarar la suma de los elementos.
 * @param  x Numero del que contar las cifras.
 * @param  y Suma de los digitos.
 * @return   Numero de digitos.
 */
int cifrasRecursivo(int x,int y)
{
    return ( abs(x) < 10) ? y : cifrasRecursivo(x/10,++y);
}
