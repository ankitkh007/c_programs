#include<stdio.h>

int main()
{
    float a,b,c;

    printf("Enter 1st number : ");
    scanf("%f",&a);
    printf("Enter 2nd number : ");
    scanf("%f",&b);
    printf("Enter 3rd number : ");
    scanf("%f",&c);

    if(a>b && a>c)
    printf("The Largest Number is : %f",a);

    else if(b>a && b>c)
    printf("The Largest Number is : %f",b);

    else if(c>a && c>b)
    printf("The Largest Number is : %f",c);

    else
    printf("All are Equal");

    return 0;


}