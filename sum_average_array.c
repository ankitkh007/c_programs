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

void sum_avg(int n)
{
    int i;
    float sum=0.0,avg=0.0;

    for(i=0;i<n;i++)
    {
        sum=sum+(arr[i]);
    }

    avg=sum/n;

    printf("The Sum of the elements present in the Array is = %f",sum);
    printf("\nThe Average of the elements present in the Array is = %f",avg);

}

int main()
{
    int n,i;
    printf("Enter the size of the Array within 100 : ");
    scanf("%d",&n);
    int arr[n];

    read(n);
    sum_avg(n);
    

    return 0;
}