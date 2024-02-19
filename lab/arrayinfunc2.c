// Implement a program to pass array to a function

#include <stdio.h>

int arraysum(int a[], int len){
    int i, sum = 0;

    for(i=0;i<len;i++){
        sum += a[i];
    }
    return sum;
}

void main(){
    int i, len, arr[10];

    printf("Enter the number of elements: ");
    scanf("%d",&len);

    for(i = 0; i < len ; i++){
        printf("Enter element %d: ", (i+1));
        scanf("%d",&arr[i]);
    }

    printf("Sum of the elements of the array: %d\n", arraysum(arr,len));
}