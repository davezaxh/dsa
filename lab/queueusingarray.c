#include<stdio.h>
#include<stdlib.h>

struct que
{
    int a[5];
    int f,r;
} q;
void enque(int p);
int deque();
void display();

int main()
{
    int ch,x,y;
    q.f=q.r=-1;
    while (1)
    {
        printf("\n1:Enque\n2:Deque\n3:Display\n4:Exit\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:if(q.r==4){
                printf("Queue is Full");
            }

            else{
                printf("Enter the value of x: ");
                scanf("%d",&x);
                enque(x);
            }

            break;

            case 2:if(q.f==-1||q.f>q.r){
                printf("Queue is Empty");
                }

            else{
                y=deque();
                printf("%d",y);
            }
            break;

            case 3: if(q.f==-1||q.f>q.r){
                printf("Queue is Empty");
            }

            else{
                display();
            }
            break;

            case 4:exit(0);

        }//switch ends here
    }//whlie ends here
}//main ends here

void enque(int p)
{
    q.r++;
    q.a[q.r]=p;
    
    if(q.f==-1){
        q.f=0;
    }
}

int deque()
{
    int z;
    z=q.a[q.f];
    q.f++;
    return z;
}

void display()
{
    int j;
    for(j=q.f;j<=q.r;j++){
        printf("%d ",q.a[j]);
    }
}