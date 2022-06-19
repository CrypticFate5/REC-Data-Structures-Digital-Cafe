// Consider a Graph G Perform Depth First Traversal on the given graph. Vertices of the graph goes like 1, 2, 3 ...... n.

// Input :

// n - Integer - number of vertices

// nxn - adjacency matrix for the graph G

// m - Integer - starting vertex

// Output:

// List of n vertices - DFS Order.



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
// 4
// 3

#include <stdio.h>
#define max 50
int n, start;
int arr[max][max];
int visited[max];
void dfs(int start)
{
    printf("%d\n", start + 1);
    for (int i = 0; i < n; i++)
    {
        if (arr[start][i] == 1 && visited[i] != 1)
        {
            visited[i] = 1;
            dfs(i);
        }
    }
}
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &start);
    --start;
    visited[start] = 1;
    dfs(start);
    return 0;
}
