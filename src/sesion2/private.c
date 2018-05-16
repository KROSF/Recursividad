#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int binario_decimal(int);
int cifrasRecursivo(int x,int y);
int llamada_binario_decimal(int,int,int,int);
int main(void) {
    printf("%d",binario_decimal(1010));
    return 0;
}
/**
 * [binario_decimal description]
 * @param  n [description]
 * @return   [description]
 */
int binario_decimal(int n){
    return llamada_binario_decimal(n,cifrasRecursivo(n,1),0,0);
}
/**
 * [cifrasRecursivo description]
 * @param  x [description]
 * @param  y [description]
 * @return   [description]
 */
int cifrasRecursivo(int x,int y){
    return ( abs(x) < 10) ? y : cifrasRecursivo(x/10,++y);
}
/**
 * [llamada_binario_decimal description]
 * @param  n [description]
 * @param  t [description]
 * @param  i [description]
 * @param  d [description]
 * @return   [description]
 */
int llamada_binario_decimal(int n,int t,int i,int d){
    if( i < t)
    {
        int expnt = (n/(int)pow(10,i)) % 10;
        if(expnt)return llamada_binario_decimal(n,t,i+1, d + (int)pow(2,i));
        else return llamada_binario_decimal(n,t,i+1,d);
    }
    return d;
}
