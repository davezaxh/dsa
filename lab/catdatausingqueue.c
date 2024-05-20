#include<stdio.h>
#include<stdlib.h>

struct que
{
    int a[5];
    int f,r;
};

int main()
{
    int ch,i,x;
    struct que q1,q2;
    q1.f=q1.r=-1;
    q2.f=q2.r=-1;
    do{
        printf("\nEnter the value of x: ");
        scanf("%d",&x);
        if(x%2==0){
            q2.r++;
            q2.a[q2.r]=x;
            
            if(q2.f==-1){
                q2.f++;
            }
        }
        else{
            q1.r++;
            q1.a[q1.r]=x;

            if(q1.f==-1){
                q1.f++;
            }
        }
        printf("Do you want to continue? \n1: Yes, 2:No\nYour Choice: ");
        scanf("%d",&ch);
    }while(ch==1);

    printf("\nOdd numbers are: ");
    for(i=q1.f;i<=q1.r;i++){
    printf("%d ",q1.a[i]);
    }

    printf("\nEven numbers are: ");
    for(i=q2.f;i<=q2.r;i++){
        printf("%d ",q2.a[i]);
    }
    printf("\n");
}//main ends here