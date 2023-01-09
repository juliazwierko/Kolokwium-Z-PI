#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    
    //a juz jest wskaznikiem na 0 element tab;
    int a[5] = {1, 2, 3, 4, 5};
    printf("\n");
    printf("%d\n", *(a+1)); //wypisze 2;


    int b[5] = {1, 2, 3, 4, 5};
    int *ptr = b;
    int b2 = *(ptr+2);
    printf("value: %d \n", b2); // 3

    //На самом деле оператор [ ] является синтаксическим
    //сахаром – он выполняет точно такую же работу.
    //То есть вызов A[3] также эквивалентен вызову *(A + 3)
    return 0;
}
