#include <stdio.h>

int main() {
    int i,j,k,rev;
    printf("Enter the number: ");
    scanf("%d",&i);
    while(i>0){
    j=i%10;
    rev=(rev*10)+j;
    i=i/10;
    }
    printf("Reverse number: %d",rev);
    return 0;
}