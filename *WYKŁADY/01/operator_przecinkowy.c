#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    int a;
    int b = (a = 5, printf("yo\n"), (a += 2) + 2); 
    //сначала в а записали значение 5 
    //потом в б вписали второе значение увелечения на 2 
    printf("%d, %d\n", a, b);

    //yo
    //7, 9

    int q = 1;
    int w = (q++, q++); 
    // a = 2; 2 ++ = 3
    // b = 2;
    printf("%d, %d\n", q, w);

    printf("\n");
    int h = 1;
    if (h += 3, h > 2) // h = 3;
        printf("hejka!");

    return 0;
}
