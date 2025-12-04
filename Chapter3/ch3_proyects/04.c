#include <stdio.h>

int start, middle, end;

int main (void )
{
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &start, &middle, &end);
    printf("You entered %d.%d.%d\n", start, middle, end);

    return 0;
}
