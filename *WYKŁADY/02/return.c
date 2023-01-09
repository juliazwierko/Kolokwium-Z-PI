#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int operacje (int a, int b)
{
    int suma = a + b;
    return suma; //instrukcja skoku;
}

int main() {

    int liczba1, liczba2;
    printf("Wpisz 2 liczby:\n");
    scanf("%d", &liczba1);
    scanf("%d", &liczba2);

    int dzialania = operacje(liczba1, liczba2);
    printf("%d", dzialania);

    return 0;
}

//Wpisz 2 liczby:
//1
//5
//6 
