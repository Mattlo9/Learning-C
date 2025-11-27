#include <stdio.h>

int main()
{
    /* Imprime la tabla Fahrenheit-Celcius 
        para fahr = 0, 20, ..., 300 */

    float fahr, celcius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("Fahr\tCelsius\n");
    printf("----\t-------\n");
    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr - 32.0) ;
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}