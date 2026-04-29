#include <stdio.h>

int main()
{
    int a[100], n, i, j, min, temp;
    int comp=0, swap=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        min=i;

        for(j=i+1;j<n;j++)
        {
            comp++;
            if(a[j] < a[min])
                min=j;
        }

        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        swap++;

        printf("Pass %d: ",i+1);
        for(j=0;j<n;j++)
            printf("%d ",a[j]);
        printf("\n");
    }

    printf("Comparisons = %d\n",comp);
    printf("Swaps = %d\n",swap);

    return 0;
}