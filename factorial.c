#include<stdio.h>

int main()
{
    int n,a=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        a=a*n;
        n--;
    }
    printf("The Factorial of the number is = %d",a);
    return 0;
}