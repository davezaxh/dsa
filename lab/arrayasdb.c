// To display, insert and delete elements in an array

#include <stdio.h>

void main(){
    int len, pos, ele, i, ch;
    int arr[10];
    char choice;

    printf("Enter the number of elements of the array: ");
    scanf("%d",&len);

    for(i = 0; i < len ; i++){
        printf("Enter element %d: ", (i+1));
        scanf("%d",&arr[i]);
    }

    printf("\n1. Display Array\n2. Insert Element\n3. Delete Element\n");
    printf("Enter Choice: ");
    scanf("%d", &ch);

    switch(ch){
        case 1: printf("Elements of the array: ");
                for(i = 0; i < len; i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
        break;

        case 2: printf("Enter desired positon to enter an element: ");
                scanf("%d", &pos);

                printf("Enter element to enter: ");
                scanf("%d",&ele);

                for(i = len - 1; i > pos; i--){
                    arr[i] = arr[i-1];
                }
                arr[pos-1] = ele;
                len++;
                
                printf("Modified Array: ");
                for(i = 0; i < len; i++){
                    printf("%d ",arr[i]);
                }
        break;

        case 3: printf("Enter the position to delete the element: ");
                scanf("%d", &pos);

                for(i = pos; i < len ; i++){
                    arr[i] = arr[i+1];
                }
                len --;

                printf("Modified Array: ");
                for(i = 0; i < len; i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;
        
        default: printf("Enter a valid choice!");
        break;

    }
    // printf("Do you want to continue: ");
    // scanf("%c",&choice);
// }while(ch!='y');

}
