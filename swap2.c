#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After Swapping value of a = %d\n",a);
    printf("After Swapping value of b = %d",b);
    return 0;
}