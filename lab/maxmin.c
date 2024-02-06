// Implement a program that finds the maximum and minimum values in an array

#include <stdio.h>

void main(){

    int arr[10], i, n, temp, ch;
    int pos = -1;
    char choice;

    printf("Enter the number of elements: ");
    scanf("%d", &n);    
    printf("\n");

    for(i = 0; i < n; i++){
        printf("Enter the element %d: ", (i+1));
        scanf("%d", &arr[i]);
    }

do {
    printf("\n1. Display Elements\n2. Maximum\n3. Minimum\n");   
    printf("Enter Choice: ");
    scanf("%d", &ch);

    switch(ch){

        case 1: printf("Elements of the array are: ");
                for(i = 0; i < n; i++){
                printf("%d ",arr[i]);
                }
                printf("\n");
                break;
    
        case 2: temp = arr[0];
                for(i = 0; i < n; i++){
                    if(arr[i] > temp){
                        temp = arr[i];
                        pos = i;
                    }
                }
                printf("The maximum value is %d at position %d\n", temp,(pos+1));
                break;

        case 3: temp = arr[0];
                for(i = 0; i < n; i++){
                    if(arr[i] < temp){
                        temp = arr[i];
                        pos = i;
                    }
                }
                printf("The minimum value is %d at position %d\n", temp, (pos+1));
                break;

        default: printf("Invalid Choice!");
                 break;
    }
printf("Do you want to continue? (y/n): ");
scanf(" %c", &choice);  
}while(choice == 'y' || choice == 'Y');

} 