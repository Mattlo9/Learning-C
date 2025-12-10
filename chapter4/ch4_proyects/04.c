#include <stdio.h>

int main(void)
{
    int num, one, two, three, four, five;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    five = num % 8;
    num = num / 8;
    four = num % 8;
    num = num / 8;
    three = num % 8;
    num = num / 8;
    two = num % 8;
    num = num / 8;
    one = num % 8;
    
    printf("%5d%5d%5d%5d%5d", one ,two ,three, four , five);
    return 0;
}