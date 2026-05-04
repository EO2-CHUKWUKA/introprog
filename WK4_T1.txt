#include <stdio.h>

int main(void) {
    double sensors[10];
    const int SIZE = 10;

    // Initialize all elements to -1.0 using a for loop
    for (int i = 0; i < SIZE; i++) {
        sensors[i] = -1.0;
    }

    // Print all elements to verify
    printf("Sensor Initialized Values:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Sensor %d: %.1f\n", i, sensors[i]);
    }

    return 0;
}