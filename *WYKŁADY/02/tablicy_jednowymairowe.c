#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

#define N 15

int main() {

    //tab[5] - ma 5 elementow o indeksach 0,1,2,3,4;

    //1
    printf("tab 1:\n");
    int tab1[5] = {1,2,3}; //1 2 3 0 0 
    for (int i = 0; i < (sizeof(tab1)/sizeof(tab1[0])); i++)
    {
        printf("%d ", tab1[i]);
    }
    printf("\n");



    //2
    printf("tab 2:\n");
    int tab2[6]={[5]=5}; //0 0 0 0 0 5
    for (int i = 0; i < (sizeof(tab2)/sizeof(tab2[0])); i++)
    {
        printf("%d ", tab2[i]);
    }
    printf("\n");



    //3
    printf("tab 3:\n");
    int tab3[6]={1,4,6,3,4,8,[3]=5,9}; //1 4 6 5 9 8
    for (int i = 0; i < (sizeof(tab3)/sizeof(tab3[0])); i++)
    {
        printf("%d ", tab3[i]);
    }
    printf("\n");
    


    //4
    // tab[56]= 78, poza zakresem tablicy



    //5
    printf("tab 5:\n");
    int tab5[6]={9}; //9 0 0 0 0 0 
    for (int i = 0; i < (sizeof(tab5)/sizeof(tab5[0])); i++)
    {
        printf("%d ", tab5[i]);
    }
    printf("\n");


    //6
    printf("tab6:\n");
    int tab6[]={};
    for (int i = 0; i<10; i++)
    {
        tab6[i] = i;
        printf("%d", tab6[i]); //0123456789
    }
    return 0;
}
