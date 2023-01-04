#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    //#1 pętla for:
    for (int i = 0; i < 10; i++) {
        printf("i is %d\n", i);
    }
    printf("\n");

    for (int i = 5; i > 0; i--) {
        printf("i is %d\n", i);
    }
    printf("\n");

    //#2 cykl while
    int i = 0;

    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    // #3 cykl do while (сonajmniej będzie działał 1 raz!!!)
    //moze dzialac, kiedy warunek jest niespełniony, bo ^
    int j = 100;

    do {
        printf ("%d", j);
    } while (j < 10);

    printf("\n");
    return 0;
}
