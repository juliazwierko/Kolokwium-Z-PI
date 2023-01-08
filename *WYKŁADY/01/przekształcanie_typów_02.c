#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main (void) 
{
    char znak;
    int i;
    float liczba;

    printf("Test 1:\n");
    liczba = i = znak = 'H';
    printf("Znak = %c\n", znak);
    printf("i = %d\n", i);
    printf("liczba = %4.2f\n\n", liczba);
    /*
    Znak = H
    i = 72
    liczba = 72.00
    */

    printf("Test 2:\n");
    znak += 1; // H -> I
    liczba = i = znak;
    printf("Znak = %c\n", znak);
    printf("i = %d\n", i);
    printf("liczba = %4.2f\n\n", liczba);
    /*
    Znak = I
     = 73
    liczba = 73.00
    */
   
    printf("Test 3:\n");
    znak = 5212205.17F;
    printf ("Teraz znak = %d ,znak = %c\n", znak, znak); 

    return 0;
}
