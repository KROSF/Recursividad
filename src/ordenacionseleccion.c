#include <stdio.h>
// Cabeceras
int seleccion(int,int*);
int llamada_seleccion(int,int,int*,int,int);
int main(void) {
    int vec[6]={4,5,1,2,3,6};
    seleccion(6,vec);
    for (int i = 0; i < 6; i++) {
        printf("%d ", vec[i]);
    }
    return 0;
}
/**
 * Funcion que ordena un vector con el algoritmo de seleccion
 * @param  size   Tamaño del vector
 * @param  vector Referencia del vector
 * @return        1 cuando termina
 */
int seleccion(int size,int * vector){
    return llamada_seleccion(0,1,vector,size,0);
}
/**
 * Funcion para enmascarar las varibles
 * @param  i        primer elemento
 * @param  j        segundo elemento
 * @param  vector   Referencia del vector
 * @param  size     Tamaño del vector
 * @param  pos_mini Posicion del elemento mas pequeño
 * @return          1 cuando termina
 */
int llamada_seleccion(int i,int j,int *vector,int size,int pos_mini){
    // Salida del primer bucle controlado por i.
    if( i == size-1) return 1;
    // Intercambia el mas pequeño encontrado cuando j termina de iterar
    if(j == size )
    {
        int aux = vector[pos_mini];
        vector[pos_mini]= vector[i];
        vector[i] = aux;
        return llamada_seleccion(i+1,i+2,vector,size,i+1);
    }
    // si encuentra un elemento menor que en pos_mini se intercambia
    if(vector[j] < vector[pos_mini]) pos_mini = j;
    // Segundo bucle de control con j
    return llamada_seleccion(i,j+1,vector,size,pos_mini);
}
