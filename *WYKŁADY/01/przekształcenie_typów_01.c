#include <stdio.h> 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main (void) 
{

////////////////////////#1////////////////////////

    //char c = 6;
    //int d = c;
/*
Переменной d, которая представляет тип int, присваивается 
значение типа char, поэтому компилятор выполняет приведение 
значения от типа char к типу int.
*/ 

////////////////////////#2////////////////////////
    int q = 10;
    double w = 4.;
    double r = q + w;
    printf("r = %f\n\n", r); // 14.000000

////////////////////////#3////////////////////////

   
    int a = 10;
    int b = 4;
    int c = a / b;                      // 2
    double d = a / b;                   // 2.00000
    double e = (double)a / (double)b;   // 2.50000
    printf("c = %d \n", c);
    printf("d = %f \n", d);
    printf("e = %f \n\n", e);

/* 
выражении int c = a / b; результат деления будет целочисленный - 2,
при котором дробная часть будет отброшена, так как оба операнда 
операции представляют целые числа.

В выражении double d = a / b; результат деления будет представлять 
вещественное число - 2.00000, но так как оба операнда являются целыми 
числами, то опять же результат операции будет представлять целое число 2,
и только поле выполнения деления произойдет присвоение результата переменной 
d с приведением значения 2 от типа int к типу double.

В выражении double e = (double)a / (double)b применяется явное преобразование 
данных к типу double, поэтому и результат деления будет представлять вещественное 
число - 2.50000.
*/

////////////////////////#4////////////////////////

    int number = 70;
    char symbol = number;
    printf("symbol = %c \n", symbol);             //  F
    printf("symbol int code = %d \n", symbol);    // 70

    return 0;
}

/*
char -> short -> int -> long

unsigned char -> unsigned short -> unsigned int -> unsigned long

float -> double -> long double
*/
