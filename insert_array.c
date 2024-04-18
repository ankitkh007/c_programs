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

void insert(int n)
{
    int i,x,p;
    
    printf("Enter the elements to be inserted : ");
    scanf("%d",&x);
    printf("Enter the position where the element is to be inserted : ");
    scanf("%d",&p);
    n=n+1;
    
    for(i=n-1;i>=p;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[p-1]=x;
}

void display(int n)
{
    int i;
    printf("The new Array is :\n");
    
    for(i=0;i<n+1;i++)
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
    insert(n);
    display(n);    

    return 0;
}