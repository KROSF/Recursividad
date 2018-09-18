#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <stdint.h>
#include <math.h>

static int64_t _w_decimal_to_binary(int dcml, int i, int sum){
    if (!dcml) return sum;
    return _w_decimal_to_binary(dcml/2,i+1,sum + ((int)pow(10,i)*(dcml%2)));
}

int64_t decimal_to_binary(int dcml){
    return _w_decimal_to_binary(dcml,0,0);
}

static int _w_reverse_number(int n,int s){
    if (!n) return s;
    return _w_reverse_number(n/10,(s*10)+(n%10));
}

int reverse_number(int n){
    return _w_reverse_number(n,0);
}

int _w_mcd(int a,int b){
    if (!b) return a;
    return _w_mcd(b,a%b);
}

int mcd(int a,int b){
    if (a > b)
        return _w_mcd(a,b);
    return _w_mcd(b,a);
}

int _w_pow_recursive(int b,int e,int s){
    if (!e) return s;
    return _w_pow_recursive(b,e-1,b*s);
}

int pow_recursive(int b,int e){
    return _w_pow_recursive(b,e,1);
}

int _w_product(int a,int b, int s){
    if (!b || !a) return s;
    return _w_product(a,b-1,s+a);
}

int product(int a,int b){
    return _w_product(a,b,0);
}

void swap(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

int _w_bubble_sort(int* v,int s, int i, int j){
    if (i == s) return 1;
    if (j == s - i)
        return _w_bubble_sort(v,s,i+1,0);
    if (v[j] > v[j+1])
        swap(&v[j],&v[j+1]);
    return _w_bubble_sort(v,s,i,j+1);
}

void bubble_sort(int* v,int s){
    _w_bubble_sort(v,s,1,0);
}

int _w_insertion_sort(int* v,int s, int i, int j){
    if (i == s) return 1;
    if ( j > 0  && v[j-1] > v[j]){
        swap(&v[j],&v[j-1]);
        return _w_insertion_sort(v,s,i,j-1);
    }
    return _w_insertion_sort(v,s,i+1,i+1);
}

void insertion_sort(int* v, int s){
    _w_insertion_sort(v,s,0,0);
}

int _w_selection_sort(int* v, int s, int i, int j,int min){
    if (i == s-1) return 1;
    if (j == s)
        return _w_selection_sort(v,s,i,i+2,min);
    if (v[j] < v[min])
        return _w_selection_sort(v,s,i,j+1,j);
    swap(&v[min],&v[i]);
    return _w_selection_sort(v,s,i+1,i+2,i+1);
}

void selection_sort(int* v, int s){
    _w_selection_sort(v,s,0,1,0);
}

#endif