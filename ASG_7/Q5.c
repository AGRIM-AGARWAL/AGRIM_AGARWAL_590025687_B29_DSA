#include <stdio.h>

int main()
{
    int a[10][10], q[10], visit[10]={0};
    int n, i, j, front=0, rear=0, start;

    printf("Enter vertices: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("Enter start vertex: ");
    scanf("%d",&start);

    q[rear++] = start;
    visit[start]=1;

    while(front<rear)
    {
        int v=q[front++];
        printf("%d ",v);

        for(i=0;i<n;i++)
        {
            if(a[v][i]==1 && visit[i]==0)
            {
                q[rear++]=i;
                visit[i]=1;
            }
        }
    }

    return 0;
}