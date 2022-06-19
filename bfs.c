// Consider a Graph G Perform Breadth First Traversal on the given graph. Vertices of the graph goes like 1, 2, 3 ...... n.

// Input :

// n - Integer - number of vertices

// nxn - adjacency matrix for the graph G

// m - Integer - starting vertex

// Output:

// List of n vertices - BFS Order.



// For example:

// Input	Result
// 4
// 0 1 0 1
// 1 0 1 0
// 0 1 0 0
// 1 0 0 0
// 2
// 2
// 1
// 3
// 4


#include <stdio.h>
#define max 100
int queue[max];
int f = -1, r = -1;
int isEmpty()
{
    if (f == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(int x)
{
    r++;
    queue[r] = x;
    if (f == -1)
    {
        f++;
    }
}
int dequeue()
{
    int temp = queue[f];
    if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
    return temp;
}

int main()
{
    int n, start;
    scanf("%d", &n);
    int adjmat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &adjmat[i][j]);
        }
    }
    scanf("%d", &start);
    int visited[n];
    --start;
    visited[start] = 1;
    enqueue(start);
    while (!isEmpty())
    {
        int x = dequeue();
        printf("%d\n", x + 1);
        for (int i = 0; i < n; i++)
        {
            if (adjmat[x][i] == 1 && visited[i] != 1)
            {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    return 0;
}
