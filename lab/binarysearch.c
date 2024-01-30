#include <stdio.h>

void main(){

    int arr[10], i, n, ele, mid;

    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    printf("\n");

    int high = n-1, low = 0;

    for(i = 0; i < n; i++){
        printf("Enter element %d: ",(i+1));
        scanf("%d",&arr[i]);
    }


    printf("Enter element to search: ");
    scanf("%d",&ele);

    if (arr[0] < arr[n]){

        while(low <= high){

            mid = (low+high)/2;

            if(arr[mid] == ele){
                printf("%d found at position: %d", ele, (mid+1));
                break;
            }

            else if(arr[mid] > ele){
                high = mid - 1;
            }

            else {
                low = mid - 1;
            }

        }

        if(low > high){
            printf("Element not found in the array!\n");
        }

    }

    else{

        while(low <= high){

            mid = (low+high)/2;

            if(arr[mid] == ele){
                printf("%d found at position: %d\n", ele, (mid+1));
                break;
            }

            else if(arr[mid] > ele){
                high = mid - 1;
            }

            else {
                low = mid + 1;
            }

        }

        if(low > high){
            printf("Element not found in the array!\n");
        }
        
    }
}