#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *add;
}*top;


void push (int p);
int pop();
void print();
void main()
{
    int x, y, i, ch;
    top = NULL;
    while(1)
    {
        printf("Enter your choice:\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                if((struct node*)malloc(sizeof(struct node))==NULL)
                {
                    printf("Stack is full\n");
                }
                else
                {
                    printf("Enter the element to be pushed: ");
                    scanf("%d", &x);
                    push(x);
                }
                break;

            case 2:
                if(top == NULL)
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    y = pop();
                    printf("Popped element is: %d\n", y);
                }
                break;

            case 3:
                if(top == NULL)
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    printf("The elements in the stack are: ");
                    print();
                    printf("\n");
                }
                break;

            case 4: exit(0);

            default: printf("\nEnter a valid choice!!\n");
                break;
        }
    }
}
    
    void push (int p)
    {
        struct node *r;
        r=(struct node*)malloc(sizeof(struct node));
        r->data=p;
        r->add=top;
        top=r;
    }

    int pop()
    {
        int z;
        struct node*q;
        q=top;
        z=q->data;
        top=q->add;
        free(q);
        return z;
    }

    void print()
    {
        struct node*p;
        p=top;
        while(p!=NULL)
        {
            printf("\n%d ",p->data);
            p=p->add;
        }
    }