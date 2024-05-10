#include <stdio.h>

int main()
{
    printf("Composite numbers between 1 and 100 are: \n");

    for (int i = 4; i <= 100; ++i)
    {
        int isComposite = 0;

        for (int j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                isComposite = 1;
                break;
            }
        }

        if (isComposite)
            printf("%d ", i);
    }

    return 0;
}
