#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main (void) 
{
    int hex = 0x80;
    printf("%d\n", hex); // 80(16) -> 128(10)

    int oct = 012;
    printf("%d\n", oct); // 12(8) -> 10(10)

    /*
    int 1, 123, -123
    long int 35000L, -34L
    unsignned int 10000U, 987u
    float 123.23F, 4.34e2f 
    double 123.23, -0.89898 
    long double 1000.12L
    */
    return 0;
}

