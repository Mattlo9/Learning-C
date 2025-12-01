/*
Write a program that declares several int and float variables-without initializing
them-and then prints their values. Is there any pattern to the values? (Usually there isn't.)
*/

#include <stdio.h>

int main(void)
{
    int num, width, height;
    float calc1, calc2;
    printf("num: %d\nwidth: %d\nHeight: %d\n", num, width, height);
    printf("calc1: %f\ncalc2: %f\n", calc1, calc2);

    return 0;
}

//No relation, garbage values due to no initialization