            ///////////#1///////////

#include <stdio.h>

int main() {  
    int a, b;

    printf("Wpisz wartosc zmiennej a:\n");
    scanf("%d", &a);
    printf("Wpisz wartosc zmiennej b:\n");
    scanf("%d", &b);

    int *ptr;
    ptr = &a;
    *ptr = 1;
    printf("Nowa wartosc zmiennej a: %d\n", a);

    ptr = &b;
    *ptr = 2;
    printf("Nowa wartosc zmiennej b: %d\n", b);

    printf("\n");
    return 0;
} 

/*
output:

Wpisz wartosc zmiennej a:
12 
Wpisz wartosc zmiennej b:
24
Nowa wartosc zmiennej a: 1
Nowa wartosc zmiennej b: 2
*/
