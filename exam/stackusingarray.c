// To implement stack in C using arrays and structures

#include <stdio.h>
#include <stdlib.h>

struct stack{
    int a[10];
    int top;
} st;

void push (int p){
    st.top ++;
    st.a[st.top] = p;
}

int pop(){
    int z = st.a[st.top];
    st.top--;
    return z;
}

void display(){
    int j;
    for(j=st.top;j>=0;j--){
        printf("\n%d ", st.a[j]);
    }
}

void main(){
    int x, y, ch;
    st.top = -1;
    while(1){
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                if(st.top == 9){
                    printf("Stack is full\n");
                } 
                else {
                    printf("Enter the element to be pushed: ");
                    scanf("%d", &x);
                    push(x);
                }
                break;
            case 2:
                if(st.top == -1){
                    printf("Stack is empty\n");
                } 
                else {
                    y = pop();
                    printf("Popped element is: %d\n", y);
                }
                break;
            case 3:
                if(st.top == -1){
                    printf("Stack is empty\n");
                } 
                else {
                    printf("The elements in the stack are: ");
                    display();
                    printf("\n");
                }
                break;
            case 4: printf("Exiting...\n");
                    exit(0);

            default: printf("\nEnter a valid choice!!\n");
                    break;
        }
    }
}
