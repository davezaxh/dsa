// To implement polynominal addition using singly linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int coeff;
    int exp;
    struct node *next;
}eq;

void display(eq *q){
    while(q!=NULL){
        printf("%dx^%d + ", q->coeff, q->exp);
        q = q->next;
    }// function to display the polynomial equation 
}

void main(){
    eq *head1, *head2, *head3, *p;
    int n1,n2,i;
    printf("Enter the number of terms in the first polynomial: ");
    scanf("%d", &n1);
    
    printf("Enter the elements in the descending order of power");
    for(i=0;i<n1;i++){

        if(i==0){
            p = (eq *)malloc(sizeof(eq));
            printf("\nEnter the coefficient: ");
            scanf("%d", &p->coeff);
            printf("Enter the exponent: ");
            scanf("%d", &p->exp);
            p->next = NULL;
            head1 = p;
        } 

        else{
            p->next = (eq *)malloc(sizeof(eq));
            p = p->next;
            printf("Enter the coefficient: ");
            scanf("%d", &p->coeff);
            printf("Enter the exponent: ");
            scanf("%d", &p->exp);
            p->next = NULL;
        }
    }// for loop ends here
    display(head1);
    printf("\n");
} //main() ends here