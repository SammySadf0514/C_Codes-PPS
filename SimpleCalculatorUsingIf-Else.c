#include <stdio.h>

int main()
{
    float a,b,result;
    int c;
    printf("Enter the no.: ");
    scanf("%f %f",&a,&b);
    printf("1 for addition.\n2 for subtraction.\n3 for Multiplication.\n4 for division.\n");
    printf("Enter the operation: ");
    scanf("%d",&c);
    if(c==1)
    {
     result=a+b;
     printf("Result: %f",result);
    }
    else if(c==2)
    {
        result=a-b;
     printf("Result: %f",result);
    }
    else if(c==3)
    {
        result=a*b;
        printf("Result: %f",result);
    }
    else if (c == 4)
    {
        if (b != 0)
        {
            result = a / b;
            printf("Result: %f", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed");
        }
    }
    else
    {
        printf("Error: Invalid operation");
    }
    return 0;
}