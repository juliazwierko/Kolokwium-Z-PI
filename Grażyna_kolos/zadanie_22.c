//Zad 22. Jaki będzie efekt działania następującego programu :
 #include <stdio.h>
 int main(void)
 { 
   int a[] = {0,1,2,3,4};
   *p[] = {a,a+1,a+2,a+3,a+4};
   int **pp=p;
   printf("a = %d \t *a = %d \t \n ",a,*a);
   printf("p= %d \t *p= %d \t **p%d \t \n",p,*p, **p);
   printf("pp= %d \t *pp= %d \t **pp%d \t \n",pp,*pp, **pp);
   printf("\n");
   
   
pp++;
   printf("pp-p= %d \t *pp-a= %d \t **pp= %d \t \n",pp-p,*pp-a, **pp);
   
   
*pp++;
   printf("pp-p= %d \t *pp-a= %d \t **pp= %d \t \n",pp-p,*pp-a, **pp);
   
   
*++pp;
   printf("pp-p= %d \t *pp-a= %d \t **pp= %d \t \n",pp-p,*pp-a, **pp);
   
   
++*pp;
  printf("pp-p= %d \t *pp-a= %d \t **pp= %d \t \n",pp-p,*pp-a, **pp);
  printf("\n");
   
   
pp=p;
  **pp++;
  printf("pp-p= %d \t *pp-a= %d \t **pp= %d \t \n",pp-p,*pp-a, **pp);
   
   
*++*pp;
  printf("pp-p= %d \t *pp-a= %d \t **pp= %d \t \n",pp-p,*pp-a, **pp);
   
   
++**pp;
  printf("pp-p= %d \t *pp-a= %d \t **pp= %d \t \n",pp-p,*pp-a, **pp);
   
  printf("\n");
return 0;}
