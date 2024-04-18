#include<stdio.h>

int arr[100];

void read(int n)
{
    int i;

    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void print(int n)
{
    int i;

    printf("The Array Elements are :\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n,i;
    printf("Enter the size of the Array within 100 : ");
    scanf("%d",&n);
    int arr[n];

    read(n);
    print(n);

    return 0;
}