#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int x = 0; //zmienna globalna;

void funk()
{
    x++;
    printf("wartosc x: %d\n", x);
}

int main (void) 
{
    funk();
    funk();
    return 0;
}

/*
wartosc x: 1
wartosc x: 2
*/
