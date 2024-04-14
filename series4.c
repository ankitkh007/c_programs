#include<stdio.h>

int main()
{
    int i,n,sum=0,p=1;

    printf("Enter the value of n :");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        p*=i;
        sum=sum+p;
    }

    printf("The sum is = %d",sum);
    return 0;
    
}