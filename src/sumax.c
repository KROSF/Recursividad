#include <stdio.h>

int sumax(const int*,int,int);
int llamda_sumax(const int*,int,int,int,int);

int main(void) {
    int v[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d",sumax(v,10,30));
    return 0;
}


int sumax(const int* vector,int tam,int x)
{
    return llamda_sumax(vector,tam,x,0,1);
}

int llamda_sumax(const int* vector ,int tam ,int x,int i,int j)
{
    if( i == tam-1)
        return 0;

    if( j == tam )
        return llamda_sumax(vector,tam,x,i+1,i+2);

    if(vector[i]+vector[j] == x)
        return 1;

    return llamda_sumax(vector,tam,x,i,j+1);
}
