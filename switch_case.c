#include <stdio.h>

int main()
{
    int res;
    scanf ("%d", &res);

    switch (res) {
        case 1:
            printf("Variable %d", res);
            break;
        case 245: 
            printf("Variable %d", res);
            break;
        case 648: 
            printf("Variable is very big - %d", res);
            break;
        default:// to samo jak ELSE!!!  np. res = 5; 
                // break nie jest potrzebny;
            printf("Some other number");
    }
    
    printf("\n")
    return 0;
}
