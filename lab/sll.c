// To implement SLL in C

#include <stdio.h>
#include <stdlib.h>

struct nodes{
    int data; 
    struct nodes *add;
};

void main(){
    int i, n;
    struct nodes *head, *p;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        
        if(i==0){
            p = (int *)malloc(sizeof(struct nodes));
            printf("Enter the data: ");
            scanf("%d", &(p->data));
            p->add = NULL;
            head = p;
        }

        else{
            p->add = (int *)malloc(sizeof(struct nodes));
            p = p->add;
            printf("Enter the data: ");
            scanf("%d", &(p->data));
            p->add = NULL;
        }
    }
    printf("\nData in the linked list: ");
    p = head;
    while(p!=NULL){
        printf("%d ", p->data);
        p = p->add;
    }
    printf("\n");

}