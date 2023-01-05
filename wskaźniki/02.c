#include <stdio.h>

int main() {  

    int i = 5;
    int *iptr;

    iptr = &i;
    *iptr = 2;
    printf("%d\n", i); //WARTOSC ZMIENNEJ I 

    //iptr = NULL;  
    if (iptr != NULL) {
        *iptr = 7;
        printf("%d\n", i); //NOWA WARTOSC ZMIENNEJ I
        printf("%p\n", iptr); //ADRES ZMIENNEJ I 
    }

    printf("\n");
    return 0;
} 
