#include <stdio.h>

void fibonacci(int num)
{
    int firstNum = 0;
    int secondNum = 1;
    int nextNum;

    printf("Fibonacci of %d terms: %d %d", num, firstNum, secondNum);

    for (int i = 3; i <= num; i++)
    {
        nextNum = firstNum + secondNum;
        printf(" %d", nextNum);
        firstNum = secondNum;
        secondNum = nextNum;
    }
}

int main()
{
    int num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}