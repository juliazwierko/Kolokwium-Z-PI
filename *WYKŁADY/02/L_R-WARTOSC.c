#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    
/*
L-wartość – odnosi się do wartości,
które istnieją dłużej niż przez jedno 
wyrażenie i można pobrać ich adres. 
*ptr, ++z


R-wartość - odnosi się do wartości istniejącej 
tylko przez jedno wyrażenie.
x+y, x++
*/
    int * wsk;
    int TAB[5] = {4,7,3,11,2}, j; wsk = TAB;
    *++wsk; //l
    ++*wsk; 
    *wsk++; //l
    (*wsk)++;
}
