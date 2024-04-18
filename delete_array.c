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

void delete(int n)
{
    int i,p;
    
    printf("Enter the position where the element is to be deleted : ");
    scanf("%d",&p);
    
    
    for(i=p-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }

}

void display(int n)
{
    int i;
    printf("The new Array is :\n");
    
    for(i=0;i<n-1;i++)
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
    delete(n);
    display(n);    

    return 0;
}