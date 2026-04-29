#include <stdio.h>

int main()
{
    int a[100], n, i, key, found=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter key: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Found at position %d\n",i);
            found=1;
        }
    }

    if(found==0)
        printf("Element not found");

    return 0;
}