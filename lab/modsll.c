#include<stdio.h> 
#include<stdlib.h>
struct node 
{ 

 char data; 
 struct node * add; 
}; 

int main() 
{ 
   int i,n; 
   struct node *head,*p; 
   printf("Number of Nodes: "); 
   scanf("%d",&n); 
   for(i=0;i<n;i++) 
   { 
	 if(i==0) 
	 { 
	  p=(struct node*)malloc(sizeof(struct node)); 
	  printf("\nEnter the MSB: ");
	  fflush(stdin);
	  scanf("%c",&p->data); 
	  p->add=NULL; 
	  head=p; 
	 } 
	 else 
	 { 
	  p->add=(struct node*)malloc(sizeof(struct node)); 
	  p=p->add; 
	  printf("\nNext bit: "); 
	  fflush(stdin);
	  scanf("%c",&p->data); 
	  p->add=NULL; 
	 
	 } 
   } 
   printf("\nOriginal binary number is: "); 
   p=head; 
	while(p!=NULL) 
	{ 
	  printf("%c ",p->data); 
	  p=p->add; 
	} 
	p=head;
	printf("\n1's complement: ");
	
	while(p!=NULL)
	{
		
	 if(p->data=='1'){
	 printf("0");
	}
	
	 else{
	 printf("1");
	 }
	 
	 p=p->add;
	}

 }
