#include <stdio.h>

int intercambiar(int,int*,int);
int llamada_intercambiar(int,int*,int,int);

int main(void) {
    int vec[5]={1,2,3,4,5};
    intercambiar(5,vec,5);
    printf("Vector: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ",vec[i]);
    }
    printf("\n");
    return 0;
}

/**
 * Intercambia los k elementos del inicio por los k ultimos.
 * @param  size   Tamaño del vector.
 * @param  vector Referencia del vector.
 * @param  k      Numero de elementos a intercambiar.
 * @return        1 cuando cumple la condicion o k es mayor que size.
 */
int intercambiar(int size,int *vector,int k){
    return llamada_intercambiar(size,vector,k,0);
}

/**
 * Enmascara la variable index.
 * @param  size   Tamaño del vector.
 * @param  vector Referencia del vector.
 * @param  k      Numero de elementos a Intercambiar.
 * @param  index  Control de indices para el vector.
 * @return        1 cuando cumple la condicion o k es mayor que size.
 */
int llamada_intercambiar(int size,int *vector,int k,int index){
    if(index == k && k <= size) return 1;
    else {
        int tmp = vector[index];
        vector[index] = vector[size-k+index];
        vector[size-k+index] = tmp;
        return llamada_intercambiar(size,vector,k,index+1);
    }
}
