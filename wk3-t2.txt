#include <stdio.h>

int main(void) {
    int a, b, c, d, temp;

    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Simple sorting logic using the Bubble sort style without loops
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (a > d) { temp = a; a = d; d = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    if (b > d) { temp = b; b = d; d = temp; }
    if (c > d) { temp = c; c = d; d = temp; }

    printf("Ascending: %d, %d, %d, %d\n", a, b, c, d);
    printf("Descending: %d, %d, %d, %d\n", d, c, b, a);

    return 0;
}