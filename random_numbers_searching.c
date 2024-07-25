#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rand_num(int arr[], int length);
int rand_search(int arr[], int length, int p);

int main()
{
    srand(time(NULL));

    int n,p;
    printf("Enter the no. of unique numbers you want : ");
    scanf("%d",&n);
    printf("Unique Numbers between 1-100 are :\n");
    int arr[n];

    rand_num(arr,n);

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i+1,arr[i]);
    }

    printf("Enter the number you want to search for : ");
    scanf("%d",&p);

    printf("The frequency of %d is = %d",p,rand_search(arr,n,p));
    
    return 0;
}

// RANDOM NUMBERS GENERATOR
void rand_num(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        arr[i]=(rand()%100) + 1;
    }
}

// RANDOM NUMBERS LINEAR SEARCH
int rand_search(int arr[], int length, int p)
{
    int c=0;
    for(int i=0;i<length; i++)
    {
        if(arr[i]==p)
        c++;
    }

    return c;
}