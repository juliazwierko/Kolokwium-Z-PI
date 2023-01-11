//Zad 24. Jakie będą wartości zmiennych n, p, q po każdej instrukcji - proszę spróbować przewidzieć,
//a potem wykonać program z dopisanymi printf’ami po każdej instrukcji
  #include <stdio.h>
int main(void)
{
int n, p, q;
n=5; p=2;
q=n++>p||p++!=3;
n=5; p=2;
q=n++<p||p++!=3; /*wypiszn,p,q */ n =5; p=2;
q=++n==3&&++p==3; /*wypiszn,p,q */ n=5; p=2;
q=++n==6&&++p==3; /*wypiszn,p,q */ }
