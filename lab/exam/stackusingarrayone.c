// To implement stack & queue in C using arrays

#include <stdio.h>
#include <stdlib.h>
 
void main(){
    int a[10],i,x,y,top,ch;
    top = -1;    

    while(1){
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                if(top == 9){
                    printf("Stack is full\n");
                } 
                else {
                    printf("Enter the element to be pushed: ");
                    scanf("%d", &x);
                    top ++;
                    a[top] = x;
                }
                break;
            case 2:
                if(top == -1){
                    printf("Stack is empty\n");
                } 
                else {
                    y = a[top];
                    top --;
                    printf("Popped element is: %d\n", y);
                }
                break;
            case 3:
                if(top == -1){
                    printf("Stack is empty\n");
                } 
                else {
                    printf("The elements in the stack are: ");
                    for(i=top;i>=0;i--){
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            
            default: printf("\nEnter a valid choice!!\n");
                    break;
        }
    }

}