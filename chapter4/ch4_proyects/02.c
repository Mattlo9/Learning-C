#include <stdio.h>

int main(void)
{
    int num, last_digit, first_digit, middle_digit;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    first_digit = num / 100;
    middle_digit = (num / 10) % 10;
    last_digit = num % 10;

    printf("%d%d%d\n", last_digit, middle_digit ,first_digit);

    return 0;
}