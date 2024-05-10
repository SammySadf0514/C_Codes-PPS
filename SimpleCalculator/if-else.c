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
    char operator;
    printf("Enter the operator: \n(' +, -, *, /, ^')\n");
    scanf("%c", &operator);
    printf("Enter the operands: \n");
    scanf("%f %f", &a, &b);

    if (operator== '+')
    {
        result = add(a, b);
    }
    else if (operator== '-')
    {
        result = subtract(a, b);
    }
    else if (operator== '*')
    {
        result = multiply(a, b);
    }
    else if (operator== '/')
    {
        result = divide(a, b);
    }
    else if (operator== '^')
    {
        result = power(a, b);
    }
    else
    {
        printf("Invalid operator \n");
        return 1;
    }

    printf("Result is: %.2f \n", result);

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