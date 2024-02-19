#include <stdio.h>

void main(){
    int n, ele, i, arr[10];

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("\n");   

    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &ele);
    

    for(i = 0; i < n; i++){
        
        if(arr[i]==ele){
            printf("Element %d found at position: %d\n", ele, (i+1));
            break;
        }
    }

    if(i==n){
        printf("Element not found in the array!\n");
    }
};
