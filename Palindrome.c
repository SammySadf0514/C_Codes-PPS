#include <stdio.h>

int main()
{
    int num;
    int temp;
    int rev = 0, rem = 0, sum = 0;

    printf("Enter the number to be calculated: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        sum = sum + rem;
        num = num / 10;
    }

    printf("The reversed number is %d\n", rev);
    printf("Sum of the digits is %d\n", sum);

    if (rev == temp)
    {
        printf("Number is palindrome. \n");
    }

    else
    {
        printf("Number is not palindrome. \n");
    }

    return 0;
}