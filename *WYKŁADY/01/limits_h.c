#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main (void) 
{
    int tab[5] = {1,2,3,4,5};
    // int max = tab[0];
    // for(int i=1; i<5; i++){
    //     if(tab[i]>max){
    //         max = tab[i];
    //     }
    // }  
    int max = INT_MIN;
    for(int i=0; i<5; i++){
        if(tab[i] > max){
            max = tab[i];
        }
    }
    printf("%d\n", max);

    int min = INT_MAX;
    for(int i=0; i<5; i++){
        if(tab[i] < min){
            min = tab [i];
        }
    }
    printf("%d\n", min);

    return 0;
}
