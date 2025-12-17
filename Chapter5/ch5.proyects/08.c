#include <stdio.h>

int main(void){

    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);


    int total_minutes = hour * 60 + minute;


    if (total_minutes < 531) {
        printf("Closest departure time is 8:00 am, arriving at 10:16 am\n");
    } else if (total_minutes < 631) {
        printf("Closest departure time is 9:43 am, arriving at 11:52 am\n");
    } else if (total_minutes < 723) {
        printf("Closest departure time is 11:19 am, arriving at 1:31 pm\n");
    } else if (total_minutes < 803) {
        printf("Closest departure time is 12:47 pm, arriving at 3:00 pm\n");
    } else if (total_minutes < 892) {
        printf("Closest departure time is 2:00 pm, arriving at 4:08 pm\n");
    } else if (total_minutes < 1042) {
        printf("Closest departure time is 3:45 pm, arriving at 5:55 pm\n");
    } else if (total_minutes < 1222) {

        printf("Closest departure time is 7:00 pm, arriving at 9:20 pm\n");
    } else {
        printf("Closest departure time is 9:45 pm, arriving at 11:58 pm\n");
    }

    return 0;
}