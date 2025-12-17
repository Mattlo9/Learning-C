#include <stdio.h>

int main(void){

    int num1, num2, num3, num4, largest1, smallest1, largest2, smallest2;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);


    if (num1 < num2){
        largest1 = num2;
        smallest1 = num1;
    }  else {
        largest1 = num1;
        smallest1 = num2;
    }

    if (num3 < num4) {
        largest2 = num4;
        smallest2 = num3;
    } else {
        largest2 = num3;
        smallest2 = num4;
    }

    int largest = largest1 < largest2 ? largest2 : largest1;
    int smallest = smallest1 < smallest2 ? smallest1 : smallest2;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}