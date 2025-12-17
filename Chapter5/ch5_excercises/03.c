
#include <stdio.h>

int main(void) {

    int i, j, k;
    
    // a)
    i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);
    //output: i = 3, j = 4, k = 5 --> 1
    
    
    // b)
    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);
    //output: i = 7, j = 8, k = 9 --> 0


    // c)
    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);
    //output: i = 8, j = 8, k = 9 --> 0

    // d)
    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);
    //output: i = 2, j = 1, k = 1 --> 1
 
}