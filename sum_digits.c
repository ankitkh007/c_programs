#include<stdio.h>

int main()
{
    int n, first=0.0,last=0.0;
    printf("Enter any Integer : ");
    scanf("%d",&n);

    last=n%10;

    while (n>=10)
    {
        n=n/10;
    }

    first=n;

    printf("Sum of First and Last Digits is : (%d + %d) = %d",first,last,(first+last));
    
    return 0;
}