#include <stdio.h>


int main(void)
{
    int item, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter pucharse date (mm/dd/yyyy): ");
    scanf("%d /%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPucharse\n");
    printf("\tPrice\tDate\n");
    printf("%d\t$%0.2f\t%d/%d/%d", item, price, month, day, year);


    return 0;
}