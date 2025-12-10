#include <stdio.h>

int main(void)
{
    int num, last_digit, first_digit;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    first_digit = num / 10;
    last_digit = num % 10;

    printf("%d%d\n", last_digit, first_digit);

    return 0;
}