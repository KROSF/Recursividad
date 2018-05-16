#include <stdio.h>
#include <math.h>
int binario_decimal(int);
int llamada_binario_decimal(int,int,int);
int main(void) {
    printf("%d\n",binario_decimal(10101010));
    return 0;
}
int binario_decimal(int b)
{
    return llamada_binario_decimal(b,0,0);
}
int llamada_binario_decimal(int b,int d,int i)
{
    if( b == 0 ) return d;
    if( b % 10 == 1 )
    {
      return llamada_binario_decimal( b/10 ,d + (int)pow(2,i), i+1 );
    }
    else
    {
      return llamada_binario_decimal( b/10 , d , i+1 );
    }

}
