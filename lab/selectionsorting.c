// Implementing linear sorting

#include <stdio.h>

void main(){
    int a[10], i, j, k, n, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter the element %d: ", (i+1));
        scanf("%d", &a[i]);
    }

    printf("\nBefore Sorting: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    for(i = 0; i < n; i++){

        printf("\nPass %d: ", (i+1));
        for(j = i+1; j < n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }  

        for(int k = 0; k < n; k++){
            printf("%d ", a[k]);
        }
    }

    printf("\n\nAfter Sorting: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}