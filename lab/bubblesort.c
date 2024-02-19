// To implement bubble sorting 

#include <stdio.h>

void main(){

    int arr[10],n, i, j, temp;
    
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("Enter the element %d: ", (i+1));
        scanf("%d", &arr[i]);
    }

    printf("\nBefore Sorting: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("\nAfter Sorting: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}