#include <stdio.h>

int main(void)
{   
    int amount, twenty, ten, five, one;
    printf("Enter an amount: ");
    scanf("%d", &amount);
    twenty = amount / 20;
    amount = amount - (20*twenty);
    ten = amount / 10;
    amount = amount - (10*ten);
    five = amount / 5;
    amount = amount - (5*five);
    one = amount / 1;
    amount = amount - (1*one);
    printf("20 bills: %d\n10 bills: %d\n5 bills: %d\n1 bills: %d\n", twenty, ten, five, one);


    return 0;
}