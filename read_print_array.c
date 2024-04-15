#include<stdio.h>


int main()
{
    int n,i;
    printf("Enter the size of the Array within 100 : ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter array elements :\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The Array Elements are :\n");
    

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}