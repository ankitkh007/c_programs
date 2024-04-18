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

void largest_smallest(int n)
{
    int i,l=0,s=0;
    float largest=0.0,smallest =arr[0];

    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
            l=i;
        }
        

        if(arr[i]<smallest)
        {
            smallest=arr[i];
            s=i;
        }
        
    }

    printf("The largest among all is = %f And it's position is : %d",largest,l+1);
    printf("\nThe smallest among all is = %f And it's position is : %d",smallest,s+1);
}

int main()
{
    int n,i;
    printf("Enter the size of the Array within 100 : ");
    scanf("%d",&n);
    int arr[n];

    read(n);
    largest_smallest(n);
    

    return 0;
}