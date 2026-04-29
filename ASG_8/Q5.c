#include <stdio.h>

int a[100];

void quicksort(int low,int high)
{
    int i,j,pivot,temp;

    if(low<high)
    {
        pivot=a[low];
        i=low+1;
        j=high;

        while(i<=j)
        {
            while(a[i]<=pivot && i<=high)
                i++;

            while(a[j]>pivot)
                j--;

            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

        a[low]=a[j];
        a[j]=pivot;

        quicksort(low,j-1);
        quicksort(j+1,high);
    }
}

int main()
{
    int n,i;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    quicksort(0,n-1);

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}