#include <stdio.h>

int main(void) {
    float mph, kmh;
    const float CONVERSION_FACTOR = 1.60934; 

    printf("Enter speed in mph: ");
    scanf("%f", &mph);

    kmh = mph * CONVERSION_FACTOR;

    printf("Speed in km/h is: %.2f\n", kmh);

    return 0;
}
