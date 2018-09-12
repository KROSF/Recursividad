#include <stdio.h>
#include "funciones.h"

int main(){
    int v[8] = {3,2,1,0};
    selection_sort(v,4);
    for(int i = 0; i < 4; ++i){
        printf( "%d ", v[i]);
    }
}