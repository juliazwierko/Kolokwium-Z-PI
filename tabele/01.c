#include <stdio.h>

int main() {  
    char array [5] = {'H', 'e', 'l', 'l', 'o'};
    char arr[] = "Hello"; //to samo, kompilator sam zrozumie ile wynosi elementow

    ///////////////////////////////////////////////////////////////
    int sizeofarr = (sizeof(arr)/sizeof(char));
    int sizeofarray = (sizeof(array)/sizeof(char));
    printf("Rozmiary tabel:\n");
    printf("%d\n", sizeofarr); //6 bo łańcuch(%s) i 6 element to ./
    printf("%d\n", sizeofarray); //5 
    ///////////////////////////////////////////////////////////////

    int nums [3] = {23, 56, 12};
    printf("\nElement 1 is - %d\n", nums[0]); //!!! INDEKS LICZYMY OD 0!!!

    nums[2] = 456;
    printf("\nElement 3 is - %d\n", nums[2]);

    //wypisywanie wszystkich elementow przez cykl
    for (int i = 0; i < (sizeof(nums)/sizeof(int)); i++) {
        printf ("%d ", nums[i]);
    }

    return 0;
}
