#include <stdio.h>

int main() {
    int num1, num2, num3, greatest;

    // Input three numbers
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare num1 and num2
    if (num1 > num2) {
        greatest = num1;
    } else {
        greatest = num2;
    }

    // Compare the result with num3
    if (greatest < num3) {
        greatest = num3;
    }

    printf("The greatest number is: %d\n", greatest);

    return 0;
}