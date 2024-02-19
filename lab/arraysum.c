// To find the sum of elements of an array
#include <stdio.h>

void main(){
    int arr[10], i, n;
    float sum = 0;
    float avg;

    //accepting number of array elements
    printf("Enter number of elements: ");
    scanf("%d",&n);

    //accepting the array elements
    printf("Enter elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //finding the sum of array elements
    for(i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    printf("\nSum of elements of the array: %.2f", sum);

    // finding the average of array elements
    avg = sum/n;
    printf("\nAverage of the elements of the array: %.2f\n", avg);

}   

