#include <stdio.h>

int main() {
    int i,j,k,sum;
    printf("Enter the number: ");
    scanf("%d",&i);
    while(i>0){
    j=i%10;
    sum=(sum)+j;
    i=i/10;
    }
    printf("Reverse number: %d",sum);
    return 0;
}