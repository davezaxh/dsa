#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int coef,pow;
    struct node *add;
}sn;

void display(sn *b);

int main()
{
    sn *h1,*h2,*h3,*p,*q,*r;
    int i,m,n;
    // 1st polynomial
    printf("enter the number of terms in polynomial 1 : ");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        if(i==0)
        {
            p=(sn*)malloc(sizeof(sn));
            printf("Enter the coefficent : ");
            scanf("%d",&p->coef);
            printf("Enter the power : ");
            scanf("%d",&p->pow);
            p->add=NULL;
            h1=p;
        }
        else
        {
            p->add =(sn*)malloc(sizeof(sn));
            p=p->add;
            printf("Enter the coefficent : ");
            scanf("%d",&p->coef);
            printf("Enter the power : ");
            scanf("%d",&p->pow);
            p->add=NULL;
        }
    }
    // 2nd polynomial
    printf("enter the number of terms in polynomial 2 : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            q=(sn*)malloc(sizeof(sn));
            printf("Enter the coefficent : ");
            scanf("%d",&q->coef);
            printf("Enter the power : ");
            scanf("%d",&q->pow);
            q->add=NULL;
            h2=q;
        }
        else
        {
            q->add =(sn*)malloc(sizeof(sn));
            q=q->add;
            printf("Enter the coefficent : ");
            scanf("%d",&q->coef);
            printf("Enter the power : ");
            scanf("%d",&q->pow);
            q->add=NULL;
        }
    }
    printf("1st polynomial is: ");
    display(h1);
    printf("\n");
    printf("2nd polynomial is: ");
    display(h2);
    p=h1;
    q=h2;
    r=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(r==NULL)
        {
            r=(sn*)malloc(sizeof(sn));
            h3=r;
        }
        else
        {
            r->add=(sn*)malloc(sizeof(sn));
            r=r->add;
        }
        r->add=NULL;
        if(p->pow==q->pow)
        {
            r->pow=q->pow;
            r->coef=p->coef + q->coef;
            p=p->add;
            q=q->add;
        }
        else
        {
            if(p->pow > q->pow)
            {
                r->pow = p->pow;
                r->coef=p->coef;
                p=p->add;
            }
            else
            {
                r->pow = q->pow;
                r->coef = q->coef;
                q=q->add;
            }
        }//outer if else end
    }//while ends
    
    if(p!=NULL)
    {
        r->add=p;
    }

    if(q!=NULL)
    {
        r->add=q;
    }

    printf("\n Result of polynomial is: ");
    display(h3);
    }//main() ends
    void display(sn *b)
    {
        while(b!=NULL)
        {
            if(b->coef > 0)
            {
                printf("+");
            }
            printf("%dx^%d",b->coef,b->pow);
            b=b->add;
        }
}
