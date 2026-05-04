#include <stdio.h>

int main(void) {
    float mps, mph;
    printf("Enter the speed in meters per second (m/s): ");

    // %f is the format specifier for floats
    scanf("%f", &mps);

    //  Calculate the equivalent speed in mph
    mph = mps * 2.23694;

    // the final converted speed
    printf("The speed in miles per hour is: %.2f mph\n", mph);

    return 0;
}