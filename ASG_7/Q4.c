#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, flag=1;

    printf("Enter vertices: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j] != a[j][i])
                flag=0;
        }
    }

    if(flag==1)
        printf("Undirected Graph");
    else
        printf("Directed Graph");

    return 0;
}