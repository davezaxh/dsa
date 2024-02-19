// Implement a program to pass array to a function

#include <stdio.h>

int arrsum(int *p, int q){
    int i,sum = 0;
    
    for(i = 0; i < q; i++){
        sum += *(p+i);
    }
    return sum;
}

void main(){
    int i, n, arr[10];

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(i = 0; i < n ; i++){
        printf("Enter element %d: ", (i+1));
        scanf("%d",&arr[i]);
    }   

    printf("Sum of the elements of the array: %d\n", arrsum(arr,n));
}