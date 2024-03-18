#include <stdio.h>

int main() {
    int arr1[100],arr2[100],size1,size2;
    int prarray[100],i,j;
    printf("Enter the size of array 1: ");
    scanf("%d",&size1);
    printf("Enter the size of array 2:\n ");
    scanf("%d",&size2);
    
    if(size1==size2){
     printf("Enter the elements of the first array:\n");
     for(i=0;i<size1;i++){
      scanf("%d",&arr1[i]);
      }
     printf("Enter the elements of the second array:\n");
     for(i=0;i<size2;i++){
      scanf("%d",&arr2[i]);
      }
    printf("Product array: \n");
    for(i=0;i<size1;i++){
     prarray[i]=arr1[i]*arr2[i];
     printf("%d\n",prarray[i]);
     }}
    else{
    printf("The array must be of same size.");
    }
return 0;
}