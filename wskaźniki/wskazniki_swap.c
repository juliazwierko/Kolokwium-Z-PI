#include <stdio.h>
#include <stdlib.h>

void fun_1(int x)
{
    x = 100;
    printf("Wartość wewnątrz funkcji fun_1: %d\n", x);
}

void fun_2(int *x)
{
    *x = 100;
    printf("Wartość wewnątrz funkcji fun_2: %d\n", *x);
}

void swap_1(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

void swap_2(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(int argc, char const *argv[])
{
    int x = 5;

    printf("Wartość przed funkcją fun_1: %d\n", x);
    fun_1(x);
    printf("Wartość po funkcji fun_1: %d\n", x);

    printf("\n\n");

    printf("Wartość przed funkcją fun_2: %d\n", x);
    fun_2(&x);
    printf("Wartość po funkcji fun_2: %d\n", x);

    printf("\n\n");

    int y = -10;
    printf("Wartości przed zamianą swap_1: \tx = %d\ty = %d\n", x, y);
    swap_1(x, y);
    printf("Wartości po zamianie swap_1: \tx = %d\ty = %d\n", x, y);

    printf("\n\n");

    printf("Wartości przed zamianą swap_2: \tx = %d\ty = %d\n", x, y);
    swap_2(&x, &y);
    printf("Wartości po zamianie swap_2: \tx = %d\ty = %d\n", x, y);

    return 0;
}
