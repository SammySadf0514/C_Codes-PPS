#include <stdio.h>
#include <math.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float power(float a, float b);

int main()
{
    float a, b, result;
    int input;

    printf("Enter the input: ('1 for addition', '2 for subtraction', '3 for multiplication', '4 for division', '5 for power')\n");
    scanf("%d", &input);

    printf("Enter the numbers to be performed: ");
    scanf("%f %f", &a, &b);

    switch (input)
    {
    case 1:
        result = add(a, b);
        break;

    case 2:
        result = subtract(a, b);
        break;

    case 3:
        result = multiply(a, b);
        break;

    case 4:
        result = divide(a, b);
        break;

    case 5:
        result = power(a, b);
        break;

    default:
        printf("Invalid choice!");
        return 1;
    }

    printf("The result is %.2f\n", result);

    return 0;
}

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

float power(float a, float b)
{
    return pow(a, b);
}