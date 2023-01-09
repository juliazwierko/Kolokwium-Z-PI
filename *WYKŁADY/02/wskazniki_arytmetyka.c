#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    //Na wskaźnikach można wykonywać tylko dwie operacje arytmetyczne: dodawanie i odejmowanie.
    
    /*
    int *pt,*ptf;
    *(pt + 3) = *pt + 3; 
    ptf = pt + 5;
    *(pt + 4)= *(ptf2);
    */

    int a = 5;
    int *pa, *ppa, *pppa;
    pa = &a;
    ppa = pa;
    pppa = pa;

    *ppa = *pa + 3; //8
    printf("%d\n", *ppa);
    
    *pppa = *(pa +3); //1 
    printf("%d\n", *pppa); 

    //Bardzo Wazne:
    //Zwiększanie wartości wskazywanej przez wskaźnik pi o jeden
    /*
    *pi = 6;
    *pi = *pi + 1;
    *pi += 1;
    ++*pi;
    (*pi)++;
    */

    // void * - wskaznik ogolny 
    return 0;
}
