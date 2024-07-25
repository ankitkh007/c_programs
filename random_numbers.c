#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rand_num(int arr[], int length);
int main()
{
    srand(time(NULL));
    int n;
    printf("Enter the no. of unique numbers you want : ");
    scanf("%d",&n);
    printf("Unique Numbers between 1-100 are :\n");
    int arr[n];

    rand_num(arr,n);

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i+1,arr[i]);
    }
    
    return 0;
}

void rand_num(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        arr[i]=(rand()%100) + 1;
    }
}