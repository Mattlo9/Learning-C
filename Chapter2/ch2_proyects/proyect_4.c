#include <stdio.h>

int main(void)
{   
    float amount, tax;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    tax = amount * 0.05f;
    printf("Tax: %.2f$\n", tax);
    printf("With tax added %.2f$", amount + tax);

    return 0;
}