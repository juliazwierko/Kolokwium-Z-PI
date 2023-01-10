#include <stdio.h> 
#include <string.h> 

int main() 
{   
    //strcpy(s1, s2) //kopiuje s2 do s1.
    char tekst[10] = "Napis";
    char tekst1[20];
        strcpy(tekst1, tekst);
        printf("%s  %s\n", tekst, tekst1); //Napis  Napis
        strcpy(tekst1+5, tekst);
        printf("%s  %s\n", tekst, tekst1);//Napis  NapisNapis
        strcpy(tekst1+3, tekst+3);
        printf("%s  %s\n\n\n", tekst, tekst1);//Napis  Napis



    //strncpy(s1, s2, n) //kopiuje n znaków z s2 do s1.



    //strcat(s1, s2) //dołącza s2 do końca s1.
    char ekst[10] = "Napis";
    char ekst1[20];
        strcat(ekst1, ekst);
        printf("%s  %s\n", ekst, ekst1); //Napis  Napis
        strcat(ekst1+5, ekst);
        printf("%s  %s\n", ekst, ekst1);//Napis  NapisNapis
        strcat(ekst1+3, ekst+3);
        printf("%s  %s\n\n\n", ekst, ekst1);//Napis  NapisNapisis



    //strncat(s1, s2, n) //dołącza n znaków z s2 do końca s1.



    //strcmp(s1, s2) //zwraca 0, jeśli s1 oraz s2 są identyczne,
    //wartość ujemną gdy s1<s2, 
    //dodatnią gdy s1>s2.
        char str_a[] = "aaa";
        char str_b[] = "bbb";
        char str_c[] = "ccc"; 
        printf("%d\nsize a = %lu\nsize b = %lu\n\n", strcmp(str_a, str_b), sizeof(str_a), sizeof(str_b));
        //-1 bo a<b po ascii


    //strncmp(s1, s2, n) //porównuje do n znaków z s2 do s1
     


    //strlen(s1) //zwraca długość s1 - ilosc literek;
        char tab[10] = "Napis";
        printf("%s sizeof = %lu\n", tab, sizeof(tab));
        printf("%s strlen = %lu\n\n", tab, strlen(tab));



    //strchr(s1, ch) //zwraca wskaźnik do pierwszego wystąpienia ch w s1
        char ty[] = "kurw kurw mć";
        printf("%s\n\n", strchr(ty,'a'));


    
    //strstr(s1, s2) //zwraca wskaźnik do pierwszego wystąpienia s2 w s1
        char ok[] = "hej heja yooo hejaaa";
        char hej[] = "yooo";
        printf("%s\n", strstr(ok, hej));
    
    return 0;
}
