#include <stdio.h>

int main(void) {
    int grade, category;

    printf("Enter signal strength (0-100): ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Error: Input outside 0-100\n");
    } else {
        category = grade / 10; // Integer division: 76/10 = 7 

        printf("Category: ");
        switch (category) {
            case 10: // Handle 100
            case 9:
            case 8:  printf("A\n"); break;
            case 7:
            case 6:  printf("B\n"); break;
            case 5:
            case 4:  printf("C\n"); break;
            case 3:  printf("D\n"); break;
            default: printf("F\n"); break;
        }
    }
    return 0;
}