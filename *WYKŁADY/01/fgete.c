#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>


int main (void) 
{
    char s[80];
    printf (" Podaj nnazwisko : ");

    fgets(s, 80, stdin);
    printf (" Podales: %s", s);
    return 0;
}

// Podaj nnazwisko : wedf
// Podales: wedf
