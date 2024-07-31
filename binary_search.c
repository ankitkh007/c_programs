#include<stdio.h>
void bsearch(int arr[], int n, int p)
{
    int a=0,b=n-1,mid,flag=0;
    while(a<=b)
    {
        mid=(a+b)/2;
        if(arr[mid]==p)
        {
            flag=1;
            break;
        }
        else if(p>arr[mid])
        a=mid+1;
        else
        b=mid-1;
    }
    if(flag==1)
    printf("Element Found at Position : %d",mid+1);
    else
    printf("ELEMENT NOT FOUND");

}
int main()
{
    int n,p,i;
    printf("Enter the size of the Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be Seached : ");
    scanf("%d",&p);

    bsearch(arr,n,p);
    return 0;
}