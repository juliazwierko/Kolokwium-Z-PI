#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <string.h> //!!! Bibilioteka dla operacji z lancuchami

int main() 
{   
    //char znaki[8]={'M', 'A', 'L', 'Y', ' ', 'K', 'O', 'T'};
    //char str[9] = "MALY KOT";  8 znaków plus znak końca łańcucha 

    //W języku C łańcuch to jednowymiarowa tablica znaków zakończona
    //znakiem końca łańcucha ('\0').
    
    //char str[] = "tekst"; 
    // 't' 'e' 'k' 's' 't' '\0'
    
    //W przypadku stałych tekstowych znak końca łańcucha dopisywany jest automatycznie przez kompilator.
    //Funkcje operujące na łańcuchach znaków – biblioteka string.h

    //#1
    char hello[] = "Hello World";
    char *hi = "Hejka ja Julka ^_^";

    printf("%s\n", hello); //Hello World
    printf("%c\n", *(hello+1));
    printf("%s\n\n", hi); //Hejka ja Julka ^_^
    //Dwa zapisy sa rownowazne


    //#2
    char *fruit[] = {"apricot", "apple", "banana", "lemon", "pear", "plum"};
	int n = sizeof(fruit)/sizeof(fruit[0]);
	for(int i=0; i<n; i++)
	{
		printf("%s \n", fruit[i]);
	}
    printf("\n");
    /*
    apricot
    apple
    banana
    lemon
    pear
    plum
    */

    return 0;
}
