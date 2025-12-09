#include <stdio.h>

int main(void) 
{
    //a)
    int i = 5, j = 3;
    printf("%d %d\n", i / j, i % j);
    //output: 1 2

    //b)
    i = 2, j = 3;
    printf("%d\n", (i+10) % j);
    //output: 12

    
    //c)
    i = 7, j = 8; int k = 9;
    printf("%d\n", (i+10) % k / j);
    //output: 1

    //d)
    i = 1, j = 2, k = 3;
    printf("%d", (i+5) % (j+2) / k);

    return 0;
}