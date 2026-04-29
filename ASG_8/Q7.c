#include <stdio.h>

int binary(int a[],int low,int high,int key)
{
    int mid;

    if(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==key)
            return mid;
        else if(key<a[mid])
            return binary(a,low,mid-1,key);
        else
            return binary(a,mid+1,high,key);
    }

    return -1;
}

int main()
{
    int a[100], n, i, key, pos;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter key: ");
    scanf("%d",&key);

    pos=binary(a,0,n-1,key);

    if(pos==-1)
        printf("Not Found");
    else
        printf("Found at index %d",pos);

    return 0;
}