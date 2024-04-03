#include<stdio.h>

int main()
{
    int n;
    float a,sum=0.0, avg=0.0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int p=n;
    printf("Enter %d numbers :\n",n);
    while(n!=0)
    {
        scanf("%f",&a);
        sum=sum+a;
        n--;
    }

    avg=sum/p;
    printf("The Sum of the numbers is = %f\n",sum);
    printf("The Average of the numbers is = %f",avg);

    return 0;

}