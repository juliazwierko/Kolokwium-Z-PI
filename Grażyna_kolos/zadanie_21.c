//Jaki będzie efekt działania następującego programu :

#include <stdio.h>
        int main(void)
        { int a[] = {[2]=5,3};
          int i, *p;
        for (i=0; i<=4; i++)
          printf("%d \t ",a[i]);
         printf("\n");
         
         for (p=&a[0]; p<=&a[4]; p++)
          printf("%d \t ",*p);
         printf("\n");
         
         for (p=&a[0], i=1; i<=5; i++)
          printf("%d \t ",p[i]);
         printf("\n");
         
         for (p=a, i=0; p+i<=a+4; p++,i++)
          printf("%d \t ",*(p+i));
         printf("\n");
         
         for (p=a+4; p>=a; p--)
          printf("%d \t ",*p);
         printf("\n");
         
         for (p=a+4, i=0;i<=4; i++)
          printf("%d \t ",p[-i]);
         printf("\n");
         
         for (p=a+4;p<=a;p--)
          printf("%d \t ",a[p-a]);
         printf("\n");

return 0;}
