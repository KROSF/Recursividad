#include <stdio.h>
int parejasvector(const int* v,int tam);
int parejasvectorRecursivo(const int* v,int tam,int i);
int main(void)
{
    int vec[6]={3,2,2,1,2,1};
    if(parejasvector(vec,6) == 1) printf("Existe una pareja");
    else printf("No Existe una pareja");
    return 0;
}
/**
 * Determina si un vector de n elementos contiene dos parejas consecutivas
 * tales que que sus sumas son iguales.
 * @param  v   Referencia al vector.
 * @param  tam Tamaño del vector.
 * @return     1 si existe la pareja de elementos, 0 si no.
 */
int parejasvector(const int* v,int tam)
{
    return parejasvectorRecursivo(v,tam,0);
}

/**
 * Funcion que enmascarar el parametro que controla el bucle.
 * @param  v   Referencia al vector.
 * @param  tam Tamaño del vector.
 * @param  i   Indice del vector.
 * @return     1 o 0 y la una llamada a la propia funcion.
 */
int parejasvectorRecursivo(const int* v,int tam,int i)
{
    /*
     *  No se encuentra los pares de elementos o el vector tienes un tamaño menor.
     */
    if( i > tam-4) return 0;
    /*
     *  Se han encontrado las parejas.
     */
    if( (v[i] + v[i+1]) == (v[i+2] + v[i+3])) return 1;
    /*
     * Caso General
     */
    return parejasvectorRecursivo(v,tam,i+1);
}
