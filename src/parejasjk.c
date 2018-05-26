/**
* @file SanabriaFloresCarlosRodrigo-Recur3.c
* @author Carlos Rodrigo Sanabria Flores
* @date 23 May 2018
* @copyright 2018 Carlos Rodrigo Sanabria Flores
*/
#include <stdio.h>
int parejas(const int *,int);
int llamada_parejas(const int*,int,int,int,int,int,int,int,int);

int main(void){
    int vector[7] = {1,2,3,4,3,2,1};
    printf("%d",parejas(vector,7));
    return 0;
}
// funcion recursiva que cuenta los elementos
int parejas(const int * vector,int tam)
{
    return  llamada_parejas(vector,tam,0,0,0,0,0,0,0);
}
// Funcion para enmascarar los elementos
int llamada_parejas(const int* vector ,int tam ,int in1,int in2,int j,int k,int sumj,int sumk,int cont)
{
    // caso de salida
    if(j == tam) return cont;
    //Si termina k incrementa j y reinicia k.
    if(k == tam ) return llamada_parejas(vector,tam,0,0,j+1,0,0,0,cont);
    // constrol del primer sumatorio
    if(in1 <= j) return llamada_parejas(vector,tam,in1+1,k,j,k,sumj+vector[in1],sumk,cont);
    // constrol del segundo sumatorio
    if(in2 < tam) return llamada_parejas(vector,tam,in1,in2+1,j,k,sumj,sumk+vector[in2],cont);
    // comprueba si ambos son iguales y aumenta el contador
    if(sumj == sumk) return llamada_parejas(vector,tam,0,k,j,k+1,0,0,cont+1);
    // caso base
    else return llamada_parejas(vector,tam,0,k,j,k+1,0,0,cont);
}
