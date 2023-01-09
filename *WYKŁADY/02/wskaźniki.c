#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    //zmienne wskaznikowe 
    //typ_podstawowy *nazwa;


    //#1
    int *a = NULL; 
    //Wskaźnikowi, który nie zawiera poprawnego 
    //adresu należy nadać wartość NULL.

    int b = 3;
    a = &b;
    printf("wartosc a: %d\n", *a); //3
    


    //#2
    int i, *pi, *pj; i=9;
    pi = &i;
    pj = pi;
    *pj = 123;

    printf ("i=%d, adres i=%p pi=%p", i, &i, pi); // wartosc a: 3 i=123, adres i=0x16bce3358 pi=0x16bce3358
    
    return 0;
}
