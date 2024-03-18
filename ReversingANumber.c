#include<stdio.h>

int main()
{
    int i,rem,rev=0;
    printf("Enter the no. to reversed: \n");
    scanf("%d",&i);
    while(i!=0)
    {
        rem=i%10;
        rev=rev*10+rem;
        i=i/10;
    }
    printf("Number reversed: %d",rev);
    return 0;
}