#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//RANDOM NUMBERS GENERATOR
void random_number(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=(rand()%100)+1;
    }
    // printf("The RANDOM NUMBERS Are : ");
    // for(int i=0;i<n;i++)
    // {
    //     printf("\narr[%d] = %d",i+1,arr[i]);   
    // }
}

//SORTING OF RANDOM ELEMENTS
void sort(int arr[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
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

//DISPLAYING SORTED ELEMENTS
void display(int arr[], int n)
{
    printf("The Sorted Elements are : ");
    for(int i=0;i<n;i++)
    {
        printf("\narr[%d] = %d",i+1,arr[i]);
    }
}

int main()
{
    srand(time(NULL));
    int n;
    printf("Enter the number of random numbers you want : ");
    scanf("%d",&n);
    int arr[n];

    random_number(arr,n);
    sort(arr,n);
    display(arr,n);

    return 0;
}