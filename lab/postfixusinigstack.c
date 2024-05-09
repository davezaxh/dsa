#include<stdio.h>
#include<ctype.h>

int a[10],top;

void push (int p)
{
    top++;
    a[top]=p;
}

int pop()
{
    int z=a[top];
    top--;
    return(z);
}

int main()
{
    char exp[20];
    int x,i,op1,op2,d;
    top=-1,i=0;

    printf("Enter postfix expression:");
    gets(exp);

    while(exp[i]!='\0')
    {
        d=isalpha(exp[i]);
        
        if(d!=0){
            printf("Enter value of %c:",exp[i]);
            scanf("%d",&x);
            push(x);
            }
        
        else{
            op2=pop();
            op1=pop();

            switch (exp[i])
            {
                case '+':push (op1+op2);
                break;

                case '-':push (op1-op2);
                break;

                case '*':push (op1*op2);
                break;

                case '/':push (op1/op2);
                break;

                case '%':push (op1%op2);
                break;
            }
        }
        i++;
    }
    printf("Result: %d",pop());
    return 0;
}