#include <stdio.h>
#include <math.h>

float heronsFormula(float a, float b, float c);

int main()
{
    float a, b, c, area;
    printf("Enter the sides of the triangle: \n");
    scanf("%f %f %f", &a, &b, &c);

    area = heronsFormula(a, b, c);
    printf("Area of the triangle is: %.2f \n", area);

    return 0;
}

float heronsFormula(float a, float b, float c)
{
    float s;
    float area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}