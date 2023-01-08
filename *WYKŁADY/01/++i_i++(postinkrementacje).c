#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    
    int j=7, z;
    z = j * (j++);
    printf("1. z= %d \n", z);

    j=7;
    z = (j++) * j;
    printf("2. z= %d \n", z);

    j=7;
    z = (j++) * (j++);
    printf("3. z= %d \n", z);
     
   
    int i=3;
    int j = ++i;
    printf("4. i= %d \n", j); //4

    return 0;
}
