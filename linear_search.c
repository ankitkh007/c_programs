#include<stdio.h>
void lsearch(int arr[], int n, int p)
{
    int i,f=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==p)
        {
            printf("Item Found at position %d", i+1);
            f++;
        }
    }
    if(f==0)
    {
        printf("ELEMENT NOT FOUND");
    }   
}
int main()
{
    int n,i,p;
    printf("Enter the size of the Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements : ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&p);

    lsearch(arr,n,p);
    return 0;
}