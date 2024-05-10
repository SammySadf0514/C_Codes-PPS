#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time, CI, finalAmount;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period: ");
    scanf("%f", &time);

    CI = principal * (pow((1 + rate / 100), time)) - principal;
    finalAmount = principal + CI;

    printf("Compound Interest = %.3f\n", CI);
    printf("Final Amount = %.3f\n", finalAmount);

    return 0;
}