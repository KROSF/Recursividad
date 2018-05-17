#include <stdio.h>
#include <math.h>

int binario_decimal(int);
int llamada_binario_decimal(int,int,int);

int main(void) {
    printf("%d\n",binario_decimal(10101010));
    return 0;
}

/**
 * Convierte un Binario Decimal a Decimal
 * @param  b  Entero Binario
 * @return    Representacion de Entero.
 */
int binario_decimal(int b)
{
    return llamada_binario_decimal(b,0,0);
}

/**
 * llamada_binario_decimal
 * @param  b  Binario en representacion en base 10
 * @param  d  Entero Auxiliar
 * @param  i  Contador
 * @return    Representacion decimal.
 */
int llamada_binario_decimal(int b,int d,int i)
{
    if( b == 0 ) return d;
    if( b % 10 == 1 )
        return llamada_binario_decimal( b/10 ,d + (int)pow(2,i), i+1 );
    else
        return llamada_binario_decimal( b/10 , d , i+1 );
}
