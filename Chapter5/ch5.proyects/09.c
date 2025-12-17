#include <stdio.h>


int main(void){

    int month1, month2, day1, day2, year1, year2;
    printf("Enter first date: ");
    scanf("%2d / %2d /%4d", &month1, &day1, &year1);
    printf("Enter second date: ");
    scanf("%2d / %2d /%4d", &month2, &day2, &year2);

    long date1 = (year1 * 1000) + (month1 * 100) + day1;
    long date2 = (year2 * 1000) + (month2 * 100) + day2;

    if (date1 > date2) {
        printf("La primera fecha es mayor (mas reciente).\n");
    } else if (date1 < date2 ) {
        printf("La segunda fecha es mayor (mas reciente).\n");
    } else {
        printf("Las fechas son iguales.\n");
    }


    return 0;
}