#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// void nic nie zwraca
// print - nazwa finkcji
// () wskazanie parametrow
void print (int number) { 
    printf ("Your number is %d", number);    
}

void print2 (float number) {
    printf ("Your division is %.2f", number); 
}

float del (float a, float b) {
    float res;
    if (b != 0)
        res = a / b;
    else 
        res = 0;
    return res; //division dwoch liczb
}

int main() {      

///////////////#1///////////////
    print (17);
    printf("\n");

    //drugi sposob 
    printf("Wpisz liczbę \n");
    int num2;
    scanf("%d", &num2);
    print (num2);
    printf("\n");

///////////////#2///////////////
    int num_1, num_2;
    printf("\nWpisz liczbu 1 i 2 dla division: \n");
    scanf("%d", &num_1);
    scanf("%d", &num_2);
    float result = del (num_1, num_2);
    print2 (result);  
  
    return 0;
}
