#include <stdio.h>

int main(void){

    int hour, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);

    if (hour == 00) {
        printf("12:00 AM");
    } else if (hour > 0 && hour < 12) {
        printf("0%d:0%d AM", hour,minutes);
    } else if (hour > 12 ){
        printf("%d:%d PM", hour-12,minutes);
    }
    
    return 0;
}