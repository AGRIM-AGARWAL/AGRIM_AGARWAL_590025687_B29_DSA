#include <stdio.h>

int a[100];

void merge(int l,int m,int r)
{
    int i=l,j=m+1,k,temp[100];

    for(k=l;i<=m && j<=r;k++)
    {
        if(a[i]<a[j])
            temp[k]=a[i++];
        else
            temp[k]=a[j++];
    }

    while(i<=m)
        temp[k++]=a[i++];

    while(j<=r)
        temp[k++]=a[j++];

    for(i=l;i<=r;i++)
        a[i]=temp[i];
}

void mergesort(int l,int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        mergesort(l,m);
        mergesort(m+1,r);
        merge(l,m,r);
    }
}

int main()
{
    int n,i;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    mergesort(0,n-1);

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}