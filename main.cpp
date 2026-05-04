#include <stdio.h>
#include <math.h> // Required for sqrt() [cite: 414]

int main(void) {
    float height, length, hypotenuse, perimeter, area;

    printf("Enter height and length of the triangle: ");
    scanf("%f %f", &height, &length);

    // Calculate hypotenuse
    hypotenuse = sqrt((height * height) + (length * length));

    perimeter = height + length + hypotenuse;
    area = 0.5 * height * length;

    printf("Hypotenuse: %.2f\n", hypotenuse);
    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);

    return 0;
}
