#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    // || - or 
    int a = 1;
    while ((a<3)|| (a<15))
    {
        a++;
        printf("%d\n", a);
    }
    printf("\n");

    // & - and 
    int k = 1;
    int l = 3;
    while ((k<4) && (l<8))
    {
        k++;
        printf("c - %d\n", k);
        l++;
        printf("b - %d\n", l);
    }
    printf("\n");

    // ! (not) - любое положительное значение превращает в ноль, 
    //а нуль в единицу
    int h = 6;
    int y = 0;
    printf("!6 = %d\n", !h);
    printf("!0 = %d\n\n", !y);
    
    int g = 0;
    while (!(g>5))
    {
        g++;
        printf("%d", g);
    }
    printf("\n");
    //123456

    
    return 0;
}

/*
2
3
4
5
6
7
8
9
10
11
12
13
14
15

c - 2
b - 4
c - 3
b - 5
c - 4
b - 6

!6 = 0
!0 = 1

123456
*/
