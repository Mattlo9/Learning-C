#include <stdio.h>

int main(void)
{   
    int radius;
    float volume, pi;
    radius = 10;
    pi = 3.14f;
    volume = (4. /3.0f) * pi * (radius * radius * radius);
    printf("Sphere volume: %.2f\n", volume);
    

    return 0;
}