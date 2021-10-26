#include<stdio.h>
#define V 5
int arr[V][V];
void intialize_zero(int arr[V][V])
{
int i, j;
for (i = 0; i < V; i++)
{
for (j = 0; j < V; j++)
{
arr[i][j] = 0;
}
}
}
void addEdge (int source, int destination)
{
arr[source][destination] = 1;
}
void deleteEdge (int source, int destination)
{
arr[source][destination] = 0;
} void
printGraph ()
{
int i, j;
printf ("\nAdjacency Matrix : \n");
for (i = 0; i < V; i++)
{
for (j = 0; j < V; j++)
{
printf ("%d ", arr[i][j]);
}
printf ("\n");
}
printf ("\n");
}
int main ()
{
addEdge (0, 0);
addEdge (0, 1);
addEdge (3, 2);
addEdge (1, 2);
addEdge (1, 4);
addEdge (2, 3);
addEdge (4, 4);
printGraph ();
deleteEdge (1, 2);
deleteEdge (0, 0);
printf ("After Deletion: \n");
printGraph ();
return 0;
}