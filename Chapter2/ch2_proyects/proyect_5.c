#include <stdio.h>

int main(void)
{   
    int x, pol;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    pol = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;

    printf("Result: %d", pol);

    return 0;
}