#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *add;
}*f,*r;

void enque(int p);
int deque();
void dispaly();

int main()
{
    int ch,x,y;
    f=r=NULL;
    while (1){
        printf("1:Enque, 2:Deque, 3:Display, 4:Exit");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                printf("Enter the value of x: ");
                scanf("%d",&x);
                enque(x);
                break;
            
            case 2:if(f==NULL){
                printf("Queue is Empty");
            }

            else{
                y=deque();
                printf("%d",y);
            }
                break;

            case 3: if(f==NULL){
                printf("Queue is Empty");
            }
            else{
                display(f);
            }
            break;
            case 4:exit(0);
        }//switch ends here
    }//whlie ends here
}//main ends here

void enque(int p)
{
    struct node *q;
    q=(struct node*)malloc(sizeof(struct node));

    if(r==NULL){
        f=r=q;
    }
    else{
        r->add=q;
        r=r->add;
    }
    r->data=p;
    r->data=NULL;
}//enque() ends

int deque()
{
    int z;
    struct node *s;
    s=f;
    f=f->add;
    free(s);
    return(z);
}//deque() end

void dispaly()
{
    struct node *q;
    q=f;
    while(q!=NULL){
        printf("%d ",q->data);
        q=q->data;
    }//while ends
}//display() ends