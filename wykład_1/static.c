#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int licznik()
{
  static int a;
  a++;
  return a;
}

int main()
{
  printf("Wywoluje funkcje licznik %d", licznik());
  printf("\n...drugi raz %d", licznik());
  printf("\n...trzeci raz %d", licznik());
  
  printf("\n");
  return 0;
}

/*
Wywoluje funkcje licznik 1
...drugi raz 2
...trzeci raz 3  
*/
