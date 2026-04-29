#include <stdio.h>

int hash[10];

int findIndex(int key)
{
    return (key % 1000) % 10;
}

int main()
{
    int i, ch, key, index;

    for(i=0;i<10;i++)
        hash[i] = -1;

    while(1)
    {
        printf("\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\n");
        scanf("%d",&ch);

        if(ch==1)
        {
            printf("Enter SAP ID: ");
            scanf("%d",&key);

            index = findIndex(key);

            if(hash[index]==-1)
                hash[index]=key;
            else
                printf("Collision Occurred! Slot Full\n");
        }

        else if(ch==2)
        {
            printf("Enter SAP ID to delete: ");
            scanf("%d",&key);

            index = findIndex(key);

            if(hash[index]==key)
                hash[index]=-1;
            else
                printf("Not Found\n");
        }

        else if(ch==3)
        {
            printf("Enter SAP ID to search: ");
            scanf("%d",&key);

            index = findIndex(key);

            if(hash[index]==key)
                printf("Found");
            else
                printf("Not Found");
        }

        else if(ch==4)
        {
            for(i=0;i<10;i++)
                printf("%d : %d\n",i,hash[i]);
        }

        else
            break;
    }

    return 0;
}