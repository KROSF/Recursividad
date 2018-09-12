#include "cheat.h" //<cheat.h> mas correcto
#include "funciones.h"//"funciones.h" mejor

CHEAT_TEST(decimal_to_binary_as_decimal,
    cheat_assert(decimal_to_binary(10) == 1010);
    cheat_assert(decimal_to_binary(1) == 1);
)

CHEAT_TEST(reverse_number,
    cheat_assert(reverse_number(123456) == 654321);
    cheat_assert(reverse_number(321) == 123);
)

CHEAT_TEST(mcd,
    cheat_assert(mcd(2,3) == 1);
    cheat_assert(mcd(12,2) == 2);
    cheat_assert(mcd(48,60) == 12);
)

CHEAT_TEST(pow_recursive,
    cheat_assert(pow_recursive(2,3) == 8);
    cheat_assert(pow_recursive(3,5) == 243);
)

CHEAT_TEST(product,
    cheat_assert(product(2,3) == 6);
    cheat_assert(product(3,2) == 6);
    cheat_assert(product(5,5) == 25);
)

CHEAT_TEST(bubble_sort,
    int v[10] = {9,8,7,6,5,4,3,2,1,0};
    bubble_sort(v,10);
    for(int i = 0; i < 10; ++i){
        cheat_assert( v[i] == i);
    }
)

CHEAT_TEST(insertion_sort,
    int v[10] = {9,8,7,6,5,4,3,2,1,0};
    insertion_sort(v,10);
    for(int i = 0; i < 10; ++i){
        cheat_assert( v[i] == i);
    }
)

CHEAT_TEST(selection_sort,
    int v[10] = {9,8,7,6,5,4,3,2,1,0};
    selection_sort(v,10);
    for(int i = 0; i < 10; ++i){
        cheat_assert( v[i] == i);
    }
)
