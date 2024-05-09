#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *add;
};
int main()
{
    int i,n,key,count,ch;
    struct node *head,*p;
    int j = 0;
    while(j!=2)
    {
        printf("Enter your choice: \n1:Insert \n2:Display \n3:Search\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                printf("Enter number of nodes of Linked list: ");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                    if(i==0)
                    {
                        p=(struct node*)malloc(sizeof(struct node));
                        printf("Enter Data:");
                        scanf("%d",&p->data);
                        p->add=NULL;
                        head=p; 
                    }
                    else
                    {
                        p->add = (struct node*)malloc(sizeof(struct node));
                        p=p->add;
                        printf("Enter Data:");
                        scanf("%d",&p->data);
                        p->add=NULL;
                    }
                }
                break;

            case 2 :
                printf("\n Linked list:");
                p=head;
                while(p!=NULL)
                {
                    printf("\t %d",p->data);
                    p=p->add;
                }
                break;

            case 3 :
                printf("\n Enter element to be searched:");
                scanf("%d",&key);
                p=head;
                count=1;
                while(p!=NULL)
                {
                    if(key == p->data)
                    {
                        printf("\nElement is present at position : %d",count);
                        break;
                    }
                    p=p->add;
                    count++;    
                }

                if(p==NULL)
                {
                    printf("\nElement not found");
                }
                break;

            default : printf("\nInvalid choice!");
                    break;
        }
        
        printf("\nDo you want to continue \n1:YES \n2:NO\n ");
        scanf("%d",&j);
    }
    return 0;
}