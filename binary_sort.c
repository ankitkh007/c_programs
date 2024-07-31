#include<stdio.h>

void bsort(int arr[], int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}

void display(int arr[], int n)
{
    int i;
    printf("The Sorted Elements Are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int i,n;
    printf("Enter the size of the Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    bsort(arr,n);
    display(arr,n);
}