#include <stdio.h>

int main()
{
    int firstNum, secondNum, num, i, nextNum;

    firstNum = 0;
    secondNum = 1;
    nextNum = firstNum + secondNum;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonnaci of %d terms: %d %d", num, firstNum, secondNum);

    for (i = 3; i <= num; i++)
    {
        printf(" %d", nextNum);
        firstNum = secondNum;
        secondNum = nextNum;
        nextNum = firstNum + secondNum;
    }

    return 0;
}