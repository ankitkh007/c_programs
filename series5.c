#include<stdio.h>

int main()
{
    int i,j,n,sum=0,sum2=0;

    printf("Enter the value of n :");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        sum2=0;
        for(j=1;j<=i;j++)
        {
            sum2=sum2+j;
        }
        sum=sum+sum2;
    }

    printf("The sum is = %d",sum);
    return 0;
    
}