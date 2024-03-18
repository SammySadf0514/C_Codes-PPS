#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2, d;
    printf("Enter coefficients (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    d = b * b - 4 * a * c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: x1 = %f, x2 = %f", x1, x2);
    } else if (d == 0) {
        x1 = -b / (2 * a);
        printf("Roots are real and the same: x1 = x2 = %f", x1);
    }
    else{
        printf ("Roots are complex and imaginary.");
    }
    printf("\n Discriminant: %f",d);
        

    return 0; 
}