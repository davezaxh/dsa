#include<stdio.h>
#include<ctype.h>
int main()
{
    char A[10],syn[10],op[10];
    char lit[10];
    int i=0,j=0,p=0,q=0;
    int k,r,s,t;
    printf("Enter equation");
    gets(A);
    while(A[i]!='\0')
    {
        k = isalpha(A[i]);
        if(k!=0)
        {
            syn[j]=A[i];
            j++;
        }
        
        else
        {
            k = isdigit(A[i]);
            if(k!=0)
            {
                lit[p]=A[i];
                p++;
            }
            else
            {
                op[q]=A[i];
                q++;
            }
        }
        i++;
    }
    printf("\nsymbol : ");
    for(r=0;r<j;r++)
    {
        printf("%c\t",syn[r]);
    }
    printf("\noperators: ");
    for(s=0;s<q;s++)
    {
        printf("%c\t",op[s]);
    }
    printf("\nLiterals");
    for(t=0;t<p;t++)
    {
        printf("    %c\t",lit[t]);
    }
    printf("\n");
}