#include <stdio.h>

int main()
{
    int sap, family;

    printf("Enter SAP ID: ");
    scanf("%d", &sap);

    family = (sap % 1000) % 10;

    printf("Family Number = %d", family);

    return 0;
}