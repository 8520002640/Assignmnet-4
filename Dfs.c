#include<stdio.h>
 
void DFS(int);
int A[10][10],visited[10],n;    //n is no of vertices and graph is sorted in array A[10][10]
 
void main()
{
    int i,j;
    printf("Enter number of vertices:");
   
	scanf("%d",&n);
 
    //read the adjecency matrix
	printf("\nEnter adjecency matrix of the graph:");
   
	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			scanf("%d",&A[i][j]);
   for(i=0;i<n;i++)
        visited[i]=0;
 
    DFS(0);
}
 
void DFS(int i)
{
    int j;
	printf("\n%d",i);
    visited[i]=1;
	
	for(j=0;j<n;j++)
       if(!visited[j]&&A[i][j]==1)
            DFS(j);
}