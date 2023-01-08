#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main (void) 
{
    int x;
    x = 10;
    if (x == 10)
    {
        int x;
        x = 99;
        printf("Wewnetrzna x: %d\n", x);
    }
    printf("Zewnetrzna x: %d", x);

    printf("\n");
    return 0;
}

//Komientarz:
//Wewnetrzna x: 99
//Zewnetrzna x: 10
