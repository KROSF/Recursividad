#include <stdio.h>
//Tamaño del vector.
#define N 5
// Cabeceras
int simetrico(int,const int*);
int llamada_simetrico(int,int,const int*,int);
int main(void) {
    int vec[N]={1,2,3,3,2};
    if(simetrico(N,vec) == 1 ) printf("Cumple la condicion");
    else printf("No Cumple");
    return 0;
}
/**
 * Funcion Recursiva que verifica la simetria en un vector.
 * @param  size   Tamaño del vector.
 * @param  vector Referencia al vector.
 * @return        1 si el vector es simetrico.
 */
int simetrico(int size,const int* vector)
{
    return llamada_simetrico(0,size,vector,0);
}
/**
 * Funcion de para enmascarar las varibles alpha cont.
 * @param  alpha  Indice que recorrer el vector.
 * @param  size   Tamaño del vector.
 * @param  vector Referencia del vector.
 * @param  cont   Variable de control si existen exactamente size/2 elementos.
 * @return        1 si el vector es simetrico.
 */
int llamada_simetrico(int alpha,int size ,const int* vector ,int cont)
{
    if (cont == size/2) return 1;
    if(alpha < size/2 && vector[alpha] == vector[size-(alpha+1)])
    return llamada_simetrico(alpha+1,size,vector,cont+1);
    else return 0;
}
