/*
Condense the dweight.c program by (1) replacing the assignments to height,
length, and width with initializers and (2) removing the weight variable, instead calculating (volume + 165) / 166 within the last printf.
*/

#include <stdio.h>

int main(void)
{
    int height, lenght, width, volume;
    height = 8;
    lenght = 12;
    width = 10;
    volume = height * width * lenght;

    printf("Dimensions: %dx%dx%d\n", lenght, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n",(volume + 165) / 166 );

    return 0;
}