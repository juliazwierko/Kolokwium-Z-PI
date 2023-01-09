#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

#define N 15

int main() {

    //1
    int tab[] = {1,2,3,4};

    int a = sizeof(tab)/sizeof(int);
    printf("ilosc el. tablicy: %d\n", a);
    int a_2 = sizeof(tab)/sizeof(tab[0]);
    printf("ilosc el. tablicy: %d\n", a_2);

    int b = sizeof(tab);
    printf("rozmiar tablicy: %d\n", b);

    int c = sizeof(int);
    printf("wartość int: %d", c);



    //2
    printf("\n\nZadanie 2\n");
    int tab1[] = {2,6,[5]=4,8,[2]=7,10};
    printf("size of tab = %lu\n", sizeof(tab1)/sizeof(int));
    for (int i = 0; i < sizeof(tab1)/sizeof(int); i++)
    {
        printf("%d\n", tab1[i]);
    }

    return 0;
}
