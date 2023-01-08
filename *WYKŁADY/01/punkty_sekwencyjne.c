#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    int i = 1;
    i = (1,2,3);
    printf("%d\n", i); //i = 3
    

    int b = (3 < ++i) ? ++i : 0;
    printf("nowa wartosc liczby b = %d\n", b);  //b = 5

    return 0;
}

