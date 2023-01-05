#include <stdio.h>

struct student {
    int id;
    char name;
    float percentage;
};

int main() {  

    struct student pawel;
    pawel.id = 1;
    pawel.name = 'p';
    pawel.percentage = 98.8;

    struct student julia;
    julia.id = 2;
    julia.name = 'j';
    julia.percentage = 99.5;

    printf("Pawel's student id is %d\n", pawel.id);
    printf("Julia's student id is %d\n", julia.id);

    printf("\n");
    return 0;
} 

/*
  Pawel's student id is 1
  Julia's student id is 2
*/
