#include <stdio.h>

int main()
{
    int h;
    printf("enter your age: ");
    scanf("%d", &h);

    if (h > 18) {
        printf("Your age is bigger than 18. Your age is: %d\n", h);
        if (h == 21)
            printf("your age is 21");
    }
    else if (h < 18) {
        printf("Your age is less than 18. Your age is: %d\n", h);
    }
    else
    {
        printf("Your age is equal than 18. Your age is: %d\n", h);
    }
    
    //////////////////////////////////////////////////////////////

    int x = 2, y = 4;
    int c;

    /*
    if (x > y)
        c = 23;
    else 
        c = 45;
    */

    c = x > y ? 23 : 34;
    printf("%d", c); // 34 w output 
 
    return 0;
}
