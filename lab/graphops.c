/*BSF and DSF on a graph represented using adjacency matrix*/
#include<conio.h>
#include<stdio.h>

int adj[10][10];
int visited[10];
int f,r;
int a[10];//to be used as queue

void DFS(int v,int n);
void BFS(int v,int n);

void enqueue(int x);
int dequeue();

int main()
{
	int i,j,v,op,n;
	printf("\nEnter no of vertices : ");
	scanf("%d",&n);
	printf("\nEnter the adjecendy matrix of  graph : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&adj[i][j]);
		}
	}

	do
	{
	   for(i=0;i<n;i++){
		visited[i]=0;
	   }

	   printf("\nEnter the starting vertex: ");
	   scanf("%d",&v);
	   printf("\n\n1)DFS\n2)BFS\n3)QUIT\nEnter your choice: ");
	   scanf("%d",&op);
	   
	   switch(op)
	   {

		case 1:
			DFS(v,n);
			break;

		case 2:
			BFS(v,n);
			break;

		default: printf("Enter a valid choice!");
				break;
	    }
	  }while(op!=3);

}

void enqueue(int x)
{
	if(f==-1)
	{
		f++;
	}
	r++;
	a[r]=x;
}

int dequeue()
{
	int y;
	y=a[f];
	f++;
	return(y);   
}

void BFS(int v,int n)
{
	int i;
	f=r=-1;
	enqueue(v);
	visited[v]=1;
	while(f<=r)
	{
		v=dequeue();
		printf("%d ",v);
		for(i=0;i<n;i++)
			if(visited[i]==0 && adj[v][i]==1)
			{
				enqueue(i);
				visited[i]=1;
			}
	}
}

void DFS(int x,int n)
{
	int i;
	printf("\n%d",x);
	visited[x]=1;
	for(i=0;i<n;i++)
	{
		if(visited[i]==0 && adj[x][i]==1)
		{
			DFS(i,n);
		}
	}
}





/*Output

Enter no of vertices : 4

Enter the adjecendy matrix of  graph :
0 1 0 1
1 0 1 0
0 1 0 1
1 0 1 0

Enter the starting vertex: 0


1)DFS
2)BFS
3)QUIT
Enter Your choice : 1

0
1
2
3
Enter the starting vertex: 0


1)DFS
2)BFS
3)QUIT
Enter Your choice : 2
0 1 3 2
*/