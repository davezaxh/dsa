#include<stdio.h>
#include<stdlib.h>

typedef struct dnode
{
    int data;
    struct dnode *prev,*next;
} dn;

void main()
{
    dn *head,*p;
    int i,n;

    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        if(i==0){
            p=(dn*)malloc(sizeof(dn));
            printf("Enter the data: ");
            scanf("%d",&p->data);
            p->prev=p->next=NULL;
            head=p;
        }

        else{
            p->next=(dn*)malloc(sizeof(dn));
            p->next->prev=p;
            p=p->next;
            printf("Enter the data: ");
            scanf("%d",&p->data);
            p->next=NULL;
        }

    }

    printf("Display in Forward: ");
    p=head;

    while(p!=NULL){

        printf("%d ",p->data);
        p=p->next;
    }

    printf("\nDisplay in Reverse: ");
    p=head;

    while(p->next!=NULL){
        p=p->next;
    }

    while(p!=NULL){
        printf("%d  ",p->data);
        p=p->prev;
    }
    printf("\n");

}