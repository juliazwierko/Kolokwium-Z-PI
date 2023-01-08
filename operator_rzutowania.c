#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main (void) 
{
    //Operator Rzutowania 
    int res_1;
    int res_2;

    res_1 = 1.13 + 13.93;
    res_2 = (int)1.13 + (int)13.93; // 1 + 13

    printf("res1 = %d\n", res_1);
    printf("res2 = %d\n", res_2);

    return 0;
}

/*
res1 = 15
res2 = 14
*/
