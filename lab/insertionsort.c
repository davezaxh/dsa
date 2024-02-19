// Implementing insertion sort 

#include <stdio.h>

void main(){

    int arr[10],n, i, j, k, temp;

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
    printf("\n");

    for(i = 0;i < n; i++){
        temp = arr[i];
        printf("\nPass %d: ",(i+1));
        
        for(j = i-1; arr[j]>temp && j>-1; j--){
            arr[j+1] = arr[j];
        } // Shift elements to the right
        arr[j+1] = temp;

        for(int k = 0; k < n; k++){
            printf("%d ", arr[k]);
        } // Display array elements after each pass
    }

    printf("\n\nAfter Sorting: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}