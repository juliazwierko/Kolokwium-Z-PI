#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main (void) 
{   
    //& - konjukcja (and)
    char a = 31;
    char b = 17;
    char c = a & b;
    printf("%d\n\n", c);
    /*
    00011111
    00010001
    ↓↓↓↓↓↓↓↓
    00010001
    */
    //17 - odp

    //| - alteranywa (or)
    char d = 31;
    char e = 17;
    char f = d | e;
    printf("%d\n\n", f);
    /*
    00100001
    00001011
    ↓↓↓↓↓↓↓↓
    00101011
    */
    //43 - odp

    // ^ alternatywa wykluczająca (xor)
    char h = 12;
    char i = 85;
    char j = h ^ i;
    printf("%d\n\n",j);
    //00001100
    //01010101
    //01011001 - 89 

    // ~ - negacja 
    char k = 65;
    char l = ~k;
    printf("%d\n\n", l);
    //Выведет -66, так как 65 это 01000001, а инверсия даст 10111110
    
    // << przesuniecie bitowe w lewo (умножаем на 2)
    // >> przesunięcie bitowe w prawo (делим на 2)
    int m = 12;
    printf("%d << 1 == %d\n", m, m << 1);
    printf("%d << 2 == %d\n", m, m << 2);
    printf("%d >> 1 == %d\n", m, m >> 1);
    printf("%d >> 2 == %d\n", m, m >> 2);

    printf("\n");
    return 0;
}

/*
17

31

89

-66

12 << 1 == 24
12 << 2 == 48
12 >> 1 == 6
12 >> 2 == 3
*/
