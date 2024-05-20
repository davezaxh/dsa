#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct btreenode
{
	struct btreenode *leftchild ;
	int data ;
	struct btreenode *rightchild ;
} ;

void insert ( struct btreenode **sr, int num ) ;
void inorder ( struct btreenode *s ) ;
void preorder(struct btreenode *s);
void postorder(struct btreenode *s);
int search(struct btreenode *t,int key);

int main( )
{
	struct btreenode *bt ;
	int n, i ,ch, num,y,d;
	bt = NULL ;  /* empty tree */
	
	while (1)
	{
		printf("\n1:Insert\n2: Inorder Traversal\n3: Preorder Traversal\n4: Postorder Traversal\n5: Search \n6: Exit\nEnter your choice: ");
		scanf("%d",&ch);
        
		switch(ch)
		{
			case 1:
				printf("\nEnter element ");
				scanf("%d",&num);
				insert ( &bt, num ) ;
			break;

			case 2:
				printf ( "Binary tree using Inorder traversal:\n" ) ;
				inorder ( bt ) ;
			break;

			case 3:
				printf ( "\nBinary tree using Preorder traversal:\n" ) ;
				preorder ( bt ) ;
			break;

			case 4:
				printf ( "\nBinary tree using Postorder traversal:\n" ) ;
				postorder ( bt ) ;
			break;

			case 5:
				printf("\nEnter the number to search ");
				scanf("%d",&y);
				d=search(bt,y);
				if(d==1)
				{
					printf("\n%d element is present ",y);
				}
				else
				{
					printf("\nElement not present in BST");
				}
			break;

			case 6:
				exit(0);
			break;
		}
	}
	return(0);
}

/* inserts a new node in a binary search tree */
void insert ( struct btreenode **sr, int num )
{

	if ( *sr == NULL )
	{
		*sr =(struct btreenode*) malloc ( sizeof ( struct btreenode ) ) ;

		( *sr ) -> leftchild = NULL ;
		( *sr ) -> data = num ;
		( *sr ) -> rightchild = NULL ;
	}
	else  /* search the node to which new node will be attached */
	{
		if ( num< (*sr)->data )
			insert ( &( ( *sr ) -> leftchild ), num ) ;
		else
			/* else traverse to right */
			insert ( &( ( *sr ) -> rightchild ), num ) ;
	}
}

void inorder ( struct btreenode *sr )
{
	if ( sr != NULL )
	{
		inorder ( sr -> leftchild ) ;

		/* print the data of the node whose leftchild is NULL or the path  has
			already been traversed */
		printf ( "%d\t", sr -> data ) ;

		inorder ( sr -> rightchild ) ;
	}
}

void preorder(struct btreenode *s)
{
	if(s!=NULL)
	{
		printf("%d\t",s->data);
		preorder(s->leftchild);
		preorder(s->rightchild);
	}
}

void postorder(struct btreenode *s)
{
	if(s!=NULL)
	{
		postorder(s->leftchild);
		postorder(s->rightchild);
		printf("%d\t",s->data);
	}
}

int search(struct btreenode *t,int key)
{
	while(t!=NULL)
	{
		if(t->data==key)
		{
			return(1);
		}
		else
		{
			if(t->data>key)
			{
				t=t->leftchild;
			}
			else
			{
				t=t->rightchild;
			}
		}
	}
	return(-1);
}


/*Output
Enter element 15

1:Insert
2: Inorder Traversal
3: Preorder Traversal
4: Postorder Traversal
5: Search
6: Exit 1

Enter element 25

1:Insert
2: Inorder Traversal
3: Preorder Traversal
4: Postorder Traversal
5: Search
6: Exit 2
Binary tree using Inorder traversal:
5       8       10      15      20      25
1:Insert
2: Inorder Traversal
3: Preorder Traversal
4: Postorder Traversal
5: Search
6: Exit 3

Binary tree using Preorder traversal:
10      5       8       20      15      25
1:Insert
2: Inorder Traversal
3: Preorder Traversal
4: Postorder Traversal
5: Search
6: Exit 4

Binary tree using Postorder traversal:
8       5       15      25      20      10
1:Insert
2: Inorder Traversal
3: Preorder Traversal
4: Postorder Traversal
5: Search
6: Exit 5

Enter the number to search 5

5 element is present*/