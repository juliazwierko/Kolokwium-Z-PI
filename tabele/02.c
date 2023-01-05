/*
  WYPISYWANIE MACIERZY:
  43 98 10 
  89 23 90  
  43 95 98 
*/

#include <stdio.h>

int main() {  

    int nums [3][3] = {{43, 98, 10}, {89, 23, 90}, {43, 95, 98}};
    
    //nums[0][0] = 23;
    printf("%d", nums[0][0]);
    printf("Element [0][0] - \n\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
        printf ("%d ", nums[i][j]);
        }
        printf("\n");
    }
    
    printf ("\n");
    return 0;
} 
