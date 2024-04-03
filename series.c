#include<stdio.h>

int main()
{
    int n; float sum1=0.0,sum2=0.0;
    printf("Enter any number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        sum1=sum1+n;
        sum2=sum2 + (1.0/n);
        
        n--;
    }
    printf("Sum of the First Series is = %f\n",sum1);
    printf("Sum of the Second Series is = %f",sum2);

    return 0;
}