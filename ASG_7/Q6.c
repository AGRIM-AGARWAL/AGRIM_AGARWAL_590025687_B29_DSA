#include <stdio.h>

int a[10][10], visit[10], n;

void dfs(int v)
{
    int i;

    printf("%d ",v);
    visit[v]=1;

    for(i=0;i<n;i++)
    {
        if(a[v][i]==1 && visit[i]==0)
            dfs(i);
    }
}

int main()
{
    int i,j,start;

    printf("Enter vertices: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("Enter start vertex: ");
    scanf("%d",&start);

    dfs(start);

    return 0;
}