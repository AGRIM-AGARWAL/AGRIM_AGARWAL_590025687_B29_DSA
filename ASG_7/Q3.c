#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, e, u, v, vertex;
    int indegree=0, outdegree=0;

    printf("Enter number of vertices: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]=0;

    printf("Enter number of edges: ");
    scanf("%d",&e);

    for(i=0;i<e;i++)
    {
        printf("Enter edge (u v): ");
        scanf("%d%d",&u,&v);
        a[u][v]=1;
    }

    printf("\nAdjacency Matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    printf("Enter vertex: ");
    scanf("%d",&vertex);

    for(i=0;i<n;i++)
    {
        indegree += a[i][vertex];
        outdegree += a[vertex][i];
    }

    printf("In Degree = %d\n",indegree);
    printf("Out Degree = %d\n",outdegree);

    return 0;
}