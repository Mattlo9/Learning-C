#include <stdio.h>


int main(void){

    int n;  

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 9) {
        printf("The number has 1 digits\n");
    } else if ( n <= 100 ) {
        printf("The number has 2 digits\n");
    } else {
        printf("The number has 3 digits\n");
    }



    return 0;
}