#include<stdio.h>

int main()
{
    int i,n,p=1;
    float sum=0.0;

    printf("Enter the value of n :");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        sum=sum+(float)(p*p)/(p*p*p);
        p+=2;
    }

    printf("The sum is = %f",sum);
    return 0;
    
}