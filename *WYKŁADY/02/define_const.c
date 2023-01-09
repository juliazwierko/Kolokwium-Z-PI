#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

#define N 15

int main() {
    const int a = 1;
    printf("%d\n", a);

    int b = 12;
    for (int i = 0; i < N; i++)
    {
        printf("%d ", b);
        b++;  
    }
    return 0;
}

//OutPut:
//1
//12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 %      
