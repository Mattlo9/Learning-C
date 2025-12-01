#include <stdio.h>

int main(void)
{
    float loan, rate, monthly_pay, first, second, third, monthly_rate;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_pay);

    monthly_rate = (rate/100.0f) / 12;
    loan = (loan - monthly_pay) + (loan * monthly_rate);
    first = loan;
    loan = (loan - monthly_pay) + (loan * monthly_rate);
    second = loan;
    loan = (loan - monthly_pay) + (loan * monthly_rate);
    third = loan;

    printf("Balance remaining after first payment: $%.2f\n", first);
    printf("Balance remaining after second payment: $%.2f\n", second);
    printf("Balance remaining after third payment: $%.2f\n", third);
    

    
    return 0;
}